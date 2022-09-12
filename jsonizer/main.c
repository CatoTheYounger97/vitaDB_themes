#include <dirent.h>
#include <stdio.h>
#include <string.h>

void kill_carriage_return(char *s) {
	if (s[strlen(s) - 1] == '\r')
		s[strlen(s) - 1] = 0;
}

int main(int argc, char *argv[]) {
	char fname[256], author[256], description[512], credits[512], bg_type[4], has_music[4], has_font[4];
	struct dirent *p;
	DIR *d = opendir("../themes");
	FILE *f = fopen("themes.json", "w");
	fprintf(f, "[\n");
	int is_not_first = 0;
	while ((p = readdir(d)) != NULL) {
		if (p->d_name[0] != '.') {
			if (is_not_first)
				fprintf(f, ",\n");
			else
				is_not_first++;
			sprintf(fname, "../themes/%s/metadata.ini", p->d_name);
			FILE *f2 = fopen(fname, "r");
			char tag[64];
			char val[1024];
			while (EOF != fscanf(f2, "%[^=]=%[^\n]\n", tag, val)) {
				if (!strcmp(tag, "author"))
					strcpy(author, val);
				else if (!strcmp(tag, "description"))
					strcpy(description, val);
				else if (!strcmp(tag, "credits"))
					strcpy(credits, val);
				else if (!strcmp(tag, "bg_type"))
					strcpy(bg_type, val);
				else if (!strcmp(tag, "has_music"))
					strcpy(has_music, val);
				else if (!strcmp(tag, "has_font"))
					strcpy(has_font, val);
			}
			kill_carriage_return(author);
			kill_carriage_return(description);
			kill_carriage_return(credits);
			kill_carriage_return(bg_type);
			kill_carriage_return(has_music);
			kill_carriage_return(has_font);
			fclose(f2);
			fprintf(f, "    {\n");
			fprintf(f, "        \"name\": \"%s\",\n", p->d_name);
			fprintf(f, "        \"author\": \"%s\",\n", author);
			fprintf(f, "        \"description\": \"%s\",\n", description);
			fprintf(f, "        \"credits\": \"%s\",\n", credits);
			fprintf(f, "        \"bg_type\": \"%s\",\n", bg_type);
			fprintf(f, "        \"has_music\": \"%s\",\n", has_music);
			fprintf(f, "        \"has_font\": \"%s\"\n", has_font);
			fprintf(f, "    }");
		}
	}
	fprintf(f, "\n]\n");
	fclose(f);
	closedir(d);
}

# VitaDB Downloader Themes
- Please see example of theme set ups in the `themes` folder

### Please submit your theme as a Pull Request in compliance with the following:

| Theme Component                 | File Name  | Max File Size     |
| :---                            |    :---    |              :--- |
| Dynamic/Animated Background     | bg.mp4     | <5 mb             |
| Static Image Background         | bg.png     | <5 mb             |
| Music                           | bg.ogg     | <5 mb             |
| UI Colours                      | theme.ini  | -             |
| README with credits and screenshot| README.md  | -               |


### Creating Dynamic/Animated Background 
- It is suggested to transcode videos with handbrake: https://handbrake.fr/
- Import your video file into handbrake. 
- Set 'Preset:' to `Fast 720p30` 
- Under 'Summary' tab set 'Format' to `MP4`
- Under 'Video' tab, set 'Framerate' to `30` and `Constant Framerate`
- Under 'Audio' tab, click `clear` to clear all audio
- In 'Save As' field, set file extension to `.mp4`
- Click 'Start Encode' to proceed

### Static Image Background 
- Images should be sized as 960x544

### Music  
- Music will loop 


### Editing UI Colours  
- Edit UI colours in the theme.ini
- Colours are specified in RGBA, between `0.000000` and `1.000000`
- Alpha = Transaprency
- See table for column mapping

| UI Element      | RED       | GREEN    | BLUE     | ALPHA    |
| :---            |    :---   |     :--- | :---     | :---     |
| TextLabel=	    | 1.000000  | 1.000000 | 1.000000 | 0.000000 |


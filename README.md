# VitaDB Downloader Themes
- Themes for VitaDB Downloader https://github.com/Rinnegatamante/VitaDB-Downloader.
- Please read below for instructions on making themes and see finished themes in the `theme` folder. 
- Themes can be submitted as a Pull Request or uploaded to #vitadb channel in the Vita Nouva Discord. 

![2022-09-09-002852](https://user-images.githubusercontent.com/82458228/189445671-6ad165a4-f4b8-40a9-988c-b34f10a144e6.png)

### Please submit your theme as a `theme.zip` in compliance with the following:

| Theme Component                 | File Name  | Max File Size     |
| :---                            |    :---    |              :--- |
| Animated Background     | bg.mp4     | <5 mb             |
| Static Image Background         | bg.png     | <5 mb             |
| Music                           | bg.ogg     | <5 mb             |
| Font                            | font.ttf   | -             |
| UI Colours                      | theme.ini  | -             |
| README with credits and screenshot| README.md  | -               |


### Creating Animated Background 
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

### Font  
- Rename your TTF file `font.ttf`
- Some fonts may not fit into the UI geometry. 

### Editing UI Colours  
- Edit UI colours in the theme.ini located in `ux0:data/vitaDB/`
- Colours are specified in RGBA, between `0.000000` and `1.000000`
- Alpha = Transaprency
- See table for column mapping

| UI Element      | RED       | GREEN    | BLUE     | ALPHA    |
| :---            |    :---   |     :--- | :---     | :---     |
| TextLabel=	    | 1.000000  | 1.000000 | 1.000000 | 0.000000 |


# UI elements and the related themes.ini field:

| example #1 | example #2  | 
| :---            |    :---    |
| ![2022-09-10-223029](https://user-images.githubusercontent.com/82458228/189502926-28bec487-cbf1-40a1-9f20-ba402b780c89.png) | ![2022-09-10-223040](https://user-images.githubusercontent.com/82458228/189502927-48b507c7-1baa-4741-a12c-a4488a9e77d7.png)  | 

```
FrameBg=                1.000000,0.500000,0.000000,1.000000 // orange - unfilled loading bar and unselected dropdown
FrameBgHovered=         1.000000,1.000000,0.000000,1.000000 // yellow - selected dropdown box 
TitleBgActive=          1.000000,0.000000,0.500000,1.000000 // pink  - screenshot and patch notes window header 
MenuBarBg=              0.500000,0.500000,0.500000,1.000000 // grey  - app header colour
ScrollbarBg=            1.000000,1.000000,1.000000,1.000000 // white - scroll bar background 
ScrollbarGrab=          0.000000,0.000000,0.000000,1.000000 // black - scroll bar pill
```

| example #1 | example #2  | 
| :---            |    :---    |
|![2022-09-11-143600](https://user-images.githubusercontent.com/82458228/189530587-6f1bc337-3871-4d10-9ec2-1c8c30133160.png)  | ![2022-09-11-143658](https://user-images.githubusercontent.com/82458228/189530641-ccc069b2-ae5f-40dd-afb2-abe34215f897.png) | 

```
Button=                 0.500000,0.000000,1.000000,1.000000 // purple - unselected app and search bar 
ButtonHovered=          1.000000,0.000000,0.500000,1.000000 // pink - selected UI element (app list, search bar, dropdown)
Header=                 1.000000,1.000000,1.000000,1.000000 // white - currently active drop down item
HeaderHovered=          0.000000,0.000000,1.000000,1.000000 // blue - selected drop down item
Separator=              1.000000,1.000000,0.000000,1.000000 // yellow - line between top of app list and drop downs
PlotHistogram=          0.000000,1.000000,0.000000,1.000000 // green - loading bar filling
WindowBg=               1.000000,0.500000,0.000000,1.000000 // orange - background of windows and app (automatically transparent)
Border=                 1.000000,0.000000,0.000000,1.000000 // red - border for pop ups (changelog and screenshots etc)
```

| example #1 | example #2  | 
| :---            |    :---    |
| ![2022-09-11-131047](https://user-images.githubusercontent.com/82458228/189526835-1878b5b1-852e-4cf2-abfd-631eec7d7695.png) | ![2022-09-11-131047](https://user-images.githubusercontent.com/82458228/189526839-d880504a-03da-46ce-b0af-516261a2214d.png) | 

```
NavHighlight=           0.500000,0.500000,0.500000,0.000000 // red - selector box on app and other ui elements 
Text=                   1.000000,0.500000,0.000000,1.000000 // orange - all text not specified below
TextLabel=              1.000000,1.000000,0.000000,1.000000 // yellow - text catagory heading 
TextOutdated=           1.000000,0.000000,0.000000,1.000000 // green - outdated app
TextUpdated=            0.000000,1.000000,0.000000,1.000000 // blue - updated app
TextNotInstalled=       1.000000,1.000000,1.000000,1.000000 // white - not installed app
```

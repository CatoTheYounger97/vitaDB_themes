# VitaDB Downloader Themes
- Please see example of theme set ups in the `themes` folder
- Themes can be submitted as a Pull Request or uploaded to #vitadb cahnnel in the Vita Nouva Discord. 

![2022-09-09-002852](https://user-images.githubusercontent.com/82458228/189445671-6ad165a4-f4b8-40a9-988c-b34f10a144e6.png)

### Please submit your theme in compliance with the following:

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
- The larger the music file size, the longer the delay for playback at app start. 


### Editing UI Colours  
- Edit UI colours in the theme.ini located in `ux0:data/vitaDB/`
- Colours are specified in RGBA, between `0.000000` and `1.000000`
- Alpha = Transaprency
- See table for column mapping

| UI Element      | RED       | GREEN    | BLUE     | ALPHA    |
| :---            |    :---   |     :--- | :---     | :---     |
| TextLabel=	    | 1.000000  | 1.000000 | 1.000000 | 0.000000 |


# The UI element and the related themes.ini field are listed below:

![2022-09-10-223029](https://user-images.githubusercontent.com/82458228/189502926-28bec487-cbf1-40a1-9f20-ba402b780c89.png)
![2022-09-10-223040](https://user-images.githubusercontent.com/82458228/189502927-48b507c7-1baa-4741-a12c-a4488a9e77d7.png)
```
FrameBg=                1.000000,0.500000,0.000000,1.000000 // orange - unfilled loading bar and unselected dropdown //
FrameBgHovered=         1.000000,1.000000,0.000000,1.000000 // yellow - selected dropdown box 
TitleBgActive=          1.000000,0.000000,0.500000,1.000000 // pink  - screenshot and patch notes window header 
MenuBarBg=              0.500000,0.500000,0.500000,1.000000 // grey  - app header colour
ScrollbarBg=            1.000000,1.000000,1.000000,1.000000 // white - scroll bar background 
ScrollbarGrab=          0.000000,0.000000,0.000000,1.000000 // black - scroll bar pill
```
![2022-09-10-223454](https://user-images.githubusercontent.com/82458228/189502947-109a0a95-5670-44be-b728-62443b533263.png)
![2022-09-10-223505](https://user-images.githubusercontent.com/82458228/189502948-31f9e6d1-cd96-4a72-acc9-2870ab57cbb7.png)
```
Button=                 0.500000,0.000000,1.000000,0.000000 //purple - unselected app and search bar 
ButtonHovered=          1.000000,0.000000,0.500000,0.000000 //pink - selected app and search bar 
ButtonActive=           0.500000,0.500000,0.500000,0.000000 // not used 
Header=                 1.000000,1.000000,1.000000,0.000000 //white - currently active drop down item
HeaderHovered=          0.000000,0.000000,0.000000,0.000000 //black - selected drop down item
```
![2022-09-10-224227](https://user-images.githubusercontent.com/82458228/189502963-780b1b29-728d-4605-b8f5-bbe6f1786f88.png)
```
NavHighlight=           0.500000,0.500000,0.500000,0.000000 //pink - selector box on app and other ui elements 
TextLabel=              1.000000,1.000000,0.000000,1.000000 // yellow - text heading 
TextOutdated=           1.000000,0.000000,0.000000,1.000000 // red - outdated app
TextUpdated=            0.000000,1.000000,0.000000,1.000000 // green - updated app
```

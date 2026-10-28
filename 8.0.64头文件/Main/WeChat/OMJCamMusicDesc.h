@interface OMJCamMusicDesc : NSObject
{
    BOOL _isMusicEnabled; // +0x8
    int _loopCount; // +0xc
    NSString * _musicID; // +0x10
    NSString * _musicKey; // +0x18
    NSString * _musicName; // +0x20
    NSString * _singerNames; // +0x28
    NSString * _musicFilePath; // +0x30
    NSArray * _lyricInfos; // +0x38
    struct _startTimeOfMusic; // +0x40
    struct _durationOfMusic; // +0x58
    struct _startTimeOfCamScene; // +0x70
}
- (id)init;
- (BOOL)isMusicEnabled;
- (void)setIsMusicEnabled:(BOOL)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)musicKey;
- (void)setMusicKey:(id)arg1;
- (id)musicName;
- (void)setMusicName:(id)arg1;
- (id)singerNames;
- (void)setSingerNames:(id)arg1;
- (id)musicFilePath;
- (void)setMusicFilePath:(id)arg1;
- (struct)startTimeOfMusic;
- (void)setStartTimeOfMusic:(struct)arg1;
- (struct)durationOfMusic;
- (void)setDurationOfMusic:(struct)arg1;
- (struct)startTimeOfCamScene;
- (void)setStartTimeOfCamScene:(struct)arg1;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (id)lyricInfos;
- (void)setLyricInfos:(id)arg1;
- (void).cxx_destruct;
@end

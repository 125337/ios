@interface MusicLogInfo : NSObject
{
    unsigned int _playerType; // +0x8
    NSString * _musicId; // +0x10
    NSString * _musicTitle; // +0x18
    NSString * _singer; // +0x20
    NSString * _appID; // +0x28
    unsigned int _musicDuaration; // +0x30
    unsigned int _duarationToPlay; // +0x34
    unsigned int _duarationOnForeground; // +0x38
    BOOL _bTakeScreenShotAtFirstPage; // +0x3c
    BOOL _bTakeScreenShotAtFullLyricPage; // +0x3d
    unsigned int _musicPlayerEntranceType; // +0x40
    BOOL _bSwipeToNext; // +0x44
    BOOL _bSwipeToPrevious; // +0x45
    unsigned int _playModeWhenStop; // +0x48
    BOOL _bShowFullLyricPage; // +0x4c
    BOOL _bShowFirstPage; // +0x4d
    BOOL _bEasterEggToPlayAll; // +0x4e
    BOOL _bEasterEggToPlayOne; // +0x4f
    NSString * _albumName; // +0x50
    unsigned int _lastPlayTime; // +0x58
    unsigned int _realPlayTime; // +0x5c
    NSString * _brandMusicId; // +0x60
    NSString * _reportStr; // +0x68
}
- (id)init;
- (void)resetLogStat;
- (void)resetMusicPlayerEntranceType;
- (id)genLogInfo;
- (id)genLogInfo13044;
- (BOOL)hasSwiped;
- (BOOL)hasSildeVertical;
- (unsigned int)playerType;
- (void)setPlayerType:(unsigned int)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)musicTitle;
- (void)setMusicTitle:(id)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)musicDuaration;
- (void)setMusicDuaration:(unsigned int)arg1;
- (unsigned int)duarationToPlay;
- (void)setDuarationToPlay:(unsigned int)arg1;
- (unsigned int)duarationOnForeground;
- (void)setDuarationOnForeground:(unsigned int)arg1;
- (BOOL)bTakeScreenShotAtFirstPage;
- (void)setBTakeScreenShotAtFirstPage:(BOOL)arg1;
- (BOOL)bTakeScreenShotAtFullLyricPage;
- (void)setBTakeScreenShotAtFullLyricPage:(BOOL)arg1;
- (unsigned int)musicPlayerEntranceType;
- (void)setMusicPlayerEntranceType:(unsigned int)arg1;
- (BOOL)bSwipeToNext;
- (void)setBSwipeToNext:(BOOL)arg1;
- (BOOL)bSwipeToPrevious;
- (void)setBSwipeToPrevious:(BOOL)arg1;
- (unsigned int)playModeWhenStop;
- (void)setPlayModeWhenStop:(unsigned int)arg1;
- (BOOL)bShowFullLyricPage;
- (void)setBShowFullLyricPage:(BOOL)arg1;
- (BOOL)bShowFirstPage;
- (void)setBShowFirstPage:(BOOL)arg1;
- (BOOL)bEasterEggToPlayAll;
- (void)setBEasterEggToPlayAll:(BOOL)arg1;
- (BOOL)bEasterEggToPlayOne;
- (void)setBEasterEggToPlayOne:(BOOL)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)brandMusicId;
- (void)setBrandMusicId:(id)arg1;
- (unsigned int)lastPlayTime;
- (void)setLastPlayTime:(unsigned int)arg1;
- (unsigned int)realPlayTime;
- (void)setRealPlayTime:(unsigned int)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (void).cxx_destruct;
@end


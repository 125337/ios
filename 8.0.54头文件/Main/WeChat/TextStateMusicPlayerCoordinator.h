@interface TextStateMusicPlayerCoordinator : NSObject
{
    BOOL _isEnabled; // +0x8
    BOOL _resident; // +0x9
    MMMusicInfo * _savedMusicInfo; // +0x10
    double _savedMusicOffset; // +0x18
    MMMusicInfo * _residentMusicInfo; // +0x20
    NSString * _musicId; // +0x28
    NSString * _musicDataURL; // +0x30
    MMTimer * _timer; // +0x38
    id /* block */ _residentHandler; // +0x40
}
+ (id)coordinator;
+ (id)musicPlayerHandlerForTextState:(id)arg1;
+ (BOOL)isPlayingSameMusicWithInfo:(id)arg1;
+ (BOOL)isSameMusicWithId:(id)arg1 dataURL:(id)arg2;
+ (BOOL)isMusicPlayerViewController:(id)arg1;
- (id)init;
- (BOOL)shouldStopMediaForSourceAction;
- (BOOL)shouldStopMediaForExiting;
- (void)exitWithAction:(unsigned long long)arg1;
- (void)exitWithAction:(unsigned long long)arg1 forcePreventMinimize:(BOOL)arg2;
- (BOOL)shouldPauseMediaForIncomingTextState:(id)arg1;
- (void)incomeTextState:(id)arg1;
- (void)enableResidentFromTimer:(id)arg1;
- (void)saveMusicIfNeeded;
- (void)reset;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (id)savedMusicInfo;
- (void)setSavedMusicInfo:(id)arg1;
- (double)savedMusicOffset;
- (void)setSavedMusicOffset:(double)arg1;
- (id)residentMusicInfo;
- (void)setResidentMusicInfo:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)musicDataURL;
- (void)setMusicDataURL:(id)arg1;
- (BOOL)resident;
- (void)setResident:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id /* block */)residentHandler;
- (void)setResidentHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end


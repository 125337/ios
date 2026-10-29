@interface WCFinderSimplePlayerPlayParam : NSObject
{
    BOOL _isSilencePlay; // +0x8
    BOOL _notLoopPlay; // +0x9
    BOOL _isFullScreenViewScene; // +0xa
    BOOL _pauseVideo; // +0xb
    BOOL _isOpenAutoPictureInPicture; // +0xc
    BOOL _isKeepPictureInPictureStatusWhenPlayerStopped; // +0xd
    double _startPlayTime; // +0x10
    unsigned long long _wcPlayerScene; // +0x18
    NSNumber * _bForceUseThumbPlayer; // +0x20
    NSNumber * _bRealTimeSnapshot; // +0x28
    long long _playerContentMode; // +0x30
    NSNumber * _interruptedWhenAppResignActive; // +0x38
}
+ (id)defaultParam;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (BOOL)notLoopPlay;
- (void)setNotLoopPlay:(BOOL)arg1;
- (unsigned long long)wcPlayerScene;
- (void)setWcPlayerScene:(unsigned long long)arg1;
- (BOOL)isFullScreenViewScene;
- (void)setIsFullScreenViewScene:(BOOL)arg1;
- (BOOL)pauseVideo;
- (void)setPauseVideo:(BOOL)arg1;
- (id)bForceUseThumbPlayer;
- (void)setBForceUseThumbPlayer:(id)arg1;
- (id)bRealTimeSnapshot;
- (void)setBRealTimeSnapshot:(id)arg1;
- (long long)playerContentMode;
- (void)setPlayerContentMode:(long long)arg1;
- (BOOL)isOpenAutoPictureInPicture;
- (void)setIsOpenAutoPictureInPicture:(BOOL)arg1;
- (BOOL)isKeepPictureInPictureStatusWhenPlayerStopped;
- (void)setIsKeepPictureInPictureStatusWhenPlayerStopped:(BOOL)arg1;
- (id)interruptedWhenAppResignActive;
- (void)setInterruptedWhenAppResignActive:(id)arg1;
- (void).cxx_destruct;
@end


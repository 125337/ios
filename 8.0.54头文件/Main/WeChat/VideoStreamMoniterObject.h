@interface VideoStreamMoniterObject : NSObject
{
    BOOL _bShouldResumeMusicPlayAtPause; // +0x8
    BOOL _bShouldResumePlayWhenApplicationDidBecomeActive; // +0x9
    BOOL _bResumeRealPlayBeInBugState; // +0xa
    unsigned int _errorType; // +0xc
    unsigned long long _lastBufferTime; // +0x10
    unsigned long long _playerState; // +0x18
    unsigned long long _recoverState; // +0x20
}
- (id)init;
- (void)reportRecoverState;
- (void)resetToLocalPlayer;
- (void)resetSuccess;
- (void)resetError;
- (void)startBuffering;
- (BOOL)isBuffering;
- (BOOL)isPause;
- (BOOL)isInResourceLoaderBugState;
- (BOOL)isInAVPlayerItemBugState;
- (unsigned long long)lastBufferTime;
- (void)setLastBufferTime:(unsigned long long)arg1;
- (unsigned int)errorType;
- (void)setErrorType:(unsigned int)arg1;
- (unsigned long long)playerState;
- (void)setPlayerState:(unsigned long long)arg1;
- (unsigned long long)recoverState;
- (void)setRecoverState:(unsigned long long)arg1;
- (BOOL)bShouldResumeMusicPlayAtPause;
- (void)setBShouldResumeMusicPlayAtPause:(BOOL)arg1;
- (BOOL)bShouldResumePlayWhenApplicationDidBecomeActive;
- (void)setBShouldResumePlayWhenApplicationDidBecomeActive:(BOOL)arg1;
- (BOOL)bResumeRealPlayBeInBugState;
- (void)setBResumeRealPlayBeInBugState:(BOOL)arg1;
@end


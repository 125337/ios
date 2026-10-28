@interface WCPlayerPredicter : NSObject
{
    BOOL _bDataSourceSwitching; // +0x8
    unsigned int _startSwitchTime; // +0xc
    unsigned int _lastSwitchTime; // +0x10
    id <WCPlayerPredicterDelegate> _delegate; // +0x18
    WCPlayerReporter * _reporter; // +0x20
    MMTimer * _timer; // +0x28
    WCPlayerPlayArgs * _playerArgs; // +0x30
    WCPlayerPlaybackInfo * _playbackInfo; // +0x38
    NSObject<WCPlayerMediaExt> * _mediaWrap; // +0x40
    NSMutableArray * _arrDataSource; // +0x48
    NSString * _allBitrateInKB; // +0x50
}
- (id)initWithPlayArgs:(id)arg1 playbackInfo:(id)arg2;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerCallback;
- (void)checkIfSwitchToLowerWithSpeed:(int)arg1 bitrate:(float)arg2;
- (void)checkIfSwitchToHigherWithSpeed:(int)arg1 bitrate:(float)arg2;
- (void)switchDataSourceWithMediaWrap:(id)arg1 switchType:(long long)arg2;
- (unsigned int)getCurrentLagCount;
- (id)getLowerWithSpeed:(int)arg1;
- (id)getHigherWithSpeed:(int)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onSwitchSuccessWithMediaWrap:(id)arg1;
- (int)getCurrentSpeed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)startSwitchTime;
- (void)setStartSwitchTime:(unsigned int)arg1;
- (unsigned int)lastSwitchTime;
- (void)setLastSwitchTime:(unsigned int)arg1;
- (BOOL)bDataSourceSwitching;
- (void)setBDataSourceSwitching:(BOOL)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)arrDataSource;
- (void)setArrDataSource:(id)arg1;
- (id)allBitrateInKB;
- (void)setAllBitrateInKB:(id)arg1;
- (void).cxx_destruct;
@end

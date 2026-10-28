@interface TingBizPlayer : NSObject <TingPlayingItem>
{
    float _playRate; // +0x8
    int _previousEvent; // +0xc
    int _playerKernelType; // +0x10
    TingItem * _tingItem; // +0x18
    TingPlayerConfiguration * _tingConfiguration; // +0x20
    id <TingBizPlayerDelegate> _delegate; // +0x28
    double _currentTime; // +0x30
    double _duration; // +0x38
    double _displayTime; // +0x40
    TingPlayerStateMachine * _stateMachine; // +0x48
}
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;
- (void)updateTingItem:(id)arg1;
- (void)reset;
- (void)onError:(id)arg1;
- (void)onError:(id)arg1 toastMessage:(id)arg2;
- (void)onEvent:(int)arg1 error:(id)arg2;
- (void)onInfoEvent:(int)arg1 error:(id)arg2;
- (double)progress;
- (unsigned int)startTime;
- (void)notifyProgressChanged;
- (id)displayElement;
- (id)view;
- (int)status;
- (BOOL)isPlayRateSupported;
- (BOOL)canSeek;
- (BOOL)isLoading;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (double)bufferedTime;
- (void)prepareToPlay;
- (void)play;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)seekToTime:(double)arg1;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (id)getAuditoryEnhanceEffectArgs;
- (void)setAudioMixPcmBuffer:(id)arg1 hasMore:(BOOL)arg2 streamType:(int)arg3 sampleRate:(int)arg4 sampleFormat:(int)arg5 channelCount:(int)arg6;
- (void)openAuthorPageInViewController:(id)arg1;
- (void)openDetailPageInViewController:(id)arg1;
- (float)playRate;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (id)tingConfiguration;
- (void)setTingConfiguration:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)previousEvent;
- (void)setPreviousEvent:(int)arg1;
- (double)currentTime;
- (double)duration;
- (double)displayTime;
- (int)playerKernelType;
- (id)stateMachine;
- (void)setStateMachine:(id)arg1;
- (void).cxx_destruct;
@end

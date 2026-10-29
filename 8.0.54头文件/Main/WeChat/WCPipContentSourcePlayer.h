@interface WCPipContentSourcePlayer : NSObject <WCPlayerPipMgrExt, WCPlayerPipControllerProtocol>
{
    BOOL _isPipPlaying; // +0x8
    BOOL _isErrorState; // +0x9
    BOOL _isDisplayingOnPipWindow; // +0xa
    BOOL _isOccupyAudioModuleSucc; // +0xb
    BOOL _isNeedDestoryWhenPipStop; // +0xc
    BOOL _isDisplayedInPipSucc; // +0xd
    BOOL _isExpectStartPipWhenResignActive; // +0xe
    BOOL _isPauseMainPlayerWhenNotStartPip; // +0xf
    BOOL _ignoreUpdateDisplayLayerViewFrame; // +0x10
    unsigned int _taskId; // +0x14
    WCPlayerPlayArgs * _playerArgs; // +0x18
    WCPlayerPlaybackInfo * _playbackInfo; // +0x20
    AVPictureInPictureControllerContentSource * _pipContentSource; // +0x28
    UIView * _playerSuperView; // +0x30
    WCPlayerView<WCPipContentSourcePlayerDelegate> * _playerView; // +0x38
    double _duration; // +0x40
    long long _displayStopReason; // +0x48
    CGSize _size; // +0x50
}
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3;
- (void)dealloc;
- (void)addNotification;
- (void)tryClosePipWhenAppActive;
- (void)onApplicationBecomeActive;
- (void)cleanResourceWhenPipNotSuccStart;
- (id)displayLayerView;
- (BOOL)isEnqueueSampleBufferType;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (void)tryCreateAndRegisterPipResource;
- (void)createPipResouce;
- (void)unregisterPipResourcre;
- (void)tryRegisterPipControllerResource;
- (void)stopPipAndCleanResource;
- (void)onActiveAudioModuleFail;
- (id)getPipActiveAudioModule;
- (void)occupyAudioModuleSucc:(BOOL)arg1;
- (BOOL)isForbidStartPlay;
- (void)play;
- (void)pause:(BOOL)arg1;
- (void)stop;
- (void)seekTo:(double)arg1;
- (void)onStartBuffering;
- (void)onBufferingComplete;
- (void)setRate:(double)arg1;
- (void)setLoopBack:(BOOL)arg1;
- (void)onPlayerEnterErrorState;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayCallback:(double)arg1;
- (void)onRenderedOneFrame:(id)arg1;
- (void)updateDisplayLayerViewFrame;
- (id)getDisplayView;
- (void)onStartDisplayOnPipWindow:(long long)arg1;
- (void)onStopDisplayOnPipWindow:(long long)arg1;
- (void)setIsPipPlaying:(BOOL)arg1;
- (BOOL)isRegisteredPipResource;
- (BOOL)isWillGeneratePipWindow;
- (void)onApplicationWillResignActive;
- (void)onWillGeneratePipWindowWhenResignActive;
- (void)pictureInPictureStateDidChange:(long long)arg1;
- (void)restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg1;
- (void)failToStartPictureInPictureWithError:(id)arg1;
- (void)onPipSourcePlayerUnRegisterPipResource:(id)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (BOOL)isPipPlaying;
- (BOOL)isErrorState;
- (void)setIsErrorState:(BOOL)arg1;
- (BOOL)isDisplayingOnPipWindow;
- (void)setIsDisplayingOnPipWindow:(BOOL)arg1;
- (BOOL)isOccupyAudioModuleSucc;
- (void)setIsOccupyAudioModuleSucc:(BOOL)arg1;
- (BOOL)isNeedDestoryWhenPipStop;
- (void)setIsNeedDestoryWhenPipStop:(BOOL)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)pipContentSource;
- (void)setPipContentSource:(id)arg1;
- (id)playerSuperView;
- (void)setPlayerSuperView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)isDisplayedInPipSucc;
- (void)setIsDisplayedInPipSucc:(BOOL)arg1;
- (BOOL)isExpectStartPipWhenResignActive;
- (void)setIsExpectStartPipWhenResignActive:(BOOL)arg1;
- (BOOL)isPauseMainPlayerWhenNotStartPip;
- (void)setIsPauseMainPlayerWhenNotStartPip:(BOOL)arg1;
- (BOOL)ignoreUpdateDisplayLayerViewFrame;
- (void)setIgnoreUpdateDisplayLayerViewFrame:(BOOL)arg1;
- (long long)displayStopReason;
- (void)setDisplayStopReason:(long long)arg1;
- (void).cxx_destruct;
@end


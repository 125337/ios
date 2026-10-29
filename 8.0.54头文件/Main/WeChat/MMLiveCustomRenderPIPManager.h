@interface MMLiveCustomRenderPIPManager : MMUserService <AVPictureInPictureControllerDelegate, MMServiceProtocol>
{
    BOOL _startPIPAutomaticallyFromInlineAbility; // +0x8
    BOOL _isOpenPIP; // +0x9
    BOOL _isPIPStart; // +0xa
    BOOL _isPIPActive; // +0xb
    BOOL _isClosedCompletely; // +0xc
    BOOL _isManualStartPictureInPicture; // +0xd
    BOOL _hasStartedPIPInBackground; // +0xe
    BOOL _isHandlingTempleteVideo; // +0xf
    BOOL _isObserverPIPPossible; // +0x10
    BOOL _isInBackground; // +0x11
    BOOL _needRestartPIPTrackingForOuterPause; // +0x12
    BOOL _needAutoStopPIP; // +0x13
    unsigned long long _currentState; // +0x18
    MMLiveCustomRenderPIPHandleLogic * _handleLogic; // +0x20
    unsigned long long _lastState; // +0x28
    AVPictureInPictureController * _pip; // +0x30
    AVPlayer * _player; // +0x38
    AVPlayerLayer * _playerLayer; // +0x40
    AVMutableComposition * _mixComposition; // +0x48
    AVPlayerItem * _playerItem; // +0x50
    AVMutableVideoComposition * _videoComposition; // +0x58
    MMLiveCustomRenderPIPView * _renderView; // +0x60
    MMLiveCustomRenderView * _customView; // +0x68
    NSObject<OS_dispatch_queue> * _actionQueue; // +0x70
    id /* block */ _actionBlock; // +0x78
    MMLiveCustomRenderPIPStartParam * _startParam; // +0x80
}
+ (int)getPictureInPictureMaxKnownSupportedControlStyle;
+ (__CVBuffer *)pixelBufferFromCGImage:(CGImage *)arg1 size:(CGSize)arg2;
+ (BOOL)appendToAdapter:(id)arg1 pixelBuffer:(__CVBuffer *)arg2 totalFrames:(long long)arg3 frameDuration:(struct)arg4 withInput:(id)arg5 withMovieWriter:(id)arg6;
+ (CGSize)getVideoCreateSize:(CGSize)arg1;
+ (id)checkTempleteVideoExistWithSize:(CGSize)arg1;
+ (BOOL)isTempleteVideoSize:(CGSize)arg1 fit:(CGSize)arg2;
+ (id)getTempleteVideoPathWithSize:(CGSize)arg1;
+ (id)baseResourceDir;
+ (id)getTempleteVideoSuffixPathWithSize:(CGSize)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)initNotifications;
- (void)initDefaultDatas;
- (void)prepareForStartPictureInPicture;
- (void)start:(id)arg1;
- (void)stop;
- (void)stopCompletely:(BOOL)arg1;
- (void)stopWithAutoRestart;
- (void)clear;
- (void)deAttachRenderView;
- (void)updateRenderSize:(CGSize)arg1;
- (CGSize)getTempleteVideoRenderSize;
- (CGSize)getRenderSize;
- (CGSize)getCurrentRenderSize;
- (void)updateHandleLogic:(id)arg1;
- (void)startPIPTracking;
- (void)checkAndRestartPIPTracking;
- (void)clearRestartPIPTrackingTag;
- (void)makePIPPending;
- (void)transferPIPStateToPending;
- (void)recoverPIPState;
- (void)invokeAction:(id /* block */)arg1;
- (void)invokeAction:(id /* block */)arg1 mostDelayDuration:(double)arg2;
- (void)invokeAction:(id /* block */)arg1 mostDelayDuration:(double)arg2 loading:(BOOL)arg3;
- (void)cancelCurrAction;
- (void)checkNeedInvokeAction;
- (void)removeActiveTaskInMode:(unsigned long long)arg1;
- (long long)getPIPPlayerControlStatus;
- (id)pipRenderView;
- (void)pausePIPPlayerWithStopPIP:(BOOL)arg1;
- (void)pausePIPPlayer;
- (BOOL)resumePIPPlayer;
- (void)updateControlStyle;
- (void)reAttachCustomView;
- (void)initRenderView;
- (void)attachRenderView;
- (void)initCustomView;
- (void)attachCustomView;
- (void)deAttachCustomView;
- (void)getTempleteVideoSrc:(id /* block */)arg1;
- (void)initTemplateVideoSrc:(id /* block */)arg1;
- (void)createVideoCompositionWithAsset:(id)arg1;
- (void)initPIPVideoSrcWithCompletion:(id /* block */)arg1;
- (void)resetPIPPlayer;
- (void)addListenToPlayer;
- (void)releasePIPPLayer;
- (void)manualStartPictureInPicture;
- (void)resetState;
- (void)tryCreatePipController;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)clearPIPControllerRecordTags;
- (void)invokePIPPreparedStateCheck;
- (void)observerPIPossibleState;
- (void)unObserverPIPPossibleState;
- (void)onStartPIP;
- (void)onStopPIP;
- (void)checkAndUpdatePIPState;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)onTimeControlStatus:(id)arg1;
- (void)onStatusChange:(id)arg1;
- (void)checkAndInvokeRestartPlayer;
- (void)playbackFinished:(id)arg1;
- (void)ensurePIPPlayerPlaying;
- (void)audioSessionRouteChange:(id)arg1;
- (void)onPictureInPicturePossibleChange:(id)arg1;
- (void)checkPIPPreparedState;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)setIsPIPStart:(BOOL)arg1;
- (void)setStartPIPAutomaticallyFromInlineAbility:(BOOL)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (BOOL)isPIPPrepared;
- (BOOL)isPIPPossible;
- (int)controlStyle;
- (BOOL)supportDynamicUpdateSize;
- (id)getPIPWindow;
- (id)getPipWindowWithClassTypeWithWindows:(id)arg1;
- (id)getPipWindowWithClassNameWithWindows:(id)arg1;
- (void)getTempleteVideoWithSize:(CGSize)arg1 completion:(id /* block */)arg2;
- (void)inner_getTempleteVideoWithSize:(CGSize)arg1 completion:(id /* block */)arg2;
- (BOOL)startPIPAutomaticallyFromInlineAbility;
- (unsigned long long)currentState;
- (BOOL)isOpenPIP;
- (void)setIsOpenPIP:(BOOL)arg1;
- (BOOL)isPIPStart;
- (BOOL)isPIPActive;
- (void)setIsPIPActive:(BOOL)arg1;
- (BOOL)isClosedCompletely;
- (void)setIsClosedCompletely:(BOOL)arg1;
- (BOOL)isManualStartPictureInPicture;
- (void)setIsManualStartPictureInPicture:(BOOL)arg1;
- (BOOL)hasStartedPIPInBackground;
- (void)setHasStartedPIPInBackground:(BOOL)arg1;
- (id)handleLogic;
- (void)setHandleLogic:(id)arg1;
- (unsigned long long)lastState;
- (void)setLastState:(unsigned long long)arg1;
- (id)pip;
- (void)setPip:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)mixComposition;
- (void)setMixComposition:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)actionQueue;
- (void)setActionQueue:(id)arg1;
- (BOOL)isHandlingTempleteVideo;
- (void)setIsHandlingTempleteVideo:(BOOL)arg1;
- (BOOL)isObserverPIPPossible;
- (void)setIsObserverPIPPossible:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)needRestartPIPTrackingForOuterPause;
- (void)setNeedRestartPIPTrackingForOuterPause:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (BOOL)needAutoStopPIP;
- (void)setNeedAutoStopPIP:(BOOL)arg1;
- (id)startParam;
- (void)setStartParam:(id)arg1;
- (void).cxx_destruct;
@end


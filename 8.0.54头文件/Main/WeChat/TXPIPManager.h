@interface TXPIPManager : MMUserService <AVPictureInPictureControllerDelegate, MMServiceProtocol>
{
    BOOL _isOpenPIP; // +0x8
    BOOL _isClosedCompletely; // +0x9
    BOOL _hasStartedPIPInBackground; // +0xa
    BOOL _isManualStartPictureInPicture; // +0xb
    BOOL _isStartCustomPixelTransfer; // +0xc
    BOOL _isPIPActive; // +0xd
    BOOL _isInBackground; // +0xe
    BOOL _startPIPAutomaticallyFromInlineAbility; // +0xf
    BOOL _isRestoreUserInterface; // +0x10
    BOOL _isObserverPIPPossible; // +0x11
    BOOL _needRestartPIPTrackingForOuterPause; // +0x12
    BOOL _needAutoStopPIP; // +0x13
    unsigned int _currentRenderFPS; // +0x14
    int _sourceIndex; // +0x18
    int _lastLogSourceIndex; // +0x1c
    int _lastLogSourceUpdateIndex; // +0x20
    int _unvalidSourceCnt; // +0x24
    unsigned long long _currentState; // +0x28
    WCPIPCustomHandleLogic * _handleLogic; // +0x30
    AVPictureInPictureController * _pip; // +0x38
    AVPlayer * _player; // +0x40
    AVPlayerLayer * _playerLayer; // +0x48
    AVMutableComposition * _mixComposition; // +0x50
    AVPlayerItem * _playerItem; // +0x58
    AVMutableVideoComposition * _videoComposition; // +0x60
    TXPIPRenderView * _renderView; // +0x68
    NSMutableDictionary * _videoFrameDict; // +0x70
    unsigned long long _lastState; // +0x78
    unsigned long long _logCnt; // +0x80
    unsigned long long _sourceUpdateLogCnt; // +0x88
    unsigned long long _lastRefreshSourceTime; // +0x90
    unsigned long long _currentVideoCondition; // +0x98
    id /* block */ _actionBlock; // +0xa0
}
- (void)onBeginRenderPixel;
- (void)onEndRenderPixel;
- (void)onBeginNewRenderBuffer;
- (void)onEndNewRenderBuffer:(CGSize)arg1;
- (void)onBeginAttachWidgets;
- (void)onEndAttachWidgets:(unsigned long long)arg1;
- (void)onBeginRenderBuffer;
- (void)onEndRenderBuffer:(CGSize)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)initNotifications;
- (id)getCurrentBusinessId;
- (void)prepareForStartPictureInPicture;
- (id)pipRenderView;
- (void)start;
- (void)stop;
- (void)stopCompletely:(BOOL)arg1;
- (void)stopWithAutoRestart;
- (void)clear;
- (void)deAttachRenderView;
- (void)reAttachRenderView;
- (void)refresh:(id)arg1 sourceId:(id)arg2;
- (void)updateRenderSize:(CGSize)arg1;
- (CGSize)getCurrentRenderSize;
- (void)updateRenderFPS:(unsigned int)arg1;
- (void)startPIPTracking;
- (void)checkAndRestartPIPTracking;
- (void)clearRestartPIPTrackingTag;
- (void)makePIPPending;
- (void)transferPIPStateToPending;
- (void)recoverPIPState;
- (void)invokeAction:(id /* block */)arg1;
- (void)invokeAction:(id /* block */)arg1 mostDelayDuration:(double)arg2;
- (void)invokeAction:(id /* block */)arg1 mostDelayDuration:(double)arg2 loading:(BOOL)arg3;
- (void)checkNeedInvokeAction;
- (void)removeActiveTaskInMode:(unsigned long long)arg1;
- (void)pausePIPPlayerWithStopPIP:(BOOL)arg1;
- (void)pausePIPPlayer;
- (BOOL)resumePIPPlayer;
- (long long)getPIPPlayerControlStatus;
- (void)initRenderView;
- (void)attachRenderView;
- (void)initTemplateVideoSrc;
- (void)initPIPVideoCompositionWithCompletion:(id /* block */)arg1;
- (void)initTemplateVideoSrcAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)createVideoCompositionWithAsset:(id)arg1;
- (id)actual_createVideoCompositionWithAsset:(id)arg1;
- (void)startPictureInPicture;
- (void)tryCreatePipController;
- (BOOL)updatePIPCanStartPictureInPictureAutomaticallyFromInline;
- (void)clearPIPControllerRecordTags;
- (void)invokePIPPreparedStateCheck;
- (void)observerPIPossibleState;
- (void)unObserverPIPPossibleState;
- (void)stopPictureInPicture;
- (void)manualStartPictureInPicture;
- (void)resetState;
- (void)resetPIPPlayer;
- (void)addListenToPlayer;
- (void)releasePIPPLayer;
- (BOOL)ignoreClearPlayerItem;
- (void)releasePixelBufferSource;
- (void)tagPixelBufferRenderCompleted;
- (void)tagAttachWidgetRenderCompleted;
- (unsigned int)getHandledFPS:(unsigned int)arg1;
- (void)onStartCustomPixelTransfer;
- (void)onStopCustomPixelTransfer;
- (void)playbackFinished:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)onTimeControlStatus:(id)arg1;
- (void)onStatusChange:(id)arg1;
- (void)onPlaybackBufferEmptyChange;
- (void)checkAndInvokeRestartPlayer;
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
- (void)setIsStartCustomPixelTransfer:(BOOL)arg1;
- (BOOL)isStartPIP;
- (BOOL)isManualFitSize;
- (id)videoFrameDict;
- (void)setStartPIPAutomaticallyFromInlineAbility:(BOOL)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (BOOL)isSourcePixelBufferChanged;
- (BOOL)isAttachWidgetChanged;
- (id)currentRenderObjDict;
- (id)currentRenderIdList;
- (void)updateHandleLogic:(id)arg1;
- (void)checkAndUpdatePIPState;
- (void)enableDisplayVideo:(unsigned long long)arg1;
- (void)unableDisplayVideo:(unsigned long long)arg1;
- (void)updateDisplayVideo;
- (BOOL)isCurrentVideoEnabled;
- (BOOL)isPIPPrepared;
- (BOOL)isPIPPossible;
- (BOOL)needCollectSrcPixelBuffer;
- (unsigned long long)currentState;
- (BOOL)isOpenPIP;
- (void)setIsOpenPIP:(BOOL)arg1;
- (BOOL)isClosedCompletely;
- (void)setIsClosedCompletely:(BOOL)arg1;
- (BOOL)hasStartedPIPInBackground;
- (void)setHasStartedPIPInBackground:(BOOL)arg1;
- (BOOL)isManualStartPictureInPicture;
- (void)setIsManualStartPictureInPicture:(BOOL)arg1;
- (id)handleLogic;
- (void)setHandleLogic:(id)arg1;
- (BOOL)isStartCustomPixelTransfer;
- (BOOL)isPIPActive;
- (void)setIsPIPActive:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)startPIPAutomaticallyFromInlineAbility;
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
- (void)setVideoFrameDict:(id)arg1;
- (unsigned long long)lastState;
- (void)setLastState:(unsigned long long)arg1;
- (BOOL)isRestoreUserInterface;
- (void)setIsRestoreUserInterface:(BOOL)arg1;
- (BOOL)isObserverPIPPossible;
- (void)setIsObserverPIPPossible:(BOOL)arg1;
- (unsigned int)currentRenderFPS;
- (void)setCurrentRenderFPS:(unsigned int)arg1;
- (int)sourceIndex;
- (void)setSourceIndex:(int)arg1;
- (int)lastLogSourceIndex;
- (void)setLastLogSourceIndex:(int)arg1;
- (unsigned long long)logCnt;
- (void)setLogCnt:(unsigned long long)arg1;
- (int)lastLogSourceUpdateIndex;
- (void)setLastLogSourceUpdateIndex:(int)arg1;
- (unsigned long long)sourceUpdateLogCnt;
- (void)setSourceUpdateLogCnt:(unsigned long long)arg1;
- (int)unvalidSourceCnt;
- (void)setUnvalidSourceCnt:(int)arg1;
- (unsigned long long)lastRefreshSourceTime;
- (void)setLastRefreshSourceTime:(unsigned long long)arg1;
- (BOOL)needRestartPIPTrackingForOuterPause;
- (void)setNeedRestartPIPTrackingForOuterPause:(BOOL)arg1;
- (unsigned long long)currentVideoCondition;
- (void)setCurrentVideoCondition:(unsigned long long)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (BOOL)needAutoStopPIP;
- (void)setNeedAutoStopPIP:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface MMWebMultiContentHandler : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface, WCAudioModuleDelegate, MinimizeTaskStateInfoDelegate>
{
    BOOL _isListeningAudioPlayPause; // +0x8
    BOOL _isShowCurVC; // +0x9
    MMWebViewController * _webVC; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    id <MMWebMultiContentHandlerDelegate> _delegate; // +0x20
}
+ (id)getBizKeyWithWebVC:(id)arg1;
+ (id)getPassiveTaskBizKeyWithWebVC:(id)arg1;
+ (void)requestIsWebVCPlaying:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTask:(id)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2;
- (void)clearContextData;
- (void)onPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (void)setWebViewMediaPlaybackPlay:(BOOL)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (BOOL)addWindowTaskAnimiated:(BOOL)arg1 webVC:(id)arg2;
- (BOOL)addWindowTaskAnimiated:(BOOL)arg1 webVC:(id)arg2 taskData:(id)arg3;
- (BOOL)isPassive;
- (BOOL)tryUpdateMinimizeSnapShot:(id)arg1;
- (void)removeWindowTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (BOOL)hasMinimizeTask;
- (id)getBizKey;
- (void)cancelMediaPlaybackSuspendedState;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)requestIsTaskPlaying:(id)arg1 completion:(id /* block */)arg2;
- (void)addWebViewToForeground;
- (void)putWebViewBack;
- (void)invokeJSElementPlay;
- (void)requestIsLastPlaybackEnded:(id /* block */)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)startListeningAudioPlayPause;
- (void)stopListeningAudioPlayPause;
- (void)onSilenceSecondaryAudioHint:(id)arg1;
- (void)onWebviewMediaPlaybackStart;
- (void)onWebviewMediaPlaybackEnd;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (BOOL)isShowCurVC;
- (void)setIsShowCurVC:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

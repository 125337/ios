@interface VoicePrintCreateLogic : NSObject <VoicePrintCreateViewControllerDelegate, VoicePrintRecorderDelegate>
{
    BOOL _isResetProcess; // +0x8
    BOOL _firstRecording; // +0x9
    BOOL _needVerify; // +0xa
    BOOL _dismissByLogic; // +0xb
    VoicePrintResourceItem * _resourceItem; // +0x10
    MMUIViewController * _fromViewController; // +0x18
    VoicePrintCreateViewController * _createViewController; // +0x20
    id /* block */ _completion; // +0x28
    id /* block */ _closeHandler; // +0x30
    NSNumber * _result; // +0x38
    VoicePrintMgr * _voicePrintManager; // +0x40
    VoicePrintRecorder * _recorder; // +0x48
    VoicePrintEnvironmentChecker * _environmentChecker; // +0x50
    BaseResponseErrMsgHandler * _pendingVerifyHandler; // +0x58
}
- (id)init;
- (void)startLogicFromViewController:(id)arg1 completion:(id /* block */)arg2 closeHandler:(id /* block */)arg3;
- (void)prepareBeforePresent;
- (void)presentCreateViewControllerWithCompletion:(id /* block */)arg1;
- (void)prepareAfterPresent;
- (void)handlePrepareFailureNewDeviceLimit:(id)arg1;
- (void)handlePrepareFailureNeedVerify:(id)arg1;
- (void)handlePrepareFailureGeneric;
- (void)endCreateWithoutPresent:(unsigned int)arg1;
- (void)attemptGetResourceWithCompletion:(id /* block */)arg1;
- (void)requestMicrophoneWithCompletion:(id /* block */)arg1;
- (void)checkEnvironment;
- (void)showCreate;
- (void)endCreateWithResult:(unsigned int)arg1;
- (void)prepare;
- (void)onCreateError;
- (void)onCreateClose;
- (void)onVerifyAfterOK;
- (void)onRecordButtonPressed;
- (void)onRecordButtonLifted;
- (id)digitTitle;
- (void)onCannotActivateAudioWithWording:(id)arg1;
- (BOOL)isRecordButtonPressed;
- (void)forceRecordButtonLift;
- (void)onRecordingStart;
- (void)onRecordingStopWithLoading:(BOOL)arg1;
- (void)onRecordingFailedWithError:(id)arg1 rollback:(unsigned int)arg2;
- (void)onRecordingFirstStepOK;
- (void)onRecordingOK;
- (void)onVolumeChanged:(double)arg1;
- (BOOL)isResetProcess;
- (id)resourceItem;
- (void)setResourceItem:(id)arg1;
- (void)setIsResetProcess:(BOOL)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)createViewController;
- (void)setCreateViewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)closeHandler;
- (void)setCloseHandler:(id /* block */)arg1;
- (BOOL)isFirstRecording;
- (void)setFirstRecording:(BOOL)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (BOOL)needVerify;
- (void)setNeedVerify:(BOOL)arg1;
- (BOOL)dismissByLogic;
- (void)setDismissByLogic:(BOOL)arg1;
- (id)voicePrintManager;
- (void)setVoicePrintManager:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)environmentChecker;
- (void)setEnvironmentChecker:(id)arg1;
- (id)pendingVerifyHandler;
- (void)setPendingVerifyHandler:(id)arg1;
- (void).cxx_destruct;
@end

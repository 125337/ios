@interface VoicePrintCreateViewController : VoicePrintBaseViewController
{
    BOOL _recordButtonPressed; // +0x70
    id <VoicePrintCreateViewControllerDelegate> _delegate; // +0x78
    NSString * _digits; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)showPrepareError:(id)arg1 canRecover:(BOOL)arg2;
- (void)prepareReset;
- (void)showCreate;
- (void)createReset;
- (void)showCreateError:(id)arg1 rollback:(unsigned int)arg2;
- (void)showRollbackToFirstWithWording:(id)arg1;
- (void)showOK;
- (void)forceRecordButtonLift;
- (void)onClose;
- (void)onOK;
- (void)onVerifyAfterOK;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (void)onStartRecord;
- (void)onStopRecordWithLoading:(BOOL)arg1;
- (void)onVolumeChanged:(double)arg1;
- (BOOL)isResetProcessFromDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)digits;
- (void)setDigits:(id)arg1;
- (BOOL)isRecordButtonPressed;
- (void)setRecordButtonPressed:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface VoicePrintVerifyViewController : VoicePrintBaseViewController <WCAudioModuleDelegate>
{
    BOOL _recordButtonPressed; // +0x68
    BOOL _recording; // +0x69
    id <VoicePrintVerifyViewControllerDelegate> _delegate; // +0x70
    NSString * _digits; // +0x78
    MMTimer * _timeoutTimer; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)showAutioConflictToastWithCompletion:(id /* block */)arg1;
- (void)onStartRecord;
- (void)attemptStopRecordForReason:(unsigned int)arg1;
- (void)stopRecord;
- (void)onStopRecord;
- (void)showError:(id)arg1 canRecover:(BOOL)arg2;
- (void)showOK;
- (void)reset;
- (void)onOK;
- (void)onClose;
- (void)onTimeout;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (void)onVolumeChanged:(double)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)digits;
- (void)setDigits:(id)arg1;
- (BOOL)isRecordButtonPressed;
- (void)setRecordButtonPressed:(BOOL)arg1;
- (BOOL)isRecording;
- (void)setRecording:(BOOL)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end


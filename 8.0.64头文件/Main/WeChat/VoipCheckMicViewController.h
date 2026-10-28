@interface VoipCheckMicViewController : MMUIViewController <IRecordPermissionCheckExt, MonoServiceLogicExt, IAUAudioDeviceExt, StreamVoiceInputControlViewDelegate, WCAudioSessionExt>
{
    BOOL _isProcessForConfirmation; // +0x70
    BOOL _isCheckingPermission; // +0x71
    BOOL _isPressingRecordButton; // +0x72
    BOOL _hasPausedWXMusic; // +0x73
    int _recordState; // +0x74
    int _lastRecordState; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _recordTipLabel; // +0x88
    UILabel * _recordTipDescLabel; // +0x90
    UILabel * _resultTitleLabel; // +0x98
    UILabel * _resultDescLabel; // +0xa0
    UIImageView * _resultIconView; // +0xa8
    UILabel * _recordTipShortDescLabel; // +0xb0
    StreamVoiceInputControlView * _recordButton; // +0xb8
    UIButton * _nextStepButton; // +0xc0
    unsigned long long _micRmsMeterAnimationStartTime; // +0xc8
    unsigned long long _recordStartTime; // +0xd0
    unsigned long long _micRmsCount; // +0xd8
    WCUIAlertView * _alertView; // +0xe0
    unsigned long long _micRms0Count; // +0xe8
    unsigned long long _micRms50Count; // +0xf0
    unsigned long long _micRms300Count; // +0xf8
    unsigned long long _micRms2000Count; // +0x100
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)onReturn;
- (void)initSubviews;
- (void)checkGlobalRecordState;
- (void)updateSubviews;
- (void)setRecordState:(int)arg1;
- (void)realStartRecording;
- (void)checkAndStopRecording;
- (void)stopAudioDevice;
- (void)interruptedByOther;
- (void)onNextStepButtonPressed:(id)arg1;
- (void)checkMicRms;
- (void)checkAndFinishRecording;
- (void)applicationWillResignActiveNotification;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)updateRmsMeterAnimationWithValue:(float)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)audioDeviceInputMeterLevel:(id)arg1 Rms:(float)arg2;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)arg1;
- (void)onStartVoiceInputFail;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recordTipLabel;
- (void)setRecordTipLabel:(id)arg1;
- (id)recordTipDescLabel;
- (void)setRecordTipDescLabel:(id)arg1;
- (id)resultTitleLabel;
- (void)setResultTitleLabel:(id)arg1;
- (id)resultDescLabel;
- (void)setResultDescLabel:(id)arg1;
- (id)resultIconView;
- (void)setResultIconView:(id)arg1;
- (id)recordTipShortDescLabel;
- (void)setRecordTipShortDescLabel:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (id)nextStepButton;
- (void)setNextStepButton:(id)arg1;
- (int)recordState;
- (int)lastRecordState;
- (void)setLastRecordState:(int)arg1;
- (BOOL)isProcessForConfirmation;
- (void)setIsProcessForConfirmation:(BOOL)arg1;
- (BOOL)isCheckingPermission;
- (void)setIsCheckingPermission:(BOOL)arg1;
- (BOOL)isPressingRecordButton;
- (void)setIsPressingRecordButton:(BOOL)arg1;
- (unsigned long long)micRmsMeterAnimationStartTime;
- (void)setMicRmsMeterAnimationStartTime:(unsigned long long)arg1;
- (unsigned long long)recordStartTime;
- (void)setRecordStartTime:(unsigned long long)arg1;
- (unsigned long long)micRmsCount;
- (void)setMicRmsCount:(unsigned long long)arg1;
- (BOOL)hasPausedWXMusic;
- (void)setHasPausedWXMusic:(BOOL)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (unsigned long long)micRms0Count;
- (void)setMicRms0Count:(unsigned long long)arg1;
- (unsigned long long)micRms50Count;
- (void)setMicRms50Count:(unsigned long long)arg1;
- (unsigned long long)micRms300Count;
- (void)setMicRms300Count:(unsigned long long)arg1;
- (unsigned long long)micRms2000Count;
- (void)setMicRms2000Count:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

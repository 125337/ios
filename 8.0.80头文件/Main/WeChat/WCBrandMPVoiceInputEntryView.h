@interface WCBrandMPVoiceInputEntryView : UIView <MMTransparentButtonDelegate, CommonVoiceRecordViewDelegate, IRecordPermissionCheckExt>
{
    BOOL _isCheckingPermission; // +0x8
    BOOL _hasMicPermissionBeforeRequest; // +0x9
    BOOL _isRecordButtonPressed; // +0xa
    BOOL _hasCompleted; // +0xb
    unsigned long long _authScene; // +0x10
    CAGradientLayer * _backgroundGradientLayer; // +0x18
    UIView * _backgroundOverlayView; // +0x20
    MMTransparentButton * _recordButton; // +0x28
    UIButton * _cancelButton; // +0x30
    WCBrandMPVoiceInputRecordView * _recordView; // +0x38
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x40
    id /* block */ _completion; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 authScene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundGradientColors;
- (void)setupUI;
- (id)feedbackGenerator;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)realStartRecording;
- (void)fadeOutEntryContent;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onVoiceRecordEndWithVoice:(id)arg1 duration:(long long)arg2;
- (void)onVoiceRecordEndWithText:(id)arg1;
- (void)onCancelButtonClicked;
- (void)finishWithInputType:(long long)arg1 voiceData:(id)arg2 voiceDuration:(long long)arg3 voiceFileMD5:(id)arg4 voiceFileType:(id)arg5 failDescription:(id)arg6;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (BOOL)isCheckingPermission;
- (void)setIsCheckingPermission:(BOOL)arg1;
- (BOOL)hasMicPermissionBeforeRequest;
- (void)setHasMicPermissionBeforeRequest:(BOOL)arg1;
- (BOOL)isRecordButtonPressed;
- (void)setIsRecordButtonPressed:(BOOL)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (id)backgroundOverlayView;
- (void)setBackgroundOverlayView:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)recordView;
- (void)setRecordView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)hasCompleted;
- (void)setHasCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

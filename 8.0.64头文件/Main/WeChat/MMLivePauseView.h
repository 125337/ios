@interface MMLivePauseView : UIView <ILinkEventExt, MMLivePauseViewModelDelegate>
{
    unsigned int _lastType; // +0x8
    id <MMLivePauseViewDelegate> _delegate; // +0x10
    UILabel * _messageLabel; // +0x18
    UILabel * _accumulatedTimeLabel; // +0x20
    UIButton * _resumeButton; // +0x28
    RichTextView * _contentLabel; // +0x30
    MMLivePauseViewModel * _viewModel; // +0x38
    UIView * _contentView; // +0x40
    UILabel * _subdescriptionLabel; // +0x48
    long long _maxCountdown; // +0x50
    long long _buttonMaxCountdown; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateAccumulatedTime:(long long)arg1;
- (void)clearAccumulatedTime;
- (void)resumeButtonDidClick:(id)arg1;
- (id)realButtonTitle:(long long)arg1;
- (id)realSubDescTitle:(long long)arg1;
- (void)updateCountdownDesc:(long long)arg1;
- (void)clearCountdownDesc;
- (void)updateViewModel:(id)arg1;
- (void)updateContentForceIfNeeded:(id)arg1;
- (void)updateResumeButtonEnabled:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onUpdateEnableResumeButton:(BOOL)arg1;
- (void)onStopCountdown;
- (void)clearPauseView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)accumulatedTimeLabel;
- (void)setAccumulatedTimeLabel:(id)arg1;
- (id)resumeButton;
- (void)setResumeButton:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)subdescriptionLabel;
- (void)setSubdescriptionLabel:(id)arg1;
- (long long)maxCountdown;
- (void)setMaxCountdown:(long long)arg1;
- (long long)buttonMaxCountdown;
- (void)setButtonMaxCountdown:(long long)arg1;
- (unsigned int)lastType;
- (void)setLastType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

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
    UIScrollView * _bodyScrollView; // +0x48
    UIView * _bodyScrollContentView; // +0x50
    MMWebImageView * _iconView; // +0x58
    MMUILabel * _spamReasonTitle; // +0x60
    MMUILabel * _spamReasonLabel; // +0x68
    UILabel * _subdescriptionLabel; // +0x70
    UIButton * _appealButton; // +0x78
    long long _maxCountdown; // +0x80
    long long _buttonMaxCountdown; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutBodyContent;
- (void)layoutBottomContent;
- (void)updateAccumulatedTime:(long long)arg1;
- (void)clearAccumulatedTime;
- (void)updateCountdownDesc:(long long)arg1;
- (void)clearCountdownDesc;
- (void)updateViewModel:(id)arg1;
- (void)updateResumeButtonEnabled:(BOOL)arg1;
- (void)clearPauseView;
- (void)layoutAnchorVerifyPauseViewForMiniGame;
- (BOOL)isCurrentOritationPortrait;
- (double)getBottomButtonTop;
- (id)getRealButtonTitle:(long long)arg1;
- (id)getRealSubDescTitle:(long long)arg1;
- (void)updateContentForceIfNeeded:(id)arg1;
- (void)resumeButtonDidClick:(id)arg1;
- (void)appealButtonDidClick:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onUpdateEnableResumeButton:(BOOL)arg1;
- (void)onStopCountdown;
- (id)contentView;
- (id)bodyScrollView;
- (id)bodyScrollContentView;
- (id)iconView;
- (id)messageLabel;
- (id)accumulatedTimeLabel;
- (id)contentLabel;
- (id)spamReasonTitle;
- (id)spamReasonLabel;
- (id)subdescriptionLabel;
- (id)resumeButton;
- (id)appealButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setAccumulatedTimeLabel:(id)arg1;
- (void)setResumeButton:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setBodyScrollView:(id)arg1;
- (void)setBodyScrollContentView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSpamReasonTitle:(id)arg1;
- (void)setSpamReasonLabel:(id)arg1;
- (void)setSubdescriptionLabel:(id)arg1;
- (void)setAppealButton:(id)arg1;
- (long long)maxCountdown;
- (void)setMaxCountdown:(long long)arg1;
- (long long)buttonMaxCountdown;
- (void)setButtonMaxCountdown:(long long)arg1;
- (unsigned int)lastType;
- (void)setLastType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

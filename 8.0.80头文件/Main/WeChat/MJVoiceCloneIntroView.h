@interface MJVoiceCloneIntroView : UIView
{
    id <MJVoiceCloneIntroViewDelegate> _delegate; // +0x8
    MMUIImageView * _iconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _contentLabel; // +0x20
    WCAgreementCheckBox * _agreementCheckBox; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMUIButton * _goRecordingButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)iconImageView;
- (id)titleLabel;
- (id)contentLabel;
- (id)closeButton;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (id)agreementCheckBox;
- (id)goRecordingButton;
- (void)goRecordingButtonDidTouchUpInside:(id)arg1;
- (void)updateGoRecordingButtonStyleWithAgreementSelected:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setAgreementCheckBox:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setGoRecordingButton:(id)arg1;
- (void).cxx_destruct;
@end

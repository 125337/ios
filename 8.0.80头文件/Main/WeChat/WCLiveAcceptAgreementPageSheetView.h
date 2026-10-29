@interface WCLiveAcceptAgreementPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _messageLabel; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _iconImageView; // +0x20
    NSString * _title; // +0x28
    NSString * _message; // +0x30
    UIImage * _iconImage; // +0x38
    id /* block */ _confirmCallback; // +0x40
}
- (id)initWithTitle:(id)arg1 message:(id)arg2 iconImage:(id)arg3 confirmCallback:(id /* block */)arg4;
- (void)initViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isPhoneLandscape;
- (double)contentTopMargin;
- (CGSize)fitSizeForLabel:(id)arg1 maxWidth:(double)arg2;
- (double)fitContentHeight;
- (double)contentViewHeight;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

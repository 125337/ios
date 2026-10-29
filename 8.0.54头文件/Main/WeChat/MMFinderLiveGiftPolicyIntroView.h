@interface MMFinderLiveGiftPolicyIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>
{
    RichTextView * _introDetailLabel; // +0x8
    UIView * _contentView; // +0x10
    UILabel * _introTitleLabel; // +0x18
    UIButton * _cancelButton; // +0x20
    UIButton * _confirmButton; // +0x28
    id /* block */ _actionBlock; // +0x30
    MMFinderLiveLegalPromotConfig * _config; // +0x38
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateIntroTitleLabel;
- (void)updateIntroDetailLabel;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)introDetailLabel;
- (void)setIntroDetailLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)introTitleLabel;
- (void)setIntroTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end


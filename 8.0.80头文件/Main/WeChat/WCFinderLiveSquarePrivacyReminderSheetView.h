@interface WCFinderLiveSquarePrivacyReminderSheetView : MMPageSheetBaseView
{
    id /* block */ _onDismissed; // +0x8
    UIView * _contentView; // +0x10
    UIImageView * _lockIconImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    UIButton * _confirmButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)textMaxWidth;
- (CGSize)titleSize;
- (CGSize)descSize;
- (double)contentViewHeight;
- (id)contentView;
- (id)lockIconImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)confirmButton;
- (void)confirmButtonClick;
- (void)pageSheetDidDismiss;
- (id /* block */)onDismissed;
- (void)setOnDismissed:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setLockIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

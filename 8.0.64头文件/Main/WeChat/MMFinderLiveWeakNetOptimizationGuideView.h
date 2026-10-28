@interface MMFinderLiveWeakNetOptimizationGuideView : MMPageSheetBaseView
{
    id /* block */ _confirmBlock; // +0x8
    id /* block */ _didDismissBlock; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _iconView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIButton * _closeButton; // +0x38
    UIButton * _confirmButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)pageSheetDidDismiss;
- (void)onCloseButtonTapped;
- (void)onConfirmButtonTapped;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

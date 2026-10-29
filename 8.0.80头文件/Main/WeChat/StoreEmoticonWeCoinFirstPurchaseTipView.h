@interface StoreEmoticonWeCoinFirstPurchaseTipView : MMPageSheetBaseView
{
    BOOL _hasDuoMeasuredLayout; // +0x8
    BOOL _isUpdatingDuoMeasuredLayout; // +0x9
    id <StoreEmoticonWeCoinFirstPurchaseTipViewDelegate> _delegate; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    UIButton * _confirmButton; // +0x28
    double _lastDuoMeasuredContentWidth; // +0x30
    double _lastDuoMeasuredBottomInset; // +0x38
}
- (id)init;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDuoMeasuredLayoutIfNeeded;
- (void)configPageSheet;
- (id)genTipLabelWithFont:(id)arg1 color:(id)arg2 text:(id)arg3;
- (void)onConfirm;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (double)lastDuoMeasuredContentWidth;
- (void)setLastDuoMeasuredContentWidth:(double)arg1;
- (double)lastDuoMeasuredBottomInset;
- (void)setLastDuoMeasuredBottomInset:(double)arg1;
- (BOOL)hasDuoMeasuredLayout;
- (void)setHasDuoMeasuredLayout:(BOOL)arg1;
- (BOOL)isUpdatingDuoMeasuredLayout;
- (void)setIsUpdatingDuoMeasuredLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface StoreEmoticonWeCoinFirstPurchaseTipView : MMPageSheetBaseView
{
    id <StoreEmoticonWeCoinFirstPurchaseTipViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subTitleLabel; // +0x18
    UIButton * _confirmButton; // +0x20
}
- (id)init;
- (void)layoutSubviews;
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
- (void).cxx_destruct;
@end


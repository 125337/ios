@interface WCPayReceiptForwardCardView : UIView
{
    WCPayShareInfo * _shareInfo; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _amountLabel; // +0x18
    UIView * _dividerView; // +0x20
    UIStackView * _rowsStackView; // +0x28
    UIImageView * _watermarkImageView; // +0x30
    NSLayoutConstraint * _amountToDividerConstraint; // +0x38
    NSLayoutConstraint * _dividerToListConstraint; // +0x40
}
- (void)setupSubviews;
- (void)setupConstraints;
- (void)bindData;
- (id)buildRowViewWithLine:(id)arg1;
- (id)initWithShareInfo:(id)arg1;
- (CGSize)fittingSizeForWidth:(double)arg1;
- (BOOL)hasMoneyUnit:(id)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (id)rowsStackView;
- (void)setRowsStackView:(id)arg1;
- (id)watermarkImageView;
- (void)setWatermarkImageView:(id)arg1;
- (id)amountToDividerConstraint;
- (void)setAmountToDividerConstraint:(id)arg1;
- (id)dividerToListConstraint;
- (void)setDividerToListConstraint:(id)arg1;
- (void).cxx_destruct;
@end

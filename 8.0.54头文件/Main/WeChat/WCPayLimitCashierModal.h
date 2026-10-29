@interface WCPayLimitCashierModal : UIView
{
    NSString * _title; // +0x8
    UILabel * _titleLabel; // +0x10
    UIButton * _confirmBtn; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _contentsView; // +0x28
    UIImageView * _arrowView; // +0x30
}
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapConfirm;
- (void)dissmissView;
- (void)showInView;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end


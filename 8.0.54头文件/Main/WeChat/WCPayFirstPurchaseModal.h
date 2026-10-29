@interface WCPayFirstPurchaseModal : UIView
{
    id <WCPayFirstPurchaseModalDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    NSString * _leftBtnWrod; // +0x18
    NSString * _rightBtnWrod; // +0x20
    UILabel * _titleLabel; // +0x28
    UIButton * _leftBtn; // +0x30
    UIButton * _rightBtn; // +0x38
    UIView * _backgroundView; // +0x40
    UIView * _contentsView; // +0x48
    UIImageView * _arrowView; // +0x50
}
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapLeft;
- (void)onTapRight;
- (void)onTapOutSide;
- (void)dissmissView;
- (void)showInView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)leftBtnWrod;
- (void)setLeftBtnWrod:(id)arg1;
- (id)rightBtnWrod;
- (void)setRightBtnWrod:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)leftBtn;
- (void)setLeftBtn:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end


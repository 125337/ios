@interface WCFinderAdDislikeReasonPanelView : UIView
{
    id <WCFinderAdDislikeReasonPanelViewDelegate> _delegate; // +0x8
    UIView * _triangleView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIButton * _rightTopButton; // +0x28
    UIButton * _leftButton; // +0x30
    UIButton * _centerButton; // +0x38
    UIButton * _rightButton; // +0x40
    UIView * _separateLine; // +0x48
    MMUIButton * _bottomButton; // +0x50
    MMUIButton * _maskingView; // +0x58
    UIView * _containerView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)containerView;
- (id)triangleView;
- (id)titleLabel;
- (id)descLabel;
- (id)rightTopButton;
- (id)leftButton;
- (id)centerButton;
- (id)rightButton;
- (id)separateLine;
- (id)bottomButton;
- (id)maskingView;
- (void)resetAllButtonsState;
- (void)onClickRightTopButton:(id)arg1;
- (void)onClickLeftButton:(id)arg1;
- (void)onClickCenterButton:(id)arg1;
- (void)onClickRightButton:(id)arg1;
- (void)onClickBottomButton:(id)arg1;
- (void)onClickMaskView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTriangleView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setRightTopButton:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setCenterButton:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setBottomButton:(id)arg1;
- (void)setMaskingView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end

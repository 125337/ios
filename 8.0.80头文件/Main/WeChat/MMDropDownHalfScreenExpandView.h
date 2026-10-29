@interface MMDropDownHalfScreenExpandView : MMUIView
{
    double m_maxHalfScreenHeight; // +0x8
    BOOL _isHideSetupGradientEffect; // +0x10
    BOOL _isShowingExpandView; // +0x11
    double _halfScreenHeight; // +0x18
    double _expandedViewHeight; // +0x20
    UIView * _detailView; // +0x28
    double _marginWidth; // +0x30
    double _datailViewCornerRadius; // +0x38
    id <MMDropDownHalfScreenViewDelegate> _expandViewDelegate; // +0x40
    double _navigationBarHeight; // +0x48
    UIView * _blurBgView; // +0x50
    UIView * _expandViewContainerView; // +0x58
    UIView * _expandBottomView; // +0x60
    MMUIButton * _closeButton; // +0x68
    UIButton * _bgMaskView; // +0x70
    UIView * _detailViewMaskView; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 navigationBarHeight:(double)arg2;
- (void)initDropDownHalfScreenExpandViewData;
- (void)initDropDownHalfScreenExpandView;
- (void)layoutSubviews;
- (void)showHalfScreenExpandViewWithAnimated:(BOOL)arg1;
- (void)hideHalfScreenExpandViewWithAnimated:(BOOL)arg1;
- (void)setExpandedViewHeight:(double)arg1;
- (void)setMaxHalfScreenHeight:(double)arg1;
- (double)getMaxHalfScreenHeight;
- (void)setDetailView:(id)arg1;
- (double)halfScreenHeight;
- (void)setHalfScreenHeight:(double)arg1;
- (double)currentExpandNavBarHeight;
- (double)getHalfScreenDetailViewMarginTop;
- (double)getHalfScreenDetailViewMarginButtom;
- (double)getMixedViewHeight;
- (double)getDetailViewAnimateInitTop;
- (void)setUpScrollViewGradientLayer;
- (void)hiddenUpScrollViewGradientLayer;
- (BOOL)checkUpScrollViewGradientLayer;
- (void)showExpandViewWithAnimated:(BOOL)arg1;
- (void)showExpandViewWithAnimatedCore:(BOOL)arg1;
- (void)hideExpandViewWithAnimated:(BOOL)arg1;
- (void)onCloseExpandButtonClick;
- (void)onMaskBgClick;
- (void)updateBlurBackgroundMaskIfNeeded;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 showExpandView:(BOOL)arg3 complete:(id /* block */)arg4;
- (double)expandedViewHeight;
- (id)detailView;
- (BOOL)isHideSetupGradientEffect;
- (void)setIsHideSetupGradientEffect:(BOOL)arg1;
- (double)marginWidth;
- (void)setMarginWidth:(double)arg1;
- (double)datailViewCornerRadius;
- (void)setDatailViewCornerRadius:(double)arg1;
- (id)expandViewDelegate;
- (void)setExpandViewDelegate:(id)arg1;
- (double)navigationBarHeight;
- (void)setNavigationBarHeight:(double)arg1;
- (id)blurBgView;
- (void)setBlurBgView:(id)arg1;
- (BOOL)isShowingExpandView;
- (void)setIsShowingExpandView:(BOOL)arg1;
- (id)expandViewContainerView;
- (void)setExpandViewContainerView:(id)arg1;
- (id)expandBottomView;
- (void)setExpandBottomView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (id)detailViewMaskView;
- (void)setDetailViewMaskView:(id)arg1;
- (void).cxx_destruct;
@end

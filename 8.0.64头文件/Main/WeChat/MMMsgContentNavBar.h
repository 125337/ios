@interface MMMsgContentNavBar : UIView <MMMsgTipsExpandViewDelegate, MMMsgHeaderTipsViewDelegate, TipsViewDelegate>
{
    BOOL _hideBottomLine; // +0x8
    BOOL _isShowingTipsBar; // +0x9
    BOOL _isShowingExpandView; // +0xa
    BOOL _tipsBarVisible; // +0xb
    id <MMMsgContentNavBarDelegate> _delegate; // +0x10
    double _navigationBarHeight; // +0x18
    MMMsgContentTipsItem * _currentItem; // +0x20
    NSMutableArray * _penddingItems; // +0x28
    UIView * _navBarTitleView; // +0x30
    UIView * _separatorView; // +0x38
    MMMsgCommonTipsView * _commonTipsView; // +0x40
    MMMsgHeaderTipsView * _bizTipsView; // +0x48
    MMUIButton * _headerCustomButton; // +0x50
    UIImageView * _gradientMaskView; // +0x58
    UIView * _blurBgView; // +0x60
    UIButton * _bgMaskView; // +0x68
    UIView * _expandContainerView; // +0x70
    MMMsgTipsExpandView * _expandCustomView; // +0x78
    UIView * _expandBottomView; // +0x80
    MMUIButton * _closeButton; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 navigationBarHeight:(double)arg2;
- (void)setHideBottomLine:(BOOL)arg1;
- (void)setNavBarTitleView:(id)arg1;
- (void)setNavBarHeight:(double)arg1;
- (void)showTipsBarWithItem:(id)arg1;
- (void)hideTipsBarWithBizType:(long long)arg1 animated:(BOOL)arg2;
- (void)showPenddingTipsBar;
- (double)currentTipsBarHeight;
- (void)setTipsBarVisible:(BOOL)arg1;
- (void)hideCommonTips;
- (void)showExpandView:(id)arg1 animated:(BOOL)arg2;
- (void)hideExpandViewWithAnimated:(BOOL)arg1;
- (void)hideTipsBar:(long long)arg1 animated:(BOOL)arg2;
- (void)hideAllWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)initBizTipsBar;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 showBgMask:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)expandNavBarHeight:(double)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)updateExpandContentView;
- (void)updateBackgroundCornerMask;
- (void)updateTipsBarCustomButton;
- (double)totalExpandHeight;
- (double)expandFooterHeight;
- (void)setIsShowingTipsBar:(BOOL)arg1;
- (void)onCloseExpandButtonClick;
- (void)onMaskBgClick;
- (void)onExpandViewSizeChange:(CGSize)arg1 animateAction:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)onHideExpandView:(BOOL)arg1;
- (void)onTipsBarClick;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onTipsViewHeightChanged:(id)arg1;
- (void)removeCommonTipsView;
- (void)hideExpandViewOfFirstTipsViewAnimated:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideBottomLine;
- (BOOL)isShowingTipsBar;
- (BOOL)isShowingExpandView;
- (void)setIsShowingExpandView:(BOOL)arg1;
- (double)navigationBarHeight;
- (void)setNavigationBarHeight:(double)arg1;
- (id)currentItem;
- (void)setCurrentItem:(id)arg1;
- (id)penddingItems;
- (void)setPenddingItems:(id)arg1;
- (BOOL)tipsBarVisible;
- (id)navBarTitleView;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)commonTipsView;
- (void)setCommonTipsView:(id)arg1;
- (id)bizTipsView;
- (void)setBizTipsView:(id)arg1;
- (id)headerCustomButton;
- (void)setHeaderCustomButton:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)blurBgView;
- (void)setBlurBgView:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (id)expandContainerView;
- (void)setExpandContainerView:(id)arg1;
- (id)expandCustomView;
- (void)setExpandCustomView:(id)arg1;
- (id)expandBottomView;
- (void)setExpandBottomView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end

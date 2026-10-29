@interface MMFinderLiveShopShelfHeaderView : UIView <MMFinderLiveShopShelfHeaderGuideBarDelegate, MMFinderLiveShopShelfHeaderViewModelView>
{
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x8
    MMFinderLiveShopShelfHeaderShopContentView * _headerShopContentView; // +0x10
    MMLiveShopShelfHeaderDragBar * _dragBar; // +0x18
    MMFinderLiveShopShelfHeaderGuideBar * _guideBarView; // +0x20
    PAGView * _promotePagView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupShopCartPromotePagAnimation;
- (void)initView;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onGuideBarClicked;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)tryPreloadGuideBarJumpInfoIfNeeded;
- (void)onShelfContentDisplay;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (void)reportElementsExposed;
- (void)onShelfDisplay;
- (void)tryShowShopCartPromotePagAnimationIfNeeded;
- (void)showShopCartPromotePagAnimationWithPagFile:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)headerShopContentView;
- (void)setHeaderShopContentView:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)guideBarView;
- (void)setGuideBarView:(id)arg1;
- (id)promotePagView;
- (void)setPromotePagView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveShopInfoEcShopView : MMUIView
{
    MMFinderLiveShopInfoEcShopViewModel * _viewModel; // +0x8
    id /* block */ _visibilityChangedHandler; // +0x10
    id /* block */ _heightChangedHandler; // +0x18
    MMFinderLiveShopInfoEcShopHeaderView * _headerView; // +0x20
    MMFinderLiveShopInfoEcShopProductsView * _productsView; // +0x28
    MMFinderLiveShopInfoEcShopTailView * _tailView; // +0x30
    MMUIView * _placeholderView; // +0x38
    NSData * _areaTypeBitmap; // +0x40
    EcsJumpInfo * _cachedShopJumpInfo; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)audienceLogReporter;
- (void)reportTailExposeWithVip:(id)arg1 favorite:(id)arg2 word:(id)arg3;
- (void)setViewModel:(id)arg1;
- (void)attachToViewModel:(id)arg1;
- (id)areaTypeBitmapFromPassBuffer:(id)arg1;
- (BOOL)isAreaEnabled:(int)arg1;
- (double)placeholderHeightForWidth:(double)arg1;
- (void)applyPlaceholderState;
- (void)showCommonErrorToast;
- (void)reloadWithResponse:(id)arg1;
- (void)layoutSubviews;
- (void)openJumpInfo:(id)arg1;
- (void)openVipJumpInfo:(id)arg1;
- (void)updateOverallHidden:(BOOL)arg1;
- (double)computeTotalHeightForWidth:(double)arg1;
- (double)computeTotalHeight;
- (void)notifyHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)viewModel;
- (id /* block */)visibilityChangedHandler;
- (void)setVisibilityChangedHandler:(id /* block */)arg1;
- (id /* block */)heightChangedHandler;
- (void)setHeightChangedHandler:(id /* block */)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)productsView;
- (void)setProductsView:(id)arg1;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (id)placeholderView;
- (void)setPlaceholderView:(id)arg1;
- (id)areaTypeBitmap;
- (void)setAreaTypeBitmap:(id)arg1;
- (id)cachedShopJumpInfo;
- (void)setCachedShopJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

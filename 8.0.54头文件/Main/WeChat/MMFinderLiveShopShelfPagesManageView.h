@interface MMFinderLiveShopShelfPagesManageView : UIView
{
    id <MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate> _edgeEventDelegate; // +0x8
    id <MMFinderLiveShopShelfPageCornerCropper> _cornerCropper; // +0x10
    NSArray * _pages; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)edgePanGesture:(id)arg1;
- (void)layoutSubviews;
- (void)setPages:(id)arg1;
- (void)pushPage:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)popCurrentPageAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cleanMiddlePages;
- (id)edgeEventDelegate;
- (void)setEdgeEventDelegate:(id)arg1;
- (id)cornerCropper;
- (void)setCornerCropper:(id)arg1;
- (id)pages;
- (void).cxx_destruct;
@end


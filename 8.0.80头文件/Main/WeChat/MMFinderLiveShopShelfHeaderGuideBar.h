@interface MMFinderLiveShopShelfHeaderGuideBar : UIView
{
    id <MMFinderLiveShopShelfHeaderGuideBarDelegate> _delegate; // +0x8
    FinderShopShelfTopGuideBar * _guideInfo; // +0x10
    NSDictionary * _reportParams; // +0x18
    UIView * _guideLayout; // +0x20
    UIView * _centerLayout; // +0x28
    UIView * _container; // +0x30
    UIView * _bottomCornerView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpView;
- (void)layoutSubviews;
- (CGSize)calculateLayoutSize:(id)arg1;
- (void)refreshGuideLayoutWithInfo:(id)arg1 headerView:(id)arg2 liveTaskId:(id)arg3;
- (void)refreshGuideLayoutWithInfo:(id)arg1 dragBar:(id)arg2 liveTaskId:(id)arg3;
- (void)onGuideBarDisplay;
- (void)handleGuideLayoutTap:(id)arg1;
- (id)createItemView:(id)arg1;
- (double)getMarginForView:(id)arg1;
- (unsigned long long)getPositionForView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)guideInfo;
- (void)setGuideInfo:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id)guideLayout;
- (void)setGuideLayout:(id)arg1;
- (id)centerLayout;
- (void)setCenterLayout:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)bottomCornerView;
- (void)setBottomCornerView:(id)arg1;
- (void).cxx_destruct;
@end

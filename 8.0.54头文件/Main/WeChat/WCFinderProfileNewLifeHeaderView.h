@interface WCFinderProfileNewLifeHeaderView : UICollectionReusableView
{
    WCFinderProfileNewLifeHeaderViewModel * _viewModel; // +0x8
    WCFinderProfileNewLifeBannerView * _bannerView; // +0x10
    NSMutableArray * _gadgetViews; // +0x18
}
+ (double)topPadding;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateLayouts;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)refresh;
- (void)updateBannerReportParams:(id)arg1;
- (void)updateGadgets;
- (id)generateGadgetViewWithSvgIconName:(id)arg1 count:(unsigned int)arg2;
- (void)onTapBanner;
- (id)viewModel;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)gadgetViews;
- (void)setGadgetViews:(id)arg1;
- (void).cxx_destruct;
@end


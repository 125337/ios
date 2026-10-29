@interface WCFinderLandScapeCoverInfoView : MMUIView
{
    CAGradientLayer * _gradientLayer; // +0x8
    WCFinderFeedImageCDNView * _coverView; // +0x10
    UILabel * _timeLabel; // +0x18
    WCFinderStaticCoverInfoView * _infoView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (void).cxx_destruct;
@end


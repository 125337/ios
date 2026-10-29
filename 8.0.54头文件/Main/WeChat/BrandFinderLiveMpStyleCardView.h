@interface BrandFinderLiveMpStyleCardView : BrandFinderLiveBaseCardView
{
    MMWebImageView * _backgroundCoverImageView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)configLiveOverView;
- (void)configShadowStyle:(id)arg1;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)updateLiveStatus:(BOOL)arg1 statusWording:(id)arg2;
- (void)updateRecommendReason:(id)arg1;
- (void)updateRecommendReasonLabelDisplay;
- (void)loadData;
- (void)updateLiveStatusViewDisplay;
- (double)titleMaxWidth;
- (id)backgroundCoverImageView;
- (void)setBackgroundCoverImageView:(id)arg1;
- (void).cxx_destruct;
@end


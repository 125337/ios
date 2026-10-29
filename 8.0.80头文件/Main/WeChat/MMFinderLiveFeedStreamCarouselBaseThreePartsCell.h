@interface MMFinderLiveFeedStreamCarouselBaseThreePartsCell : MMFinderLiveFeedStreamCarouselCell
{
    MMFinderLiveFeedStreamBaseRecommendWordingView * _baseRecommendWordingView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithWording:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onClicked;
- (id)baseRecommendWordingView;
- (void)setBaseRecommendWordingView:(id)arg1;
- (void).cxx_destruct;
@end

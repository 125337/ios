@interface MMFinderLiveFeedStreamProductHotSellingView : MMFinderLiveFeedStreamWidgetBaseView
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _bubble; // +0x8
    MMFinderLiveFeedStreamBaseRecommendWordingView * _baseRecommendWordingView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)setBubble:(id)arg1;
- (id)reportWording;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTaskId:(id)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)bubble;
- (id)baseRecommendWordingView;
- (void)setBaseRecommendWordingView:(id)arg1;
- (void).cxx_destruct;
@end

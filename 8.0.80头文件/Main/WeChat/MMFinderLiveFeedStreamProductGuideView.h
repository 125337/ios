@interface MMFinderLiveFeedStreamProductGuideView : MMFinderLiveFeedStreamWidgetBaseView
{
    id <MMFinderLiveFeedStreamProductGuideViewDelegate> _delegate; // +0x8
    FinderWindowProductInfo * _productInfo; // +0x10
    NSString * _recommendTag; // +0x18
    unsigned long long _tagType; // +0x20
    MMFinderLiveFeedStreamBaseRecommendWordingView * _baseRecommendWordingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onActionButtonDidClick;
- (void)setProductInfo:(id)arg1;
- (id)reportWording;
- (void)setRecommendTag:(id)arg1;
- (void)updateWording;
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)baseRecommendWordingView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productInfo;
- (id)recommendTag;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (void)setBaseRecommendWordingView:(id)arg1;
- (void).cxx_destruct;
@end

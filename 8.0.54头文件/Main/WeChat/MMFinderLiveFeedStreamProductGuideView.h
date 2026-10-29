@interface MMFinderLiveFeedStreamProductGuideView : MMFinderLiveFeedStreamWidgetBaseView
{
    id <MMFinderLiveFeedStreamProductGuideViewDelegate> _delegate; // +0x8
    FinderWindowProductInfo * _productInfo; // +0x10
    NSString * _recommendTag; // +0x18
    unsigned long long _tagType; // +0x20
    UIView * _containerView; // +0x28
    UILabel * _recommendTagView; // +0x30
    UIView * _splitLineView; // +0x38
    PAGView * _playingIconView; // +0x40
    UILabel * _guideLabel; // +0x48
    UILabel * _productTitleLabel; // +0x50
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)onActionButtonDidClick;
- (void)dealloc;
- (void)setProductInfo:(id)arg1;
- (void)setRecommendTag:(id)arg1;
- (void)setTaskId:(id)arg1;
- (void)prepareForReuse;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)containerView;
- (id)playingIconView;
- (id)guideLabel;
- (id)splitLineView;
- (id)productTitleLabel;
- (id)recommendTagView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productInfo;
- (id)recommendTag;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setRecommendTagView:(id)arg1;
- (void)setSplitLineView:(id)arg1;
- (void)setPlayingIconView:(id)arg1;
- (void)setGuideLabel:(id)arg1;
- (void)setProductTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderLiveHomePageAggregationEntertainmentChannelsCard : WCFinderLiveHomePageAggregationBaseCard
{
    MMLiveColorfulLabel * _titleLabel; // +0x8
    MMLiveColorfulLabel * _subTitleLabel; // +0x10
    UIView * _containerCollectionView; // +0x18
    NSArray * _collectionViews; // +0x20
    CADisplayLink * _displayLink; // +0x28
    double _layoutHeight; // +0x30
    unsigned long long _calculateLineCount; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)recreateCollectionView;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateWithCard:(id)arg1;
- (void)reloadCollectionView;
- (void)handleScroll;
- (void)layoutSubviews;
- (id)currentGroupEntryBuffer;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)startScroll;
- (void)stopScroll;
- (id)displayLink;
- (void)updateInitialOffset;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)containerCollectionView;
- (void)setContainerCollectionView:(id)arg1;
- (id)collectionViews;
- (void)setCollectionViews:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (double)layoutHeight;
- (void)setLayoutHeight:(double)arg1;
- (unsigned long long)calculateLineCount;
- (void)setCalculateLineCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


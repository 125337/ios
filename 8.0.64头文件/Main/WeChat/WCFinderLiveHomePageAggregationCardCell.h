@interface WCFinderLiveHomePageAggregationCardCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageFeedAggregationCardVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>
{
    id <WCFinderLiveHomePageAggregationCardCellDelegate> _delegate; // +0x8
    WCFinderLiveHomePageFeedAggregationCardVM * _feedVM; // +0x10
    WCFinderLiveHomePageAggregationBaseCard * _currentCard; // +0x18
}
+ (id)cardMode2CardClassMap;
+ (Class)classWithMode:(unsigned long long)arg1;
+ (Class)cardClass;
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initCardViewIfNeeded;
- (void)layoutSubviews;
- (void)updateWithFeedVM:(id)arg1;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)didMoveToWindow;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (void)onAggregationCardUpdate;
- (void)onAggregationCardGetPagFile;
- (unsigned long long)getCurrentLoopPageIndex;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)currentCard;
- (void)setCurrentCard:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveFeedExtraInfoFetcher : NSObject
{
    int _commentScene; // +0x8
    FinderLiveStreamGetAsyncLoadInfoConfig * _asyncLoadInfoConfig; // +0x10
    id <MMFinderLiveFeedExtraInfoFetcherDelegate> _delegate; // +0x18
    NSMutableDictionary * _refreshExtraInfoTsDict; // +0x20
}
- (id)initWithCommentScene:(int)arg1;
- (void)resetRefreshRecords;
- (void)setAsyncLoadInfoConfig:(id)arg1;
- (void)reinitRefreshExtraInfoTsDict;
- (BOOL)enableRefreshHighlightTag;
- (BOOL)enableRefreshAggregationCard;
- (BOOL)enableRefreshProductCard;
- (BOOL)enableRefreshEntertainmentCard;
- (id)getUidUnitWithItem:(id)arg1;
- (BOOL)refreshFeedExtraInfoIfNeeded:(id)arg1 aggregationCardList:(id)arg2 productRefreshItems:(id)arg3 entertainmentRefreshItems:(id)arg4;
- (void)updateAsyncLoadConfigIntervals:(id)arg1 requestScenes:(id)arg2;
- (id)asyncLoadInfoConfig;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)refreshExtraInfoTsDict;
- (void)setRefreshExtraInfoTsDict:(id)arg1;
- (void).cxx_destruct;
@end


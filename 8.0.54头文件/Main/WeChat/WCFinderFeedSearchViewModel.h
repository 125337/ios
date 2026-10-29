@interface WCFinderFeedSearchViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    id <WCFinderFeedSearchViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _topicTitleList; // +0x18
    NSMutableArray * _searchItemModelList; // +0x20
    unsigned long long _state; // +0x28
    unsigned long long _refreshTime; // +0x30
    NSData * _lastBuf; // +0x38
    WCFinderBaseCgi * _cgi; // +0x40
    WCFinderFeedSearchParams * _searchParams; // +0x48
}
- (id)init;
- (void)loadLocalFavTopicData;
- (void)fetchSvrFavTopicData;
- (void)handleFavTopicData:(id)arg1;
- (void)loadLocalFeedSearchData;
- (void)fetchSvrFeedSearchFirstPageData:(id)arg1;
- (void)fetchSvrFeedSearchNextPageData;
- (void)fetchFavServerDataWithLastBuffer:(id)arg1;
- (BOOL)hasMoreSearchData;
- (unsigned long long)searchItemModelCount;
- (id)searchItemModelAtIndex:(unsigned long long)arg1;
- (void)clearFeedSearchData;
- (void)resetSearchCgi;
- (void)resetStateAndLastBuf;
- (void)reportSearchEventWithItemCount:(unsigned long long)arg1;
- (void)reportExposeEventWithItemIndex:(unsigned long long)arg1;
- (void)reportClickEventWithItemIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicTitleList;
- (void)setTopicTitleList:(id)arg1;
- (id)searchItemModelList;
- (void)setSearchItemModelList:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (id)searchParams;
- (void)setSearchParams:(id)arg1;
- (void).cxx_destruct;
@end


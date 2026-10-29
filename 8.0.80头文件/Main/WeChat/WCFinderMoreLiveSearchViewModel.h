@interface WCFinderMoreLiveSearchViewModel : NSObject <WCFinderContactExt>
{
    BOOL _queryContinueFlag; // +0x8
    id <WCFinderMoreLiveSearchViewModelDelegate> _delegate; // +0x10
    NSString * _searchSessionid; // +0x18
    NSString * _latestQueryText; // +0x20
    NSString * _latestRequestID; // +0x28
    NSData * _lastBuffer; // +0x30
    NSMutableArray * _allSearchInfoItems; // +0x38
    NSMutableArray * _allSearchDataItems; // +0x40
    unsigned long long _refreshTime; // +0x48
    unsigned long long _searchSourceType; // +0x50
    WCFinderBaseCgi * _finderSearchCGI; // +0x58
}
- (id)init;
- (void)resetSearchStatus;
- (id)latestQueryString;
- (BOOL)isSearchFeedItemEmpty;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (BOOL)isRepeatSearch:(id)arg1;
- (void)appendInfos:(id)arg1;
- (void)appendDataItems:(id)arg1;
- (long long)dataItemSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (BOOL)isSearchInfoCountGreaterThanMax;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (BOOL)isSearchInfoSection:(unsigned long long)arg1;
- (BOOL)isSearchDataItemSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (BOOL)isNoMoreData;
- (id)generateSearchContactViewModel;
- (void)onQueryNextPageDataItem;
- (void)queryContactWith:(id)arg1;
- (void)queryContactWith:(id)arg1 sessionBuf:(id)arg2 scene:(unsigned long long)arg3;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchSessionid;
- (void)setSearchSessionid:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)allSearchInfoItems;
- (void)setAllSearchInfoItems:(id)arg1;
- (id)allSearchDataItems;
- (void)setAllSearchDataItems:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)searchSourceType;
- (void)setSearchSourceType:(unsigned long long)arg1;
- (id)finderSearchCGI;
- (void)setFinderSearchCGI:(id)arg1;
- (void).cxx_destruct;
@end

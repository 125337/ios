@interface WCAppAuthLogicController : MMObject <WCAppAuthFetchLogicDelegate, WCAppAuthSearchLogicDelegate, WCAppAuthOpLogicDelegate>
{
    NSMutableDictionary * _dicFetchResult; // +0x8
    id <WCAppAuthLogicDelegate> _delegate; // +0x10
    WCAppAuthFetchLogic * _fetchLogic; // +0x18
    WCAppAuthSearchLogic * _searchLogic; // +0x20
    WCAppAuthOpLogic * _opLogic; // +0x28
    NSMutableArray * _fetchResult; // +0x30
    NSMutableArray * _searchResult; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)fetchList;
- (void)searchApps:(id)arg1;
- (void)cancelSearch;
- (void)modifyOAuthLogin:(id)arg1 Scene:(unsigned int)arg2;
- (void)modifyAppScope:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (void)deleteApp:(id)arg1 scene:(unsigned int)arg2 inView:(id)arg3;
- (void)doDeleteApp:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)isFetchEnd;
- (BOOL)isSearching;
- (BOOL)isSearchEnd;
- (id)getFetchedAppIds;
- (id)getSearchedAppIds;
- (void)clearSearchedResult;
- (id)getFetchResultItemByIndex:(unsigned int)arg1;
- (id)getSearchResultItemByIndex:(unsigned int)arg1;
- (id)getFetchResultItemByAppId:(id)arg1;
- (void)fetchDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)fetchDidSucceedWithApps:(id)arg1;
- (void)fetchDidFinish;
- (void)searchWillBeginNewTextSearch;
- (void)searchDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)searchDidSucceedWithApps:(id)arg1;
- (void)searchDidFinish;
- (void)modificationDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)modificationDidSucceed:(int)arg1;
- (void)deletionDidSucceedForAppId:(id)arg1;
- (void)deletionDidFail:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fetchLogic;
- (void)setFetchLogic:(id)arg1;
- (id)searchLogic;
- (void)setSearchLogic:(id)arg1;
- (id)opLogic;
- (void)setOpLogic:(id)arg1;
- (id)fetchResult;
- (void)setFetchResult:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (void).cxx_destruct;
@end

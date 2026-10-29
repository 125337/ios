@interface WCFinderSearchLiveGiftCGI : WCFinderLiveBaseCgi
{
    unsigned int _currentGroupId; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _searchKeyword; // +0x30
    NSData * _currentTabCtx; // +0x38
    NSData * _lastBuffer; // +0x40
    NSString * _searchSessionId; // +0x48
}
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 searchKeyword:(id)arg3 currentGroupId:(unsigned int)arg4 currentTabCtx:(id)arg5 lastBuffer:(id)arg6 searchSessionId:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (unsigned int)currentGroupId;
- (void)setCurrentGroupId:(unsigned int)arg1;
- (id)currentTabCtx;
- (void)setCurrentTabCtx:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (void).cxx_destruct;
@end

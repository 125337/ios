@interface WCFinderLiveSearchMoreGamesCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    NSString * _searchText; // +0x18
    NSString * _nextOffset; // +0x20
}
- (id)initWithSearchText:(id)arg1 nextOffset:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)convertGameUserInfoList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)nextOffset;
- (void)setNextOffset:(id)arg1;
- (void).cxx_destruct;
@end


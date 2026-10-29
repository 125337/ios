@interface MMECCustomerSearchOrderListCGI : MMECOrderBaseCgi
{
    unsigned int _offset; // +0x8
    unsigned int _pageSize; // +0xc
    NSString * _keyword; // +0x10
    NSString * _filteringAppId; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 pageSize:(unsigned int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)pageSize;
- (void)setPageSize:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

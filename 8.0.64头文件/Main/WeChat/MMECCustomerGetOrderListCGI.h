@interface MMECCustomerGetOrderListCGI : MMECOrderBaseCgi
{
    unsigned int _orderType; // +0x8
    unsigned int _evaluationStatus; // +0xc
    unsigned int _pageSize; // +0x10
    NSString * _filteringAppId; // +0x18
    NSString * _lastIndex; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 pageSize:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)orderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)orderType;
- (void)setOrderType:(unsigned int)arg1;
- (unsigned int)evaluationStatus;
- (void)setEvaluationStatus:(unsigned int)arg1;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (id)lastIndex;
- (void)setLastIndex:(id)arg1;
- (unsigned int)pageSize;
- (void)setPageSize:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

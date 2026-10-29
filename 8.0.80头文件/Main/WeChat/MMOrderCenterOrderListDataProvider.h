@interface MMOrderCenterOrderListDataProvider : NSObject <MMOrderCenterOrderDataProvider>
{
    BOOL _hasMoreOrders; // +0x8
    BOOL _newFetch; // +0x9
    unsigned int _orderType; // +0xc
    unsigned int _evaluationStatus; // +0x10
    NSString * _lastIndex; // +0x18
    NSString * _filteringAppId; // +0x20
}
+ (id)providerWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2 evaluationStatus:(unsigned int)arg3;
+ (id)providerWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2;
+ (id)providerWithOrderType:(unsigned int)arg1;
- (id)initWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2 evaluationStatus:(unsigned int)arg3;
- (id)initWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2;
- (id)initWithOrderType:(unsigned int)arg1;
- (void)getOrdersWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2 forceRefresh:(BOOL)arg3;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)arg1 withAttachedIndex:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)noDataPrompt;
- (unsigned int)orderType;
- (void)setOrderType:(unsigned int)arg1;
- (unsigned int)evaluationStatus;
- (void)setEvaluationStatus:(unsigned int)arg1;
- (id)lastIndex;
- (void)setLastIndex:(id)arg1;
- (BOOL)hasMoreOrders;
- (void)setHasMoreOrders:(BOOL)arg1;
- (BOOL)newFetch;
- (void)setNewFetch:(BOOL)arg1;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (void).cxx_destruct;
@end

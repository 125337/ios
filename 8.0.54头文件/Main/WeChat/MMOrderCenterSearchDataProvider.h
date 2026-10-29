@interface MMOrderCenterSearchDataProvider : NSObject <MMOrderCenterOrderDataProvider>
{
    BOOL _newSearch; // +0x8
    BOOL _hasMoreOrders; // +0x9
    unsigned int _offset; // +0xc
    NSString * _keyword; // +0x10
    NSString * _filteringAppId; // +0x18
}
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2;
- (void)setKeyword:(id)arg1;
- (void)getOrdersWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2 forceRefresh:(BOOL)arg3;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)arg1 withAttachedIndex:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)noDataPrompt;
- (id)keyword;
- (id)filteringAppId;
- (void)setFilteringAppId:(id)arg1;
- (BOOL)newSearch;
- (void)setNewSearch:(BOOL)arg1;
- (BOOL)hasMoreOrders;
- (void)setHasMoreOrders:(BOOL)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (void).cxx_destruct;
@end


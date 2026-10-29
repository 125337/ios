@interface MMOrderCenterDataService : MMUserService <MMServiceProtocol>
{
    BOOL _prefetchedOrderDetailsWeApp; // +0x8
    NSArray * _prefetchedTabCountItems; // +0x10
    WCTDatabase * _database; // +0x18
    WCTTable * _orderSearchHistoryTable; // +0x20
}
+ (BOOL)isOrderCenterEnabledForFinder;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getOrderListWithOrderType:(unsigned int)arg1 evaluationStatus:(unsigned int)arg2 filteringAppId:(id)arg3 lastIndex:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)searchForOrdersWithKeyword:(id)arg1 filteringAppId:(id)arg2 offset:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)updatePrefetchedLandingPageTabCountItemsWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)invalidatePrefetchedLandingPageTabCountItems;
- (void)getLandingPageTabCountItemsWithFilteringAppId:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)prefetchOrderDetailsWeApp;
- (void)invalidatePrefetchedOrderDetailsWeApp;
- (id)getSearchHistory;
- (BOOL)addSearchHistory:(id)arg1;
- (BOOL)removeSearchHistory:(id)arg1;
- (BOOL)clearSearchHistory;
- (void)willRecoverDatabase;
- (id)databasePath;
- (void)openDatabase;
- (void)closeDatabase;
- (void)setupTables;
- (id)createTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)prefetchedTabCountItems;
- (void)setPrefetchedTabCountItems:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)orderSearchHistoryTable;
- (void)setOrderSearchHistoryTable:(id)arg1;
- (BOOL)prefetchedOrderDetailsWeApp;
- (void)setPrefetchedOrderDetailsWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end


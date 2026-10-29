@interface MegaVideoProfileVideoModelCpp : UnitRCObjcBaseProxyClass <MegaVideoProfileVideoModel>
+ (id)createModel:(id)arg1 fromFeed:(id)arg2 myFinferUsername:(id)arg3;
- (int)modelType;
- (id)identifier;
- (void)setMonitor:(id)arg1;
- (BOOL)isLoading;
- (BOOL)isInitialLoading;
- (BOOL)isLoadingNew;
- (BOOL)hasNew;
- (BOOL)isLoadingMore;
- (BOOL)hasMore;
- (int)itemCount;
- (id)itemAtIndex:(int)arg1;
- (int)indexOfItem:(id)arg1;
- (id)itemIdList;
- (id)itemList;
- (void)loadItemList:(id /* block */)arg1;
- (void)insertItemAtIndex:(id)arg1 index:(int)arg2;
- (void)replaceItemAtIndex:(id)arg1 index:(int)arg2;
- (BOOL)deleteItemAtIndex:(int)arg1;
- (BOOL)deleteItem:(id)arg1;
- (void)appendList:(id)arg1;
- (void)clearList;
- (void)fetchData:(int)arg1 callback:(id /* block */)arg2;
- (void)addModelListener:(id)arg1;
- (void)removeModelListener:(id)arg1;
- (int)remainCountForPrefetchNext;
- (void)setRemainCountForPrefetchNext:(int)arg1;
- (id)splitWording;
- (int)splitIndex;
@end


@interface TingApiListSourceCpp : UnitRCObjcBaseProxyClass <TingApiListSource>
+ (id)createWithTingItems:(id)arg1;
+ (id)createWithListenIdList:(id)arg1;
+ (id)createWithCategory:(id)arg1 itemList:(id)arg2 mergeWithBaseListenId:(BOOL)arg3;
+ (id)createWithCategory:(id)arg1 itemList:(id)arg2;
+ (id)createWithCategory:(id)arg1;
+ (id)createWithCategory:(id)arg1 itemList:(id)arg2 mergeWithBaseListenId:(BOOL)arg3 sessionBuffer:(id)arg4;
+ (id)createWithTapeInfoAndTingListSource:(id)arg1 context:(id)arg2;
- (void)refresh;
- (void)loadMore;
- (void)loadMore:(int)arg1;
- (BOOL)hasMore;
- (BOOL)hasMore:(int)arg1;
- (void)setHasMore:(BOOL)arg1;
- (void)setHasMore:(BOOL)arg1 direction:(int)arg2;
- (int)count;
- (void)setScene:(int)arg1;
- (int)getScene;
- (id)getItemInfo:(int)arg1;
- (id)getItems;
- (void)checkRefresh:(id)arg1;
- (id)generateTapeItem;
- (void)addListSourceListener:(id)arg1;
- (void)removeListSourceListener:(id)arg1;
@end

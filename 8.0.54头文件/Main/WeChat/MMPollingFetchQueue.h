@interface MMPollingFetchQueue : NSObject
{
    NSLock * _lock; // +0x8
    NSMutableArray * _list; // +0x10
}
- (id)init;
- (void)addOrReplaceItem:(id)arg1;
- (void)addOrReplaceItems:(id)arg1;
- (void)_addItem:(id)arg1;
- (id)itemByCmdId:(long long)arg1;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeItemsByCmdIdList:(id)arg1;
- (BOOL)removeAllItems;
- (id)popItemsBeforeSortId:(long long)arg1;
- (long long)count;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)list;
- (void).cxx_destruct;
@end


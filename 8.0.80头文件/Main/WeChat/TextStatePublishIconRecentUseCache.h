@interface TextStatePublishIconRecentUseCache : NSObject
{
    NSMutableArray * _privateItemList; // +0x8
}
- (id)init;
- (BOOL)addItem:(id)arg1;
- (BOOL)removeItem:(id)arg1;
- (id)itemList;
- (id)mmkv;
- (id)privateItemList;
- (void)setPrivateItemList:(id)arg1;
- (void).cxx_destruct;
@end

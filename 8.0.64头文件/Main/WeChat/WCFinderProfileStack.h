@interface WCFinderProfileStack : NSObject
{
    NSMutableDictionary * _itemMap; // +0x8
}
+ (id)shared;
- (id)init;
- (void)addItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (id)checkStackProfileForKey:(id)arg1;
- (id)itemMap;
- (void)setItemMap:(id)arg1;
- (void).cxx_destruct;
@end

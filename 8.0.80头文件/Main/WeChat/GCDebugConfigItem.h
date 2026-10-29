@interface GCDebugConfigItem : NSObject
{
    unsigned long long _itemType; // +0x8
    NSString * _key; // +0x10
    id /* block */ _didSelectBlock; // +0x18
}
+ (id)configItemFromBoolValueArray:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id /* block */)didSelectBlock;
- (void)setDidSelectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

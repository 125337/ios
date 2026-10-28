@interface WCFinderFAGroupInfo : NSObject
{
    NSString * _key; // +0x8
    long long _firstIndex; // +0x10
    NSMutableArray * _items; // +0x18
}
- (id)init;
- (id)key;
- (void)setKey:(id)arg1;
- (long long)firstIndex;
- (void)setFirstIndex:(long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

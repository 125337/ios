@interface KitExptBindingInfo : NSObject <PBCoding>
{
    long long _type; // +0x8
    NSString * _kitchenKey; // +0x10
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_kitchenKey;
+ (void)initialize;
+ (id)infoWithKitchenKey:(id)arg1;
- (id)getPBPropertyTable;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)kitchenKey;
- (void)setKitchenKey:(id)arg1;
- (void).cxx_destruct;
@end

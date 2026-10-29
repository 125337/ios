@interface PayMenuRedDotItem : NSObject <PBCoding>
{
    unsigned int _expireTime; // +0x8
    NSString * _itemName; // +0x10
    NSString * _wording; // +0x18
}
+ (void)PBArrayAdd_itemName;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_wording;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)copyFrom:(id)arg1;
- (id)itemName;
- (void)setItemName:(id)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end


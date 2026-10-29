@interface ShopItemIDUnitModel : NSObject <NSCopying>
{
    unsigned int _itemType; // +0x8
    unsigned long long _itemID; // +0x10
}
+ (id)modelWithProductID:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)isProduct;
- (unsigned long long)itemID;
- (void)setItemID:(unsigned long long)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
@end

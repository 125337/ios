@interface MJMaterialCacheModel : NSObject <PBCoding>
{
    NSString * _identifier; // +0x8
    NSArray * _cacheItems; // +0x10
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_cacheItems;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithIdentifier:(id)arg1 cacheItems:(id)arg2;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)cacheItems;
- (void)setCacheItems:(id)arg1;
- (void).cxx_destruct;
@end

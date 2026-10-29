@interface EcsPayInfo : NSObject
{
    NSString * _payPackage; // +0x8
    NSString * _miniShopAppId; // +0x10
}
+ (id)makeWithPayPackage:(id)arg1 miniShopAppId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)payPackage;
- (void)setPayPackage:(id)arg1;
- (id)miniShopAppId;
- (void)setMiniShopAppId:(id)arg1;
- (void).cxx_destruct;
@end


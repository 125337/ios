@interface EcsPayResult : NSObject
{
    NSString * _payPackage; // +0x8
    NSString * _result; // +0x10
    NSString * _errMsg; // +0x18
    NSString * _miniShopAppId; // +0x20
}
+ (id)makeWithPayPackage:(id)arg1 result:(id)arg2 errMsg:(id)arg3 miniShopAppId:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)payPackage;
- (void)setPayPackage:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)miniShopAppId;
- (void)setMiniShopAppId:(id)arg1;
- (void).cxx_destruct;
@end


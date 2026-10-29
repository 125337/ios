@interface EcsAppPayInfo : NSObject
{
    NSString * _payPackage; // +0x8
    NSString * _orderId; // +0x10
}
+ (id)makeWithPayPackage:(id)arg1 orderId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)payPackage;
- (void)setPayPackage:(id)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (void).cxx_destruct;
@end

@interface _TtC6WeChat21WCCoinSubscribeResult : NSObject
{
    long long status; // +0x8
    BOOL isNeedBindingPaymentMethod; // +0x10
}
- (long long)status;
- (BOOL)isNeedBindingPaymentMethod;
- (id)initWithStatus:(long long)arg1;
- (id)initWithStatus:(long long)arg1 isNeedBindingPaymentMethod:(BOOL)arg2;
- (id)init;
@end

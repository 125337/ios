@interface _TtC6WeChat18WCCoinIAPPayResult : NSObject
{
    long long status; // +0x8
    void * failMsg; // +0x10
    SWMidasObjCPaymentErrorResp * midasOriginalError; // +0x20
    BOOL isNeedBindingPaymentMethod; // +0x28
}
- (long long)status;
- (id)failMsg;
- (id)midasOriginalError;
- (BOOL)isNeedBindingPaymentMethod;
- (id)initWithStatus:(long long)arg1 failMsg:(id)arg2 midasOriginalError:(id)arg3 isNeedBindingPaymentMethod:(BOOL)arg4;
- (id)init;
- (void).cxx_destruct;
@end

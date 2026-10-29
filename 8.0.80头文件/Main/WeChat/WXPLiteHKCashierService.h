@interface WXPLiteHKCashierService : NSObject <MMUseCaseCallback>
{
    id /* block */ _hkCashierCallback; // +0x8
}
- (void)startHandleHKCashier:(id)arg1 callback:(id /* block */)arg2;
- (void)call:(id)arg1;
- (id /* block */)hkCashierCallback;
- (void)setHkCashierCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

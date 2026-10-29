@interface WxpayOpenLiteAppResult : NSObject
{
    BOOL _redirect; // +0x8
    BOOL _settled; // +0x9
    BOOL _completed; // +0xa
    id /* block */ _awaitOpened; // +0x10
    id /* block */ _deliver; // +0x18
    id /* block */ _closeSource; // +0x20
}
- (id)initWithRedirect:(BOOL)arg1 awaitOpened:(id /* block */)arg2 deliver:(id /* block */)arg3 closeSource:(id /* block */)arg4;
- (void)accept:(id)arg1;
- (void).cxx_destruct;
@end

@interface WxpayLFSMediaFileCapability : WxpayHostJsApiCapability
{
    id /* block */ _forward; // +0x8
}
- (id)initWithJsApiName:(id)arg1 fileHandles:(id)arg2 forward:(id /* block */)arg3;
- (void)invokeJsApi:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (void).cxx_destruct;
@end

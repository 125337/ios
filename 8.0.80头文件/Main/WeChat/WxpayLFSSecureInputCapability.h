@interface WxpayLFSSecureInputCapability : WxpayHostPlatformCapability
{
    NSHashTable * _surfaces; // +0x8
}
- (id)init;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (void)clearAll;
- (id)surfaces;
- (void)setSurfaces:(id)arg1;
- (void).cxx_destruct;
@end

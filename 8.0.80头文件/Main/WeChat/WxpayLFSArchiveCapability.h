@interface WxpayLFSArchiveCapability : WxpayHostPlatformCapability
{
    NSString * _root; // +0x8
}
- (id)initWithRoot:(id)arg1;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (id)insideRoot:(id)arg1;
- (id)extract:(id)arg1;
- (id)inflate:(id)arg1;
- (void).cxx_destruct;
@end

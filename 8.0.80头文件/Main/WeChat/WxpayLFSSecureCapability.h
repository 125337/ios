@interface WxpayLFSSecureCapability : WxpayHostModuleCapability
{
    NSObject<OS_dispatch_queue> * _worker; // +0x8
}
- (id)init;
- (id)invokeModuleMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (__SecKey *)copyPrivateKey:(id)arg1;
- (id)dispatchMethod:(id)arg1 arguments:(id)arg2;
- (id)worker;
- (void)setWorker:(id)arg1;
- (void).cxx_destruct;
@end

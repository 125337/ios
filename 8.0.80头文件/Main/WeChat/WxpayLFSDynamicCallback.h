@interface WxpayLFSDynamicCallback : LiteAppDynamicModuleCallback
{
    id /* block */ _reply; // +0x8
}
- (void)callback:(id)arg1 keepAlive:(BOOL)arg2;
- (void)callbackError:(id)arg1 keepAlive:(BOOL)arg2;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (void).cxx_destruct;
@end

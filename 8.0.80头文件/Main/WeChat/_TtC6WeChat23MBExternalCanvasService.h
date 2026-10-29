@interface _TtC6WeChat23MBExternalCanvasService : MMUserService <MMServiceProtocol>
{
     canvasInfoMap; // +0x8
}
- (void)registerExternalTexture:(int)arg1 dispatcher:(id)arg2 extraData:(id)arg3 retBlock:(id /* block */)arg4;
- (void)unregisterExternalTexture:(int)arg1 retBlock:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
@end

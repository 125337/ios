@interface _TtC6WeChat33WAJSContextPlugin_MagicBrushFrame : WAJSContextPluginBase <WAAppTaskMgrExt>
{
     insertedAppids; // +0x8
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)insertMagicBrushFrameWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMagicBrushFrameWithParams:(id)arg1;
- (void)onAppPackageDidBeSweep:(id)arg1 debugMode:(unsigned long long)arg2;
- (void).cxx_destruct;
@end

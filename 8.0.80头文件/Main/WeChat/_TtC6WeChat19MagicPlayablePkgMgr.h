@interface _TtC6WeChat19MagicPlayablePkgMgr : NSObject <WAPrefetchMgrExt>
{
     loaded; // +0x8
     appId; // +0x10
     moduleName; // +0x20
     debugModeType; // +0x30
     contact; // +0x38
     version; // +0x40
     callback; // +0x48
}
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(BOOL)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (id)init;
- (void).cxx_destruct;
@end

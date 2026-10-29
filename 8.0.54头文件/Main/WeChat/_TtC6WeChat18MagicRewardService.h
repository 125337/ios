@interface _TtC6WeChat18MagicRewardService : MMUserService <MMServiceProtocol, IMBLifecycle, MagicPkgDownloadExt>
{
     $__lazy_storage_$_listeners; // +0x8
     $__lazy_storage_$_prepareResCallbacksDict; // +0x10
     prepareResCallbackId; // +0x18
     currentScene; // +0x20
     currentBundle; // +0x30
     _biz; // +0x40
     _frameRate; // +0x48
     _qualityLevel; // +0x50
     _pixelRatio; // +0x58
}
- (long long)frameRate;
- (void)setFrameRate:(long long)arg1;
- (long long)qualityLevel;
- (void)setQualityLevel:(long long)arg1;
- (float)pixelRatio;
- (void)setPixelRatio:(float)arg1;
- (void)fetchEngineStatus:(id /* block */)arg1;
- (id)getCodeVersion;
- (BOOL)isCodeVersionSupported:(id)arg1;
- (BOOL)isPkgExist;
- (void)prepareResourceWithResourceName:(id)arg1 url:(id)arg2 md5:(id)arg3 force:(BOOL)arg4 callback:(id /* block */)arg5;
- (void)forceUpdate;
- (void)preload:(long long)arg1;
- (void)destroy;
- (void)updateResourcesWithZipPath:(id)arg1 callback:(id /* block */)arg2;
- (id)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onPkgUpdateSuccess:(id)arg1 pkgVersion:(id)arg2;
- (void)onPkgUpdateFail:(id)arg1 reason:(unsigned long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end


@interface WCPlayerAdapterMgr : MMUserService <WCPlayerCoreAdapterDelegate, MMServiceProtocol>
- (void)onServiceInit;
- (BOOL)canUseTPPlayerWithPlayerScene:(unsigned long long)arg1;
- (BOOL)openTPPlayerABTestWithScene:(unsigned long long)arg1;
- (BOOL)justUseSystemDownloader;
- (id)generateReporterWithPlayerScene:(unsigned long long)arg1;
- (void)WCPlayerCoreLog:(int)arg1 toMMFile:(BOOL)arg2 module:(const char *)arg3 file:(const char *)arg4 line:(int)arg5 funcName:(const char *)arg6 message:(id)arg7;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4;
- (id)GetExpt:(id)arg1 withDef:(id)arg2;
- (id)GetAppVersion;
@end


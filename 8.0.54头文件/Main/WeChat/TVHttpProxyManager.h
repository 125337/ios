@interface TVHttpProxyManager : NSObject
+ (id)getInstance;
- (id)init;
- (void)initLog;
- (void)deinitLog;
- (int)initModule:(void * *)arg1 withReportFunc:(void * *)arg2 withIDKeyReportFunc:(void * *)arg3 withKVReportFunc:(void * *)arg4;
- (void)deinitModule;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (int)TVHttpProxyInit:(id)arg1;
- (int)TVHttpProxyGetLocalServerPort;
- (void)TVHttpProxyDeinit;
- (id)TVHttpProxyGetVersion;
- (int)TVHttpProxyStartPlay:(id)arg1 withFileType:(int)arg2 withFileID:(id)arg3 withFileSize:(long long)arg4 withFileDuration:(int)arg5;
- (int)TVHttpProxyPreLoad:(int)arg1 withDuration:(int)arg2;
- (id)TVHttpProxyBuildPlayURLMP4:(int)arg1;
- (void)TVHttpProxySetRemainTime:(int)arg1 withRemainTime:(int)arg2;
- (void)TVHttpProxyStopPlay:(int)arg1;
- (void)TVHttpProxySetNetWorkState:(int)arg1;
- (void)TVHttpProxySetPlayerState:(int)arg1;
- (void)TVHttpProxyHandlerMemoryWarning;
@end


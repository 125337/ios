@interface WATraceReportMgr : MMUserService <MMServiceProtocol>
{
    NSString * _appId; // +0x8
    BOOL _stopped; // +0x10
    NSMutableDictionary * _traceInfos; // +0x18
    NSFileHandle * _currentFileHandle; // +0x20
    MagicBrushCore * _mbCore; // +0x28
    unsigned long long _beginTime; // +0x30
    unsigned long long _downloadPkgTotalTime; // +0x38
    long long _maxFPS; // +0x40
    JsVMInitInfo * _jsVMInitInfo; // +0x48
    MemoryMappedKV * _useAuditsAppKv; // +0x50
    NSMutableDictionary * _dicUseAuditsApp; // +0x58
    NSMutableArray * _extraInfo; // +0x60
}
- (void)onServiceInit;
- (id)traceFilePath;
- (void)openAudits:(id)arg1;
- (void)closeAudits:(id)arg1 scene:(unsigned long long)arg2;
- (void)setCurrentAppId:(id)arg1 mbCore:(id)arg2;
- (void)resumeTrace:(id)arg1;
- (void)pauseTrace:(id)arg1;
- (void)startTrace:(id)arg1;
- (void)stopTrace:(id)arg1 scene:(unsigned long long)arg2;
- (void)traceCPUUsage;
- (void)traceMemoryUsage;
- (void)traceFPS;
- (void)traceStartupTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 isDownloadCode:(BOOL)arg3;
- (void)traceOnResourcePrepareDoneTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnInitReadyFromResourcePrepareDoneTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnInitReadyFromUserScriptInjected:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnJSScirptInjected:(unsigned long long)arg1 endTime:(unsigned long long)arg2 filePath:(id)arg3 fileSize:(long long)arg4;
- (void)traceOnInteractiveFromInitReady:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnDownloadPkgTime:(id)arg1 pkgSize:(unsigned long long)arg2 pkgType:(unsigned long long)arg3 moduleAppId:(id)arg4 beginTime:(unsigned long long)arg5 endTime:(unsigned long long)arg6;
- (void)traceOnContactCgiTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 appId:(id)arg3;
- (void)traceOnLaunchCgiTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnStartupToJsInject:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)tracePreloadJsVMInitTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnJsVMInitTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 isPreload:(BOOL)arg3;
- (void)onTrace;
- (void)setAuditsStateForNextTime:(id)arg1 state:(BOOL)arg2;
- (BOOL)isOpenAuditsOnStartup:(id)arg1;
- (BOOL)isAuditsHasOpened:(id)arg1;
- (BOOL)isAuditsOpened:(id)arg1;
- (BOOL)openUseAuditsWithAppID:(id)arg1;
- (void)closeUseAuditsWithAppID:(id)arg1 scene:(unsigned long long)arg2;
- (id)getAuditsTraceInfo:(id)arg1;
- (BOOL)setAuditsTraceInfo:(id)arg1 data:(id)arg2;
- (void)sendAuditsStateOnce:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

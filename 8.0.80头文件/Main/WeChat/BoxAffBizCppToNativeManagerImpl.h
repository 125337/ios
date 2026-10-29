@interface BoxAffBizCppToNativeManagerImpl : NSObject <BoxAffBizCppToNativeManagerBase>
{
    BoxAffBizCppToNativeManagerCallback * m_callBack; // +0x8
    NSObject<OS_dispatch_queue> * _m_workerThread; // +0x10
}
- (int)getLocalCanvasPkgVersion;
- (int)getEcsLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (void)getIsInNonTopFirst8Async:(int)arg1;
- (unsigned long long)getSyncServerTimeMs;
- (BOOL)isSyncServerTime;
- (BOOL)registerDIct:(int)arg1;
- (BOOL)checkBrandListDBHasStartCompression;
- (BOOL)shouldClearCompressedKey;
- (void)markBrandListDBAsCompressBeginAsync:(int)arg1;
- (void)markBrandListDBAsCompressFinishAsync:(int)arg1;
- (void)setCallback:(id)arg1;
- (void)getResortContextAsync:(int)arg1;
- (void)onBizDigestFinderLiveInfoChangedAsync:(int)arg1 liveInfo:(id)arg2;
- (id)genDicFromBizTLResortEventInfo:(id)arg1;
- (void)callOnFirstScreenPreResortAsync:(int)arg1 eventId:(unsigned long long)arg2 scene:(int)arg3 startInfo:(id)arg4;
- (void)callOnFirstScreenResortStartAsync:(int)arg1 eventId:(unsigned long long)arg2 scene:(int)arg3 startInfo:(id)arg4;
- (void)callOnFirstScreenResortEndAsync:(int)arg1 eventId:(unsigned long long)arg2 scene:(int)arg3 endInfo:(id)arg4;
- (void)callOnNotifyMsgChangeAsync:(int)arg1 eventType:(int)arg2 notifyMsg:(id)arg3;
- (void)callOnFinderBoxConfigChangedAsync:(int)arg1 disableFinderBox:(BOOL)arg2 shouldExitFinderBox:(BOOL)arg3;
- (id)getUserAgent;
- (id)getResortCardContext:(unsigned long long)arg1;
- (id)doDataMigrate;
- (void)callOnDataChangeAsync:(int)arg1 eventType:(int)arg2;
- (void)callOnInitDoneAsync:(int)arg1 dbInitDone:(BOOL)arg2;
- (void)callOnIDKeyAsync:(int)arg1 id:(int)arg2 key:(int)arg3 value:(int)arg4;
- (void)callOnKVAsync:(int)arg1 id:(int)arg2 value:(id)arg3;
- (BOOL)checkCanCreateAdBrandServiceFromResortEvent;
- (void)getBizPoiInfoAsync:(int)arg1 cacheOnly:(BOOL)arg2;
- (void)getFinderBoxLocationAsync:(int)arg1;
- (void)getBizResortUserActiveReportInfoAsync:(int)arg1;
- (id)m_workerThread;
- (void)setM_workerThread:(id)arg1;
- (void).cxx_destruct;
@end

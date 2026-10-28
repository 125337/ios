@interface AffBizCppToNativeManagerImpl : NSObject <AffBizCppToNativeManagerBase>
{
    AffBizCppToNativeManagerCallback * m_callBack; // +0x8
}
- (int)getLocalCanvasPkgVersion;
- (int)getEcsLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (unsigned long long)getSyncServerTimeMs;
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
- (id)getUserAgent;
- (id)getResortCardContext:(unsigned long long)arg1;
- (id)doDataMigrate;
- (void)callOnDataChangeAsync:(int)arg1 eventType:(int)arg2;
- (void)callOnInitDoneAsync:(int)arg1 dbInitDone:(BOOL)arg2;
- (void)callOnIDKeyAsync:(int)arg1 id:(int)arg2 key:(int)arg3 value:(int)arg4;
- (void)callOnKVAsync:(int)arg1 id:(int)arg2 value:(id)arg3;
- (BOOL)checkCanCreateAdBrandServiceFromResortEvent;
- (void).cxx_destruct;
@end

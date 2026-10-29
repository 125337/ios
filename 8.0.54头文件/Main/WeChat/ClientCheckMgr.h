@interface ClientCheckMgr : MMRootService <IMsgExt, MMKernelExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSLock * _lock; // +0x8
    NSMutableSet * _setImageList; // +0x10
}
- (void)onServiceInit;
- (void)dealloc;
- (void)onAuthOK;
- (void)test;
- (void)test1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getImageList;
- (void)registerAddImageCallBack;
- (void)checkConsistency:(id)arg1;
- (void)reportFileConsistency:(id)arg1 fileName:(id)arg2 offset:(unsigned int)arg3 bufferSize:(unsigned int)arg4 seq:(unsigned int)arg5;
- (void)checkHook:(id)arg1;
- (void)checkHookWithSeq:(unsigned int)arg1;
- (void)reportAppList:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)addImage:(const char *)arg1;
- (id)arrToString:(id)arg1;
- (id)runningProcesses;
- (id)expandFilePath:(id)arg1;
- (void).cxx_destruct;
@end


@interface WebNetComMgr : MMRootService <MMServiceProtocol>
{
    shared_ptr<WebNetCallBack> m_spCallback; // +0x8
    NSMutableSet * m_TaskCallbackSet; // +0x18
    NSRecursiveLock * m_CallbackLock; // +0x20
}
- (id)init;
- (void)dealloc;
- (int)StartURLDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(BOOL)arg5 withFileType:(int)arg6;
- (void)RegisterTaskCallBack:(id)arg1;
- (void)UnRegisterTaskCallBack:(id)arg1;
- (void)OnProgressChanged:(id)arg1 completedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)OnUploadCompleted:(id)arg1 response:(id)arg2;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


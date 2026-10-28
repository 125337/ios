@interface WAFileDescriptorLogic : MMObject <WAAppTaskMgrExt>
{
    NSMutableDictionary * m_dicAppId2DicFileWrap; // +0x8
    NSObject<OS_dispatch_queue> * m_workQueue; // +0x10
    NSRecursiveLock * m_genFdLock; // +0x18
}
- (id)init;
- (unsigned int)openFileWithLocalId:(id)arg1 flag:(id)arg2 appId:(id)arg3 retErrMsg:(id *)arg4 retFd:(id *)arg5;
- (id)getFileWrapWithOuterFileDescriptor:(id)arg1 appId:(id)arg2;
- (BOOL)addFileWrap:(id)arg1 fd:(id)arg2;
- (void)removeFileWrapWithFd:(id)arg1 appId:(id)arg2;
- (BOOL)isOpenedFileReachLimitWithAppId:(id)arg1;
- (unsigned int)closeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 retErrMsg:(id *)arg3;
- (unsigned int)fstatFileWithFileDescriptor:(id)arg1 appId:(id)arg2 retErrMsg:(id *)arg3 stat:(stat *)arg4;
- (unsigned int)readFileWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 position:(long long)arg4 retErrMsg:(id *)arg5 retData:(id *)arg6;
- (unsigned int)writeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 data:(id)arg3 position:(long long)arg4 retErrMsg:(id *)arg5;
- (void)closeFileWithAppId:(id)arg1;
- (unsigned int)ftruncateWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 retErrMsg:(id *)arg4;
- (unsigned int)truncateWithLocalId:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 retErrMsg:(id *)arg4;
- (id)getFilePathWithOuterFileDescriptor:(id)arg1 appId:(id)arg2;
- (id)genFdWithAppId:(id)arg1;
- (int)getFlagWithString:(id)arg1;
- (void).cxx_destruct;
@end

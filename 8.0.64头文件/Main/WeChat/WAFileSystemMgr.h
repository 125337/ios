@interface WAFileSystemMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * m_workQueue; // +0x8
    WAFileDescriptorLogic * m_fdLogic; // +0x10
}
- (id)init;
- (void)openFileWithLocalId:(id)arg1 flag:(id)arg2 appId:(id)arg3 isSync:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)closeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)fstatFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)readFileWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 position:(long long)arg4 isSync:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)writeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 data:(id)arg3 position:(long long)arg4 isSync:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)ftruncateWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)truncateWithLocalId:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)closeFileWithAppId:(id)arg1;
- (void)updateFileStatusWithPath:(id)arg1 originFileSize:(unsigned long long)arg2 appId:(id)arg3;
- (void)onAppTaskTerminate:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCPlayerDownloadMgr : MMUserService <WCPlayerDownloadTaskInfoDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _dicTaskInfo; // +0x8
}
- (id)init;
- (void)registerDownloadEventWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2 progress:(id /* block */)arg3 m3u8Ready:(id /* block */)arg4 moovReady:(id /* block */)arg5 complete:(id /* block */)arg6;
- (void)registerDownloadEventWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2 progress:(id /* block */)arg3 m3u8Ready:(id /* block */)arg4 moovReady:(id /* block */)arg5 complete:(id /* block */)arg6 isReuse:(BOOL)arg7;
- (BOOL)StartDownloadWithTaskIdentifier:(id)arg1 downloadType:(unsigned long long)arg2 downloadMode:(int)arg3 request:(id /* block */)arg4;
- (BOOL)IsNeedCreateNewDownloadTaskWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2;
- (BOOL)removeDownloadTaskWithTaskIdentifier:(id)arg1 taskId:(unsigned int)arg2;
- (void)CleanAllDownloadTaskInfoWithTaskIdentifier:(id)arg1;
- (void)onDownloadTaskFinish:(id)arg1;
- (id)dicTaskInfo;
- (void)setDicTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

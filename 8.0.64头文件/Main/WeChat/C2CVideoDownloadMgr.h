@interface C2CVideoDownloadMgr : MMUserService <WCPlayerEventExt, CdnServiceDownloadMgrExt, MMServiceProtocol>
{
    C2CVideoDownloadTaskInfo * _currentTask; // +0x8
    NSMutableArray * _arrDownloadTask; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startSaveDownloadWithDownloadArgsWrap:(id)arg1;
- (BOOL)startDownloadRawVideo:(id)arg1;
- (BOOL)startDownloadVideoWithTaskInfo:(id)arg1;
- (id)getExistVideoSaveDownloadArgsWrap:(id)arg1;
- (id)getDownloadTaskInfo:(id)arg1;
- (void)stopDownloadRawVideo:(id)arg1;
- (void)stopDownloadVideo:(id)arg1;
- (void)stopVideoWithFileKey:(id)arg1;
- (void)stopDownloadWithChatName:(id)arg1;
- (void)checkQueue;
- (id)getExistDownloadTaskInfo:(id)arg1;
- (BOOL)isMsgDownloading:(id)arg1;
- (BOOL)isRawVideoDownloading:(id)arg1;
- (BOOL)isCompressVideoDownloading:(id)arg1;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onDownloadFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)arrDownloadTask;
- (void)setArrDownloadTask:(id)arg1;
- (void).cxx_destruct;
@end

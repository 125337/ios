@interface RawVideoDownloadMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>
- (void)onServiceInit;
- (BOOL)isRawDataDownloading:(id)arg1;
- (BOOL)startDownloadRawDataWithMsg:(id)arg1;
- (void)changeMsgWrap:(id)arg1 toDownloadStaus:(unsigned int)arg2;
- (void)stopDownloadRawDataWithMsg:(id)arg1;
- (void)onDownloadStopWithWithMsg:(id)arg1 taskInfo:(id)arg2;
- (void)stopDownloadRawDataWithChatName:(id)arg1;
- (id)generateDownloadArgsWrap:(id)arg1;
- (void)onProgressUpdate:(id)arg1 finishLen:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onComplete:(id)arg1 msgWrap:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
@end


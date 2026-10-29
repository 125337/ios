@interface C2CCompressVideoCompleteMgr : MMUserService <C2CVideoDownloadMgrExt, WCPlayerEventExt, MMServiceProtocol>
{
    NSMutableArray * _arrMsgInfo; // +0x8
    CMessageWrap * _currentMsgWrap; // +0x10
}
+ (BOOL)IsOpen;
- (void)onServiceInit;
- (void)startDownload:(id)arg1;
- (void)checkQueue;
- (void)removeFirstTask;
- (void)syncMsgInfo;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (void)onVideoDownloadStop:(id)arg1;
- (id)arrMsgInfo;
- (void)setArrMsgInfo:(id)arg1;
- (id)currentMsgWrap;
- (void)setCurrentMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end

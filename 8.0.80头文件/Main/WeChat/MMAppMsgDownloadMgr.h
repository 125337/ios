@interface MMAppMsgDownloadMgr : MMUserService <MMServiceProtocol>
{
    BOOL _shouldStopClean; // +0x8
    MMAppMsgDownloadDataBase * _database; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanData;
- (void)appMsgStartUpload:(id)arg1;
- (BOOL)checkAppMsgStartUploadNotCanAddDB:(id)arg1;
- (void)appMsgNotUploadDoneDownload:(id)arg1;
- (void)appMsgPauseUpload:(id)arg1;
- (void)appMsgCompleteUpload:(id)arg1 oriSvrId:(long long)arg2;
- (void)appMsgDownloadStart:(id)arg1;
- (void)appMsgDownloadPause:(id)arg1;
- (void)appMsgDownloadDone:(id)arg1;
- (void)appMsgDownloadFailed:(id)arg1;
- (void)appMsgDownloadExpired:(id)arg1;
- (BOOL)tryDownloadFromCloudBackup:(id)arg1 oriItem:(id)arg2;
- (unsigned int)getAppMsgDownloadStatus:(id)arg1;
- (BOOL)checkUserStopUpload:(id)arg1;
- (unsigned int)getAppMsgDownloadUiPercent:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (BOOL)shouldStopClean;
- (void)setShouldStopClean:(BOOL)arg1;
- (void).cxx_destruct;
@end

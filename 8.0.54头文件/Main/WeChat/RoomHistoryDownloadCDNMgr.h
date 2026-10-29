@interface RoomHistoryDownloadCDNMgr : NSObject <ICdnComMgrExt>
{
    CMessageWrap * _curDownMsgWrap; // +0x8
    CdnRecordMediaInfo * _curDownMediaInfo; // +0x10
    NSMutableArray * _arrCDNDownloadInfo; // +0x18
    NSMutableArray * _pendingMsgQueue; // +0x20
}
- (id)init;
- (BOOL)StartDownloadHistoryRecordMsg:(id)arg1 prior:(BOOL)arg2;
- (void)checkMsgQueue;
- (void)CheckDownloadRecordData;
- (void)AddDownloadTasksFromHistoryRecordMsg:(id)arg1;
- (id)genHistoryRecordRecordMediaInfo:(id)arg1 clientMsgID:(id)arg2;
- (void)StopDownloadHistoryRecordMsg:(id)arg1;
- (BOOL)IsInDownloadQueue:(id)arg1;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2 DownloadInfo:(id)arg3;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownload:(id)arg1;
- (void).cxx_destruct;
@end


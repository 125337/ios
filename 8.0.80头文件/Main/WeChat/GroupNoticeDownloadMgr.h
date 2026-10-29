@interface GroupNoticeDownloadMgr : MMUserService <GroupNoticeItemDownloaderDelegate, MMServiceProtocol>
{
    NSMutableArray * m_downloadItemQueue; // +0x8
    GroupNoticeItemDownloader * m_downloader; // +0x10
    BOOL m_isDownloading; // +0x18
}
- (void)onServiceInit;
- (void)startDownloadItem:(id)arg1;
- (void)stopDownloadItem:(id)arg1;
- (void)stopAllDownload;
- (BOOL)isDownloadingData:(id)arg1;
- (void)tryDownloadItem;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void).cxx_destruct;
@end

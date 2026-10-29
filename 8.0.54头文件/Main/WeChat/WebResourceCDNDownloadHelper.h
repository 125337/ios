@interface WebResourceCDNDownloadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    BOOL _isDownloading; // +0x8
    NSMutableArray * _downloadArray; // +0x10
    id <WebResourceCDNDownloadHelperDelegate> _delegate; // +0x18
    WebviewLocalResItem * _curDownloadingItem; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addDownloadItem:(id)arg1;
- (BOOL)startDownload;
- (BOOL)stopDownload;
- (void)sendGetCdnURLRequest;
- (void)sendDownloadRequest;
- (void)startDownloadNextItem;
- (void)handleGetCdnIdResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


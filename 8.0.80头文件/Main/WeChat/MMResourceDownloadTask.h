@interface MMResourceDownloadTask : NSObject <MMResourceDownloadDelegate>
{
    NSString * _resUrl; // +0x8
    MMResourceDownloadTaskContext * _context; // +0x10
    NSString * _downloadIdentifier; // +0x18
    id <MMResourceDownloader> _downloader; // +0x20
    long long _retryCnt; // +0x28
    long long _currentCnt; // +0x30
    id <MMResourceDownloadTaskDelegate> _downloadTaskDelegate; // +0x38
}
- (id)initWithResUrl:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)startDownload;
- (void)cancelDownload;
- (void)clearDownloadData;
- (void)reportWithKey:(unsigned int)arg1 network:(id)arg2;
- (id)generateDownloadIdentifier;
- (Class)getResrouceDownloaderClass;
- (BOOL)isSameResourceWithTask:(id)arg1;
- (void)onDownloadReportWithKey:(unsigned int)arg1;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3 cdnResultCode:(long long)arg4;
- (id)resUrl;
- (id)context;
- (id)downloadIdentifier;
- (long long)retryCnt;
- (void)setRetryCnt:(long long)arg1;
- (long long)currentCnt;
- (void)setCurrentCnt:(long long)arg1;
- (id)downloadTaskDelegate;
- (void)setDownloadTaskDelegate:(id)arg1;
- (void).cxx_destruct;
@end

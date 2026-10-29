@interface MMResourceCdnDownloader : NSObject <MMResourceCdnDownloaderNotifierDelegate, ICdnComMgrExt, MMResourceDownloader>
{
    MMResourceCdnDownloaderNotifier * _notifier; // +0x8
    BOOL _waitForCDNInit; // +0x10
    id <MMResourceDownloadDelegate> downloadDelegate; // +0x18
    NSString * downloadIdentifier; // +0x20
    NSString * _resUrl; // +0x28
    NSArray * _arrDnsIp; // +0x30
}
+ (unsigned int)genIncreaseSequence;
- (id)initWithUrl:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)clearData;
- (void)mainThread_startDownload;
- (void)mainThread_cancelDownload;
- (void)reportWithKey:(unsigned int)arg1;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2 cdnResultCode:(long long)arg3;
- (void)doNewDns;
- (void)createSaveFileDirIfNotExist;
- (id)getSaveFileDir;
- (id)getSaveFilePath;
- (void)reportCdnErrorWithRet:(int)arg1;
- (void)onCdnDownloadFinish:(id)arg1;
- (void)OnCdnInit;
- (id)downloadDelegate;
- (void)setDownloadDelegate:(id)arg1;
- (id)downloadIdentifier;
- (void)setDownloadIdentifier:(id)arg1;
- (id)resUrl;
- (void)setResUrl:(id)arg1;
- (id)arrDnsIp;
- (void)setArrDnsIp:(id)arg1;
- (BOOL)waitForCDNInit;
- (void)setWaitForCDNInit:(BOOL)arg1;
- (void).cxx_destruct;
@end


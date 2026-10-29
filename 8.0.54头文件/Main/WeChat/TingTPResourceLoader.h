@interface TingTPResourceLoader : NSObject <WCPlayerDownloaderDelegate, TPAssetResourceLoaderDelegate>
{
    BOOL _requestsAllDataToEndOfResource; // +0x8
    BOOL _hasClearFile; // +0x9
    BOOL _hasMoovReady; // +0xa
    BOOL _hasDownloadComplete; // +0xb
    BOOL _hasStartDownload; // +0xc
    BOOL _isLocalFile; // +0xd
    id <TingTPResourceLoaderDelegate> _delegate; // +0x10
    WCPlayerDownloader * _downloader; // +0x18
    NSString * _dataUrl; // +0x20
    NSString * _decryptKey; // +0x28
    NSString * _fileCacheId; // +0x30
    NSString * _savePathSuffix; // +0x38
    NSObject<OS_dispatch_queue> * _processingQueue; // +0x40
    NSMutableArray * _arrPendingRequests; // +0x48
    WCDownloadArgsWrap * _downloadArgs; // +0x50
    QMStreamEncrypt * _streamEncryptor; // +0x58
    unsigned long long _callbackFileLength; // +0x60
}
- (id)initWithDataUrl:(id)arg1 fileCacheId:(id)arg2 pathSuffix:(id)arg3 decryptKey:(id)arg4;
- (void)prepare;
- (BOOL)isEncrypt;
- (void)stopDownload;
- (void)tpResourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)tpResourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (BOOL)fillInformationForRequest:(id)arg1;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (void)checkBufferTask;
- (void)processPendingRequests;
- (void)removeLoadingRequests:(id)arg1;
- (BOOL)respondDataWithLoadingRequest:(id)arg1;
- (id)createPlayArgs:(id)arg1 downloadArgs:(id)arg2;
- (BOOL)useSimpleDns;
- (unsigned long long)playerMode;
- (id)generateDownloadArgsWrap:(id)arg1;
- (void)onDataDownloadSuccess;
- (void)onDataAvailableWithRange:(_NSRange)arg1;
- (void)onDataDownloadFail:(int)arg1;
- (void)onDataDownloadFailWithExpired:(BOOL)arg1;
- (void)onMoovReady;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (long long)fileLength;
- (void)deleteTargetFile;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)requestsAllDataToEndOfResource;
- (void)setRequestsAllDataToEndOfResource:(BOOL)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)decryptKey;
- (void)setDecryptKey:(id)arg1;
- (id)fileCacheId;
- (void)setFileCacheId:(id)arg1;
- (id)savePathSuffix;
- (void)setSavePathSuffix:(id)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (id)arrPendingRequests;
- (void)setArrPendingRequests:(id)arg1;
- (id)downloadArgs;
- (void)setDownloadArgs:(id)arg1;
- (id)streamEncryptor;
- (void)setStreamEncryptor:(id)arg1;
- (BOOL)hasClearFile;
- (void)setHasClearFile:(BOOL)arg1;
- (BOOL)hasMoovReady;
- (void)setHasMoovReady:(BOOL)arg1;
- (BOOL)hasDownloadComplete;
- (void)setHasDownloadComplete:(BOOL)arg1;
- (BOOL)hasStartDownload;
- (void)setHasStartDownload:(BOOL)arg1;
- (BOOL)isLocalFile;
- (void)setIsLocalFile:(BOOL)arg1;
- (unsigned long long)callbackFileLength;
- (void)setCallbackFileLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


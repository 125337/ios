@interface TingTPResourceLoader : NSObject <WCPlayerDownloaderDelegate, TPAssetResourceLoaderDelegate>
{
    BOOL _requestsAllDataToEndOfResource; // +0x8
    BOOL _hitCache; // +0x9
    BOOL _hasDownloadComplete; // +0xa
    BOOL _hasClearFile; // +0xb
    BOOL _hasMoovReady; // +0xc
    BOOL _hasStartDownload; // +0xd
    BOOL _isLocalFile; // +0xe
    BOOL _needParseDecryptBuffer; // +0xf
    BOOL _hasPreload; // +0x10
    id <TingTPResourceLoaderDelegate> _delegate; // +0x18
    long long _decryptTotalTime; // +0x20
    WCPlayerDownloader * _downloader; // +0x28
    NSString * _dataUrl; // +0x30
    NSString * _decryptKey; // +0x38
    NSString * _fileCacheId; // +0x40
    NSString * _savePathSuffix; // +0x48
    NSObject<OS_dispatch_queue> * _processingQueue; // +0x50
    NSMutableArray * _arrPendingRequests; // +0x58
    WCDownloadArgsWrap * _downloadArgs; // +0x60
    QMStreamEncrypt * _streamEncryptor; // +0x68
    unsigned long long _callbackFileLength; // +0x70
    NSMutableData * _decryptBuffer; // +0x78
    long long _fileSize; // +0x80
}
- (id)initWithDataUrl:(id)arg1 fileCacheId:(id)arg2 pathSuffix:(id)arg3 referer:(id)arg4 decryptKey:(id)arg5;
- (void)prepare;
- (BOOL)isEncrypt;
- (void)stopDownload;
- (void)setPreloadInfo:(BOOL)arg1 fileSize:(long long)arg2;
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
- (void)onDataDownloadSuccess:(id)arg1;
- (void)onDataAvailable:(id)arg1 range:(_NSRange)arg2;
- (void)onDataDownloadFail:(id)arg1 retcode:(int)arg2;
- (void)onDataDownloadFailWithExpired:(BOOL)arg1;
- (void)onMoovReady:(id)arg1;
- (id)parseMetaData;
- (id)parseMetaDataWithBuffer:(id)arg1;
- (void)onDownloader:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (long long)fileLength;
- (void)deleteTargetFile;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)requestsAllDataToEndOfResource;
- (void)setRequestsAllDataToEndOfResource:(BOOL)arg1;
- (long long)decryptTotalTime;
- (void)setDecryptTotalTime:(long long)arg1;
- (BOOL)hitCache;
- (void)setHitCache:(BOOL)arg1;
- (BOOL)hasDownloadComplete;
- (void)setHasDownloadComplete:(BOOL)arg1;
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
- (BOOL)hasStartDownload;
- (void)setHasStartDownload:(BOOL)arg1;
- (BOOL)isLocalFile;
- (void)setIsLocalFile:(BOOL)arg1;
- (unsigned long long)callbackFileLength;
- (void)setCallbackFileLength:(unsigned long long)arg1;
- (id)decryptBuffer;
- (void)setDecryptBuffer:(id)arg1;
- (BOOL)needParseDecryptBuffer;
- (void)setNeedParseDecryptBuffer:(BOOL)arg1;
- (BOOL)hasPreload;
- (void)setHasPreload:(BOOL)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (void).cxx_destruct;
@end

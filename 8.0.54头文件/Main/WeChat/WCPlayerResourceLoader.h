@interface WCPlayerResourceLoader : NSObject <WCPlayerDownloaderDelegate, AVAssetResourceLoaderDelegate, TPAssetResourceLoaderDelegate>
{
    BOOL _notifyDataReadyMode; // +0x8
    BOOL _bDataSourceSwitching; // +0x9
    BOOL _bHadRecievePreLoadData; // +0xa
    BOOL _isWaitingLoadingRequestAfterSeek; // +0xb
    int _loadingRequestSeq; // +0xc
    unsigned int _taskSeq; // +0x10
    unsigned int _lastNotAnyPendingRequestTime; // +0x14
    WCPlayerDownloader * _downloader; // +0x18
    WCPlayerReporter * _reporter; // +0x20
    WCPlayerPlayArgs * _playerArgs; // +0x28
    WCPlayerPlaybackInfo * _playbackInfo; // +0x30
    id <WCPlayerResourceLoaderDelegate> _delegate; // +0x38
    unsigned long long _playerScene; // +0x40
    NSMutableArray * _arrPendingRequests; // +0x48
    WCPlayerLoadingRequestTaskInfo * _currentTaskInfo; // +0x50
    WCResourceLoaderMoniter * _loadingRequestMoniter; // +0x58
    NSRecursiveLock * _lock; // +0x60
    unsigned long long _responseTotalData; // +0x68
    NSString * _nsIdentifier; // +0x70
    NSObject<OS_dispatch_queue> * _processingQueue; // +0x78
    long long _requestSecondsAfterSeek; // +0x80
    WCBaseScheduler * _scheduler; // +0x88
}
- (void)onPlayerTimeChanged:(double)arg1;
- (void)onPlayerEnterBuffering;
- (void)onPlayerLeaveBuffering;
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 downloadArgsWrap:(id)arg3;
- (void)dealloc;
- (id)generateScheduler;
- (id)loadingRequestMoniter;
- (id)generateDownloaderWithDownloadArgs:(id)arg1;
- (void)setReporter:(id)arg1;
- (id)getResouceloaderID;
- (id)getProcessingQueue;
- (id)getDownloadArgsWrap;
- (void)startVideoWithPlayerMode:(unsigned long long)arg1;
- (void)startDownload:(unsigned long long)arg1;
- (void)stopVideoDownload;
- (void)resumeDownload;
- (void)startDataPreload;
- (void)cancelAllDataRequest;
- (void)requestCompleteVideoData;
- (void)refreshFetchAllDataState;
- (id)getResourceUrl;
- (void)finishCurrentTask;
- (void)checkStateWhenBufferingStart;
- (unsigned long long)checkBufferTask:(unsigned long long)arg1;
- (void)checkToFetchAllData;
- (void)requestVideoDataWithSec:(float)arg1;
- (BOOL)isWaitingReadyAfterSeek;
- (void)onPlayerSeekStart;
- (void)onPlayerSeekComplete;
- (BOOL)isDownloadingData;
- (void)addNewLoadingRequest:(id)arg1;
- (void)removeLoadingRequests:(id)arg1;
- (void)checkLoadingRequestStateWhenNoAnyLoadingRequest;
- (BOOL)fillInformationForRequest:(id)arg1;
- (void)cancelAllPendingLoadingRequests;
- (void)processPendingRequests;
- (BOOL)respondDataWithLoadingRequest:(id)arg1;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (void)onReceiveDelLoadingRequest:(id)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)tpResourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)tpResourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)onDataDownloadSuccess;
- (void)onSwitchDataSource:(id)arg1;
- (void)onUpdateNetwordSpeed:(unsigned int)arg1;
- (void)onDataAvailableWithRange:(_NSRange)arg1;
- (void)onVideoSourceChanged;
- (void)onDataDownloadFail:(int)arg1;
- (void)onM3u8Ready;
- (void)onMoovReady;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)reporter;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)notifyDataReadyMode;
- (void)setNotifyDataReadyMode:(BOOL)arg1;
- (BOOL)bDataSourceSwitching;
- (void)setBDataSourceSwitching:(BOOL)arg1;
- (int)loadingRequestSeq;
- (void)setLoadingRequestSeq:(int)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (id)arrPendingRequests;
- (void)setArrPendingRequests:(id)arg1;
- (id)currentTaskInfo;
- (void)setCurrentTaskInfo:(id)arg1;
- (void)setLoadingRequestMoniter:(id)arg1;
- (BOOL)bHadRecievePreLoadData;
- (void)setBHadRecievePreLoadData:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)responseTotalData;
- (void)setResponseTotalData:(unsigned long long)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (unsigned int)taskSeq;
- (void)setTaskSeq:(unsigned int)arg1;
- (unsigned int)lastNotAnyPendingRequestTime;
- (void)setLastNotAnyPendingRequestTime:(unsigned int)arg1;
- (BOOL)isWaitingLoadingRequestAfterSeek;
- (void)setIsWaitingLoadingRequestAfterSeek:(BOOL)arg1;
- (long long)requestSecondsAfterSeek;
- (void)setRequestSecondsAfterSeek:(long long)arg1;
- (id)scheduler;
- (void)setScheduler:(id)arg1;
- (void).cxx_destruct;
@end


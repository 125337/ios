@interface WCPlayerResourceLoader : WCPlayerObject <WCPlayerDownloaderDelegate, WCAssetDataLoaderProxyDelegate>
{
    BOOL _bDataSourceSwitching; // +0x8
    BOOL _isWaitingNewLoadingRequestAfterSeek; // +0x9
    unsigned int _taskSeq; // +0xc
    WCBaseScheduler * _scheduler; // +0x10
    WCPlayerReporter * _reporter; // +0x18
    WCPlayerPlayArgs * _playerArgs; // +0x20
    WCPlayerDownloader * _downloader; // +0x28
    WCPlayerPlaybackInfo * _playbackInfo; // +0x30
    long long _resourceType; // +0x38
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x40
    id <WCPlayerResourceLoaderDelegate> _delegate; // +0x48
    WCPlayerLoadingRequestTaskInfo * _currentTask; // +0x50
    NSRecursiveLock * _lock; // +0x58
    unsigned long long _playerScene; // +0x60
    long long _requestSecondsAfterSeek; // +0x68
    M3U8Parser * _m3u8Parser; // +0x70
    WCAssetDataLoaderProxy * _loaderProxy; // +0x78
    NSMutableDictionary * _dicDownloader; // +0x80
}
- (void)onPlayerTimeChanged:(double)arg1;
- (void)onPlayerEnterBuffering;
- (void)onPlayerLeaveBuffering;
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 downloadArgsWrap:(id)arg3 reporter:(id)arg4;
- (void)dealloc;
- (id)scheduler;
- (id)generateLogTag:(id)arg1;
- (id)getDownloadArgsWrap;
- (id)generateScheduler;
- (id)generateDownloaderWithDownloadArgs:(id)arg1;
- (id)getLoaderProxy;
- (int)loadingRequestSeq;
- (BOOL)isRecentRecallCdnData;
- (unsigned int)getRecallCountInRecent:(int)arg1;
- (void)asyncQueryRecallCountFromStartDownloadToReady;
- (void)start;
- (void)internalStart;
- (void)stopVideoDownload;
- (void)resumeDownload;
- (void)startDataPreload;
- (void)cancelAllDataRequest;
- (void)removeDownloaderWithLoadingRequest:(id)arg1;
- (void)finishCurrentTask;
- (BOOL)isHadRecievedAllData;
- (void)checkStateWhenBufferingStart;
- (double)getNextSliceTime;
- (unsigned long long)checkBufferTask:(unsigned long long)arg1;
- (void)checkToFetchAllData;
- (void)onPlayerSeekStart;
- (void)onPlayerSeekComplete;
- (BOOL)isDownloadingData;
- (void)cancelAllPendingLoadingRequests;
- (void)requestVideoDataWithSec:(float)arg1;
- (id)generateNextRequestTask:(id)arg1 loadingRequest:(id)arg2 requestSec:(float)arg3;
- (void)onDataDownloadSuccess:(id)arg1;
- (void)onDownloader:(id)arg1 switchDataSource:(id)arg2;
- (void)onUpdateNetwordSpeed:(unsigned int)arg1;
- (void)onDataAvailable:(id)arg1 range:(_NSRange)arg2;
- (void)onVideoSourceChanged;
- (void)onDataDownloadFail:(id)arg1 retcode:(int)arg2;
- (void)onM3u8Ready;
- (void)onMoovReady:(id)arg1;
- (void)onDownloader:(id)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRemoveLoadingRequest:(id)arg1;
- (void)onNoAnyLoadingRequest;
- (id)downloader:(id)arg1;
- (unsigned long long)getAvaibleLength:(id)arg1;
- (id)getVideoData:(id)arg1 range:(_NSRange)arg2;
- (unsigned long long)fileLength:(id)arg1;
- (void)onRecieveNewLoadingRequest:(id)arg1;
- (void)setScheduler:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (long long)resourceType;
- (void)setResourceType:(long long)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (unsigned int)taskSeq;
- (void)setTaskSeq:(unsigned int)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (long long)requestSecondsAfterSeek;
- (void)setRequestSecondsAfterSeek:(long long)arg1;
- (BOOL)bDataSourceSwitching;
- (void)setBDataSourceSwitching:(BOOL)arg1;
- (BOOL)isWaitingNewLoadingRequestAfterSeek;
- (void)setIsWaitingNewLoadingRequestAfterSeek:(BOOL)arg1;
- (id)m3u8Parser;
- (void)setM3u8Parser:(id)arg1;
- (id)loaderProxy;
- (void)setLoaderProxy:(id)arg1;
- (id)dicDownloader;
- (void)setDicDownloader:(id)arg1;
- (void).cxx_destruct;
@end

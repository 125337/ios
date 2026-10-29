@interface WCPlayerDownloader : NSObject
{
    BOOL _bHadRecievedAllData; // +0x8
    BOOL _bHadRecieveMoov; // +0x9
    BOOL _bHadStopDownload; // +0xa
    BOOL _isSourceChanged; // +0xb
    BOOL _isHadRetryStart; // +0xc
    BOOL _isDownloadTaskLauncher; // +0xd
    unsigned int _lastUpdateNetwork; // +0x10
    unsigned long long _playerMode; // +0x18
    WCPlayerReporter * _reporter; // +0x20
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x28
    NSMutableArray * _arrDownloadArgs; // +0x30
    WCPlayerPlaybackInfo * _playbackInfo; // +0x38
    NSString * _nsM3u8; // +0x40
    long long _fileLength; // +0x48
    NSString * _mediaIdentifier; // +0x50
    id <WCPlayerDownloaderDelegate> _delegate; // +0x58
    NSString * _nsIdentifier; // +0x60
    id /* block */ _progressBlock; // +0x68
    id /* block */ _moovReadyBlock; // +0x70
    id /* block */ _m3u8ReadyBlock; // +0x78
    id /* block */ _dataReadyBlock; // +0x80
    id /* block */ _fastCompleteBlock; // +0x88
    id /* block */ _downloadCompleteBlock; // +0x90
}
+ (BOOL)copyVideoFromTmpPath:(id)arg1 toFormatPath:(id)arg2 identifier:(id)arg3;
- (id)initWithPlaybackInfo:(id)arg1 downloadArgs:(id)arg2;
- (void)dealloc;
- (void)setFileLength:(long long)arg1;
- (id)getVideoDataWithRange:(_NSRange)arg1;
- (unsigned long long)getLocalAvailableLengthWithOffset:(unsigned long long)arg1;
- (_NSRange)requestDataWithRange:(_NSRange)arg1 Sec:(float)arg2;
- (BOOL)startInternalDownload;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)delayNotifyWhenHitLocalCache;
- (void)onStartDownloadFailWithRetCode:(int)arg1;
- (void)stopDownloadVideo;
- (void)startDataPreload;
- (void)initCallbackBlock;
- (void)registerDownloadEvent:(BOOL)arg1;
- (void)handleSourceChangedEvent;
- (void)handleSuccessEvent:(id)arg1;
- (void)tryFixMP4Size;
- (void)handleDataAvaiableEvent:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)handleM3u8ReadyEvent:(id)arg1;
- (void)tryInitFileSizeWithLocalFile;
- (void)handleMoovReadyEvent:(id)arg1;
- (void)hanleStartDownloadEvent:(id)arg1;
- (void)handleErrorEvent:(id)arg1;
- (void)handleProgressEvent:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)formatPath;
- (id)streamTmpPath;
- (id)mediaIdentifier;
- (int)getRecentAverageSpeed;
- (BOOL)retryBySwitchDataSource;
- (id)randomSelectDownloadArgs;
- (unsigned long long)playerMode;
- (void)setPlayerMode:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)arrDownloadArgs;
- (void)setArrDownloadArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (BOOL)bHadRecievedAllData;
- (void)setBHadRecievedAllData:(BOOL)arg1;
- (BOOL)bHadRecieveMoov;
- (void)setBHadRecieveMoov:(BOOL)arg1;
- (BOOL)bHadStopDownload;
- (void)setBHadStopDownload:(BOOL)arg1;
- (id)nsM3u8;
- (void)setNsM3u8:(id)arg1;
- (long long)fileLength;
- (void)setMediaIdentifier:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (unsigned int)lastUpdateNetwork;
- (void)setLastUpdateNetwork:(unsigned int)arg1;
- (BOOL)isSourceChanged;
- (void)setIsSourceChanged:(BOOL)arg1;
- (BOOL)isHadRetryStart;
- (void)setIsHadRetryStart:(BOOL)arg1;
- (BOOL)isDownloadTaskLauncher;
- (void)setIsDownloadTaskLauncher:(BOOL)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)moovReadyBlock;
- (void)setMoovReadyBlock:(id /* block */)arg1;
- (id /* block */)m3u8ReadyBlock;
- (void)setM3u8ReadyBlock:(id /* block */)arg1;
- (id /* block */)dataReadyBlock;
- (void)setDataReadyBlock:(id /* block */)arg1;
- (id /* block */)fastCompleteBlock;
- (void)setFastCompleteBlock:(id /* block */)arg1;
- (id /* block */)downloadCompleteBlock;
- (void)setDownloadCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


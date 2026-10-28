@interface WCPlayerDownloader : WCPlayerObject
{
    BOOL _isStart; // +0x8
    BOOL _isRecievedAllData; // +0x9
    BOOL _bHadRecieveMoov; // +0xa
    BOOL _isSourceChanged; // +0xb
    BOOL _isHadRetryStart; // +0xc
    BOOL _isDownloadTaskLauncher; // +0xd
    unsigned int _lastUpdateNetwork; // +0x10
    WCPlayerReporter * _reporter; // +0x18
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x20
    NSMutableArray * _arrDownloadArgs; // +0x28
    WCPlayerPlaybackInfo * _playbackInfo; // +0x30
    long long _fileLength; // +0x38
    double _duration; // +0x40
    M3U8SegmentInfo * _segmentInfo; // +0x48
    id <WCPlayerDownloaderDelegate> _delegate; // +0x50
    NSData * _m3u8Data; // +0x58
    NSString * _m3u8Content; // +0x60
    id /* block */ _progressBlock; // +0x68
    id /* block */ _moovReadyBlock; // +0x70
    id /* block */ _m3u8ReadyBlock; // +0x78
    id /* block */ _dataReadyBlock; // +0x80
    id /* block */ _fastCompleteBlock; // +0x88
    id /* block */ _downloadCompleteBlock; // +0x90
}
- (id)initWithPlaybackInfo:(id)arg1 downloadArgs:(id)arg2;
- (void)dealloc;
- (double)duration;
- (id)m3u8Data;
- (void)setM3u8Content:(id)arg1;
- (id)getVideoDataWithRange:(_NSRange)arg1;
- (unsigned long long)getLocalAvailableLengthWithOffset:(unsigned long long)arg1;
- (_NSRange)requestDataWithRange:(_NSRange)arg1 Sec:(float)arg2;
- (BOOL)startInternalDownload;
- (void)start;
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
- (BOOL)isM3u8TsDownloader;
- (id)formatPath;
- (id)tempPath;
- (id)fileName;
- (BOOL)copyVideoFromTmpPath:(id)arg1 toFormatPath:(id)arg2;
- (BOOL)isRecentRecallCdnData;
- (int)getRecentAverageSpeed;
- (BOOL)retryBySwitchDataSource;
- (id)randomSelectDownloadArgs;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)arrDownloadArgs;
- (void)setArrDownloadArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (BOOL)isRecievedAllData;
- (void)setIsRecievedAllData:(BOOL)arg1;
- (BOOL)bHadRecieveMoov;
- (void)setBHadRecieveMoov:(BOOL)arg1;
- (long long)fileLength;
- (void)setFileLength:(long long)arg1;
- (void)setDuration:(double)arg1;
- (id)segmentInfo;
- (void)setSegmentInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)lastUpdateNetwork;
- (void)setLastUpdateNetwork:(unsigned int)arg1;
- (BOOL)isSourceChanged;
- (void)setIsSourceChanged:(BOOL)arg1;
- (BOOL)isHadRetryStart;
- (void)setIsHadRetryStart:(BOOL)arg1;
- (BOOL)isDownloadTaskLauncher;
- (void)setIsDownloadTaskLauncher:(BOOL)arg1;
- (void)setM3u8Data:(id)arg1;
- (id)m3u8Content;
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

@interface KSRemoteAudioDataProvider : KSAudioDataProvider <LZAudioDataDownloadDelegate>
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol; // +0x8
    BOOL _bReadyToParsing; // +0x10
    long long _bytesParesd; // +0x18
    unsigned int _parsingFlag; // +0x20
    long long _parsingCnt; // +0x28
    BOOL _enableLimitNet; // +0x30
    BOOL _closed; // +0x31
    BOOL _bPaused; // +0x32
    BOOL _orgEnableLimitSetting; // +0x33
    BOOL _bFirstLimitPart; // +0x34
    unsigned int _retryCnt; // +0x38
    unsigned int _maxRetryCnt; // +0x3c
    unsigned int _firstLimitTime; // +0x40
    unsigned int _triggleTime; // +0x44
    unsigned int _downloadTime; // +0x48
    LZAudioDataDownloader * _headerDownloader; // +0x50
    long long _headLastPos; // +0x58
    LZAudioDataDownloader * _tailDownloader; // +0x60
    id <KSAudioFileProtocol> _audioFile; // +0x68
    NSString * _audioFileExt; // +0x70
    NSString * _lastdownLoadUrl; // +0x78
    double _lastDownloadSpeed; // +0x80
    double _lastDownloadCost; // +0x88
    NSDictionary * _lastDownloadDetailInfo; // +0x90
    unsigned long long _cacheStatus; // +0x98
    long long _lastReadingPos; // +0xa0
    _NSRange _tailDataRange; // +0xa8
}
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3 downloadProtocol:(id)arg4;
- (void)dealloc;
- (id)audioFileExtension;
- (long long)fileCachingLength:(long long *)arg1;
- (BOOL)isReady;
- (void)setBReadyToParsing:(BOOL)arg1;
- (void)setEnableLimitNet:(BOOL)arg1;
- (BOOL)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(BOOL *)arg4;
- (BOOL)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (BOOL)prepareAudioData;
- (void)prepareSeekingData:(long long)arg1;
- (void)prepareTailData:(_NSRange)arg1;
- (void)prepareBufferData;
- (void)pauseDownloadData;
- (void)resumeDownloadData;
- (void)close:(BOOL)arg1;
- (id)buildDownloadProtocol;
- (void)notifyAudioFileAlreadFinished;
- (void)tryParsingAudioInfo;
- (void)startDownload:(id)arg1 range:(_LzRange)arg2 retryCnt:(unsigned int)arg3;
- (void)retryDownloadData:(id)arg1;
- (void)setAudioFileToPlay;
- (void)judgeLimitDownload:(long long)arg1 addtionLen:(long long)arg2;
- (void)startLimitDownload:(long long)arg1;
- (void)onAudioTask:(id)arg1 finish:(id)arg2;
- (void)onAudioTask:(id)arg1 error:(id)arg2;
- (void)onAudioTask:(id)arg1 receivedData:(id)arg2;
- (void)onAudioTask:(id)arg1 receivedHeader:(id)arg2;
- (BOOL)isDataCorruption:(id)arg1;
- (id)userProtocol;
- (BOOL)enableLimitNet;
- (BOOL)bReadyToParsing;
- (id)headerDownloader;
- (void)setHeaderDownloader:(id)arg1;
- (long long)headLastPos;
- (void)setHeadLastPos:(long long)arg1;
- (id)tailDownloader;
- (void)setTailDownloader:(id)arg1;
- (_NSRange)tailDataRange;
- (void)setTailDataRange:(_NSRange)arg1;
- (id)audioFile;
- (void)setAudioFile:(id)arg1;
- (id)audioFileExt;
- (void)setAudioFileExt:(id)arg1;
- (BOOL)closed;
- (void)setClosed:(BOOL)arg1;
- (BOOL)bPaused;
- (void)setBPaused:(BOOL)arg1;
- (unsigned int)retryCnt;
- (void)setRetryCnt:(unsigned int)arg1;
- (unsigned int)maxRetryCnt;
- (void)setMaxRetryCnt:(unsigned int)arg1;
- (id)lastdownLoadUrl;
- (void)setLastdownLoadUrl:(id)arg1;
- (double)lastDownloadSpeed;
- (void)setLastDownloadSpeed:(double)arg1;
- (double)lastDownloadCost;
- (void)setLastDownloadCost:(double)arg1;
- (id)lastDownloadDetailInfo;
- (void)setLastDownloadDetailInfo:(id)arg1;
- (unsigned long long)cacheStatus;
- (void)setCacheStatus:(unsigned long long)arg1;
- (long long)lastReadingPos;
- (void)setLastReadingPos:(long long)arg1;
- (BOOL)orgEnableLimitSetting;
- (void)setOrgEnableLimitSetting:(BOOL)arg1;
- (unsigned int)firstLimitTime;
- (void)setFirstLimitTime:(unsigned int)arg1;
- (unsigned int)triggleTime;
- (void)setTriggleTime:(unsigned int)arg1;
- (unsigned int)downloadTime;
- (void)setDownloadTime:(unsigned int)arg1;
- (BOOL)bFirstLimitPart;
- (void)setBFirstLimitPart:(BOOL)arg1;
- (void).cxx_destruct;
@end

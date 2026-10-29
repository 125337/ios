@interface WCFinderCommentAdMonitorInfo : NSObject
{
    BOOL _hitPreload; // +0x8
    BOOL _isFirstExpose; // +0x9
    NSString * _tid; // +0x10
    unsigned long long _aid; // +0x18
    unsigned long long _netType; // +0x20
    unsigned long long _contentType; // +0x28
    NSString * _mediaUrl; // +0x30
    unsigned long long _fileSize; // +0x38
    unsigned long long _cgiCostTime; // +0x40
    NSString * _traceId; // +0x48
    unsigned long long _userPerceivedTime; // +0x50
    unsigned long long _downloadTime; // +0x58
    long long _errorCode; // +0x60
    unsigned long long _imageShowTime; // +0x68
    unsigned long long _firstFrameTime; // +0x70
    unsigned long long _waittingCount; // +0x78
    unsigned long long _totalWaittingTime; // +0x80
    NSString * _waitingDetails; // +0x88
    NSString * _svrIp; // +0x90
    unsigned long long _svrPort; // +0x98
    long long _cdnErrCode; // +0xa0
    long long _playerErrCode; // +0xa8
    unsigned long long _preloadPercent; // +0xb0
    unsigned long long _connectTime; // +0xb8
    unsigned long long _rtt; // +0xc0
    unsigned long long _decodeTime; // +0xc8
    unsigned long long _renderTime; // +0xd0
}
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)aid;
- (void)setAid:(unsigned long long)arg1;
- (unsigned long long)netType;
- (void)setNetType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (BOOL)hitPreload;
- (void)setHitPreload:(BOOL)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (BOOL)isFirstExpose;
- (void)setIsFirstExpose:(BOOL)arg1;
- (unsigned long long)cgiCostTime;
- (void)setCgiCostTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)userPerceivedTime;
- (void)setUserPerceivedTime:(unsigned long long)arg1;
- (unsigned long long)downloadTime;
- (void)setDownloadTime:(unsigned long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (unsigned long long)imageShowTime;
- (void)setImageShowTime:(unsigned long long)arg1;
- (unsigned long long)firstFrameTime;
- (void)setFirstFrameTime:(unsigned long long)arg1;
- (unsigned long long)waittingCount;
- (void)setWaittingCount:(unsigned long long)arg1;
- (unsigned long long)totalWaittingTime;
- (void)setTotalWaittingTime:(unsigned long long)arg1;
- (id)waitingDetails;
- (void)setWaitingDetails:(id)arg1;
- (id)svrIp;
- (void)setSvrIp:(id)arg1;
- (unsigned long long)svrPort;
- (void)setSvrPort:(unsigned long long)arg1;
- (long long)cdnErrCode;
- (void)setCdnErrCode:(long long)arg1;
- (long long)playerErrCode;
- (void)setPlayerErrCode:(long long)arg1;
- (unsigned long long)preloadPercent;
- (void)setPreloadPercent:(unsigned long long)arg1;
- (unsigned long long)connectTime;
- (void)setConnectTime:(unsigned long long)arg1;
- (unsigned long long)rtt;
- (void)setRtt:(unsigned long long)arg1;
- (unsigned long long)decodeTime;
- (void)setDecodeTime:(unsigned long long)arg1;
- (unsigned long long)renderTime;
- (void)setRenderTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


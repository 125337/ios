@interface WCFinderLoadInfo : NSObject
{
    BOOL _isDiscoveryPreload; // +0x8
    int _commentScene; // +0xc
    unsigned long long _actionType; // +0x10
    unsigned long long _downloadType; // +0x18
    unsigned long long _downloadStrategy; // +0x20
    unsigned long long _netType; // +0x28
    NSString * _tid; // +0x30
    unsigned long long _durationInS; // +0x38
    unsigned long long _durationInMS; // +0x40
    unsigned long long _fileSize; // +0x48
    NSString * _videoFormat; // +0x50
    NSString * _bypass; // +0x58
    unsigned long long _downloadSize; // +0x60
    unsigned long long _completeDownloadSize; // +0x68
    unsigned long long _downloadStartTime; // +0x70
    unsigned long long _downloadEndTime; // +0x78
    unsigned long long _uniqPlayTime; // +0x80
    unsigned long long _realPlayTime; // +0x88
    unsigned long long _stayTime; // +0x90
    unsigned long long _playCount; // +0x98
    unsigned long long _playStartTime; // +0xa0
    unsigned long long _playEndTime; // +0xa8
    unsigned long long _playStartPos; // +0xb0
    unsigned long long _playEndPos; // +0xb8
}
- (id)description;
- (void)fillWithMediaWrap:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (unsigned long long)downloadStrategy;
- (void)setDownloadStrategy:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)netType;
- (void)setNetType:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)durationInS;
- (void)setDurationInS:(unsigned long long)arg1;
- (unsigned long long)durationInMS;
- (void)setDurationInMS:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)videoFormat;
- (void)setVideoFormat:(id)arg1;
- (id)bypass;
- (void)setBypass:(id)arg1;
- (unsigned long long)downloadSize;
- (void)setDownloadSize:(unsigned long long)arg1;
- (unsigned long long)completeDownloadSize;
- (void)setCompleteDownloadSize:(unsigned long long)arg1;
- (unsigned long long)downloadStartTime;
- (void)setDownloadStartTime:(unsigned long long)arg1;
- (unsigned long long)downloadEndTime;
- (void)setDownloadEndTime:(unsigned long long)arg1;
- (BOOL)isDiscoveryPreload;
- (void)setIsDiscoveryPreload:(BOOL)arg1;
- (unsigned long long)uniqPlayTime;
- (void)setUniqPlayTime:(unsigned long long)arg1;
- (unsigned long long)realPlayTime;
- (void)setRealPlayTime:(unsigned long long)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (unsigned long long)playCount;
- (void)setPlayCount:(unsigned long long)arg1;
- (unsigned long long)playStartTime;
- (void)setPlayStartTime:(unsigned long long)arg1;
- (unsigned long long)playEndTime;
- (void)setPlayEndTime:(unsigned long long)arg1;
- (unsigned long long)playStartPos;
- (void)setPlayStartPos:(unsigned long long)arg1;
- (unsigned long long)playEndPos;
- (void)setPlayEndPos:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


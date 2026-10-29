@interface MMKSMusicTask : NSObject
{
    BOOL _isLocalFile; // +0x8
    BOOL _isQQMusic; // +0x9
    BOOL _isHLS; // +0xa
    NSString * _url; // +0x10
    NSString * _cacheId; // +0x18
    NSString * _cacheUrl; // +0x20
    NSString * _musicId; // +0x28
    double _startTime; // +0x30
    double _playbackRate; // +0x38
    NSString * _referrer; // +0x40
}
- (id)init;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)cacheId;
- (void)setCacheId:(id)arg1;
- (id)cacheUrl;
- (void)setCacheUrl:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (BOOL)isLocalFile;
- (void)setIsLocalFile:(BOOL)arg1;
- (BOOL)isQQMusic;
- (void)setIsQQMusic:(BOOL)arg1;
- (BOOL)isHLS;
- (void)setIsHLS:(BOOL)arg1;
- (double)playbackRate;
- (void)setPlaybackRate:(double)arg1;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (void).cxx_destruct;
@end


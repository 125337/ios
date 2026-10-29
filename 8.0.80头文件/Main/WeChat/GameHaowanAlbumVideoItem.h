@interface GameHaowanAlbumVideoItem : MMObject
{
    BOOL _isLocalCache; // +0x8
    unsigned int _durationSec; // +0xc
    unsigned int _previewJumpType; // +0x10
    NSString * _videoId; // +0x18
    NSString * _appId; // +0x20
    NSString * _title; // +0x28
    NSString * _subtitle; // +0x30
    NSString * _playUrl; // +0x38
    NSString * _thumbUrl; // +0x40
    unsigned long long _createTimeSec; // +0x48
    NSString * _gameName; // +0x50
    NSArray * _tags; // +0x58
    NSString * _transInfo; // +0x60
    NSString * _previewJumpUrl; // +0x68
    NSString * _previewPreloadId; // +0x70
    CGSize _videoSize; // +0x78
}
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (unsigned long long)createTimeSec;
- (void)setCreateTimeSec:(unsigned long long)arg1;
- (unsigned int)durationSec;
- (void)setDurationSec:(unsigned int)arg1;
- (id)gameName;
- (void)setGameName:(id)arg1;
- (id)tags;
- (void)setTags:(id)arg1;
- (id)transInfo;
- (void)setTransInfo:(id)arg1;
- (id)previewJumpUrl;
- (void)setPreviewJumpUrl:(id)arg1;
- (id)previewPreloadId;
- (void)setPreviewPreloadId:(id)arg1;
- (unsigned int)previewJumpType;
- (void)setPreviewJumpType:(unsigned int)arg1;
- (BOOL)isLocalCache;
- (void)setIsLocalCache:(BOOL)arg1;
- (void).cxx_destruct;
@end

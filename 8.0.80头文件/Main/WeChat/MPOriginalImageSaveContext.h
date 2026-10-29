@interface MPOriginalImageSaveContext : NSObject
{
    BOOL _isLive; // +0x8
    NSString * _originUrl; // +0x10
    NSString * _originKey; // +0x18
    NSString * _liveVideoUrl; // +0x20
}
- (id)originUrl;
- (void)setOriginUrl:(id)arg1;
- (id)originKey;
- (void)setOriginKey:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (id)liveVideoUrl;
- (void)setLiveVideoUrl:(id)arg1;
- (void).cxx_destruct;
@end

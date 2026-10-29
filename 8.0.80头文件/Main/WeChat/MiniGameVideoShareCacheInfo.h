@interface MiniGameVideoShareCacheInfo : NSObject
{
    MiniGameVideoFile * _videofile; // +0x8
    NSString * _shareUrl; // +0x10
    NSString * _shareThumbUrl; // +0x18
}
- (id)initWithVideoFile:(id)arg1 shareUrl:(id)arg2 shareThumbUrl:(id)arg3;
- (BOOL)isValid;
- (id)videofile;
- (void)setVideofile:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareThumbUrl;
- (void)setShareThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end

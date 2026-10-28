@interface WXVideoObject : NSObject
{
    NSString * videoUrl; // +0x8
    NSString * videoLowBandUrl; // +0x10
}
+ (id)object;
- (id)init;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoLowBandUrl;
- (void)setVideoLowBandUrl:(id)arg1;
- (void).cxx_destruct;
@end

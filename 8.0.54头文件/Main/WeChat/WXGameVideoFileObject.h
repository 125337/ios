@interface WXGameVideoFileObject : NSObject
{
    NSData * videoFileData; // +0x8
    NSString * videoUrl; // +0x10
    NSString * thumbUrl; // +0x18
}
+ (id)object;
- (id)init;
- (id)videoFileData;
- (void)setVideoFileData:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end


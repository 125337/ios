@interface MSEMessageMetaDataVideoItem : NSObject <PBCoding>
{
    NSString * _toUsername; // +0x8
    NSString * _videoUrl; // +0x10
}
+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_videoUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (void).cxx_destruct;
@end


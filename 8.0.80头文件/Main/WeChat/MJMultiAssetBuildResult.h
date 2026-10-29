@interface MJMultiAssetBuildResult : NSObject
{
    NSArray * _mjAssetInfos; // +0x8
    NSArray * _durations; // +0x10
    long long _imageCount; // +0x18
    long long _videoCount; // +0x20
}
- (id)mjAssetInfos;
- (void)setMjAssetInfos:(id)arg1;
- (id)durations;
- (void)setDurations:(id)arg1;
- (long long)imageCount;
- (void)setImageCount:(long long)arg1;
- (long long)videoCount;
- (void)setVideoCount:(long long)arg1;
- (void).cxx_destruct;
@end

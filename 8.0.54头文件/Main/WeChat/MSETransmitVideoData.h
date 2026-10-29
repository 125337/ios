@interface MSETransmitVideoData : MSETransmitData <PBCoding>
{
    NSString * _videoUrl; // +0x18
    NSString * _filePath; // +0x20
    NSString * _thumbPath; // +0x28
}
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_thumbPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (void).cxx_destruct;
@end


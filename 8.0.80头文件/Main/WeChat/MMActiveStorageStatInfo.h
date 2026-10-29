@interface MMActiveStorageStatInfo : NSObject <PBCoding>
{
    unsigned long long _videoThumbSize; // +0x8
    unsigned long long _videoThumbCount; // +0x10
    unsigned long long _videoSize; // +0x18
    unsigned long long _videoCount; // +0x20
    unsigned long long _audioSize; // +0x28
    unsigned long long _audioCount; // +0x30
    unsigned long long _imageThumbSize; // +0x38
    unsigned long long _imageThumbCount; // +0x40
    unsigned long long _imageSize; // +0x48
    unsigned long long _imageCount; // +0x50
    unsigned long long _appThumbSize; // +0x58
    unsigned long long _appThumbCount; // +0x60
    unsigned long long _appFileSize; // +0x68
    unsigned long long _appFileCount; // +0x70
}
+ (void)PBArrayAdd_videoThumbSize;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_videoCount;
+ (void)PBArrayAdd_audioSize;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_imageCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_appFileCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)totalSize;
- (id)getReportKVInfo;
- (unsigned long long)videoThumbSize;
- (void)setVideoThumbSize:(unsigned long long)arg1;
- (unsigned long long)videoThumbCount;
- (void)setVideoThumbCount:(unsigned long long)arg1;
- (unsigned long long)videoSize;
- (void)setVideoSize:(unsigned long long)arg1;
- (unsigned long long)videoCount;
- (void)setVideoCount:(unsigned long long)arg1;
- (unsigned long long)audioSize;
- (void)setAudioSize:(unsigned long long)arg1;
- (unsigned long long)audioCount;
- (void)setAudioCount:(unsigned long long)arg1;
- (unsigned long long)imageThumbSize;
- (void)setImageThumbSize:(unsigned long long)arg1;
- (unsigned long long)imageThumbCount;
- (void)setImageThumbCount:(unsigned long long)arg1;
- (unsigned long long)imageSize;
- (void)setImageSize:(unsigned long long)arg1;
- (unsigned long long)imageCount;
- (void)setImageCount:(unsigned long long)arg1;
- (unsigned long long)appThumbSize;
- (void)setAppThumbSize:(unsigned long long)arg1;
- (unsigned long long)appThumbCount;
- (void)setAppThumbCount:(unsigned long long)arg1;
- (unsigned long long)appFileSize;
- (void)setAppFileSize:(unsigned long long)arg1;
- (unsigned long long)appFileCount;
- (void)setAppFileCount:(unsigned long long)arg1;
@end

@interface MMPHAssetCacheObj : MMAssetForPHAssetFramework <PBCoding>
{
    BOOL _isVideoAsset; // +0x8
    BOOL _isGifAsset; // +0x9
    BOOL _isUpdated; // +0xa
    NSString * _identifier; // +0x10
    double _videoAssetDuration; // +0x18
    UIImage * _thumbImage; // +0x20
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_isVideoAsset;
+ (void)PBArrayAdd_videoAssetDuration;
+ (void)PBArrayAdd_isGifAsset;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithIdentifer:(id)arg1;
- (void)onMemoryWarning;
- (id)fetchThumbImage;
- (void)updateThumbImage:(id)arg1;
- (void)tryLoadPHAsset;
- (BOOL)tryUpdateAsset;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (BOOL)isVideo;
- (BOOL)isGif;
- (BOOL)isPictureForIncludeGif:(BOOL)arg1;
- (id)videoDuration;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (id)getThumbnail;
- (id)getThumbImage;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)isVideoAsset;
- (void)setIsVideoAsset:(BOOL)arg1;
- (BOOL)isGifAsset;
- (void)setIsGifAsset:(BOOL)arg1;
- (double)videoAssetDuration;
- (void)setVideoAssetDuration:(double)arg1;
- (BOOL)isUpdated;
- (void)setIsUpdated:(BOOL)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (void).cxx_destruct;
@end

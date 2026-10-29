@interface WCLivePhotoMaker : NSObject
{
    BOOL _preferedHEVC; // +0x8
    long long _stillImageTimeMs; // +0x10
    long long _imageMetadataCostTimeMs; // +0x18
    long long _videoMetadataCostTimeMs; // +0x20
}
+ (void)makeLivePhotoByImagePath:(id)arg1 videoPath:(id)arg2 preferedHEVC:(BOOL)arg3 stillImageTimeMs:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (BOOL)saveToJPEGWithImage:(id)arg1 imagePath:(id)arg2;
+ (id)generateImagePathWithRandom;
- (void)makeLivePhotoWithImagePath:(id)arg1 videoPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)preferedHEVC;
- (void)setPreferedHEVC:(BOOL)arg1;
- (long long)stillImageTimeMs;
- (void)setStillImageTimeMs:(long long)arg1;
- (long long)imageMetadataCostTimeMs;
- (void)setImageMetadataCostTimeMs:(long long)arg1;
- (long long)videoMetadataCostTimeMs;
- (void)setVideoMetadataCostTimeMs:(long long)arg1;
@end


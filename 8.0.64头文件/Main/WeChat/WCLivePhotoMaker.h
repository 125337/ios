@interface WCLivePhotoMaker : NSObject
{
    BOOL _preferedHEVC; // +0x8
    long long _stillImageTimeMs; // +0x10
    long long _imageMetadataCostTimeMs; // +0x18
    long long _videoMetadataCostTimeMs; // +0x20
    long long _readyForMoreTimeMs; // +0x28
    long long _readyForMoreFrameCounts; // +0x30
    WCLivePhotoMovModel * _livePhotoMovModel; // +0x38
}
+ (BOOL)saveToJPEGWithImage:(id)arg1 imagePath:(id)arg2;
+ (id)generateImagePathWithRandom;
- (id)livePhotoMovModel;
- (void)makeLivePhotoWithImagePath:(id)arg1 videoPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)makeLivePhotoByImagePath:(id)arg1 videoPath:(id)arg2 preferedHEVC:(BOOL)arg3 stillImageTimeMs:(long long)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)preferedHEVC;
- (void)setPreferedHEVC:(BOOL)arg1;
- (long long)stillImageTimeMs;
- (void)setStillImageTimeMs:(long long)arg1;
- (long long)imageMetadataCostTimeMs;
- (void)setImageMetadataCostTimeMs:(long long)arg1;
- (long long)videoMetadataCostTimeMs;
- (void)setVideoMetadataCostTimeMs:(long long)arg1;
- (long long)readyForMoreTimeMs;
- (void)setReadyForMoreTimeMs:(long long)arg1;
- (long long)readyForMoreFrameCounts;
- (void)setReadyForMoreFrameCounts:(long long)arg1;
- (void)setLivePhotoMovModel:(id)arg1;
- (void).cxx_destruct;
@end

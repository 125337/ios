@interface BizPhotoExtInfo : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
    NSNumber * _isLivePhoto; // +0x18
    NSString * _livePhotoVideoPath; // +0x20
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 isLivePhoto:(id)arg3 livePhotoVideoPath:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)isLivePhoto;
- (void)setIsLivePhoto:(id)arg1;
- (id)livePhotoVideoPath;
- (void)setLivePhotoVideoPath:(id)arg1;
- (void).cxx_destruct;
@end

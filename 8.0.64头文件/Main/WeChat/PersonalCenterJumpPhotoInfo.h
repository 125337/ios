@interface PersonalCenterJumpPhotoInfo : NSObject
{
    NSString * _path; // +0x8
    NSString * _mimeType; // +0x10
    NSNumber * _width; // +0x18
    NSNumber * _height; // +0x20
    NSNumber * _isLivePhoto; // +0x28
    NSString * _livePhotoVideoPath; // +0x30
    NSNumber * _latitude; // +0x38
    NSNumber * _longitude; // +0x40
}
+ (id)makeWithPath:(id)arg1 mimeType:(id)arg2 width:(id)arg3 height:(id)arg4 isLivePhoto:(id)arg5 livePhotoVideoPath:(id)arg6 latitude:(id)arg7 longitude:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)path;
- (void)setPath:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)isLivePhoto;
- (void)setIsLivePhoto:(id)arg1;
- (id)livePhotoVideoPath;
- (void)setLivePhotoVideoPath:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (void).cxx_destruct;
@end

@interface PlatformMediaItem : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _isLivePhotoOpt; // +0x9
    PlatformMediaTypeBox * _type; // +0x10
    NSString * _originPath; // +0x18
    NSString * _thumbPath; // +0x20
    PlatformMediaSize * _thumbSize; // +0x28
    PlatformMediaSize * _originSize; // +0x30
    NSString * _lpVideoPath; // +0x38
    PlatformMediaSize * _lpVideoSize; // +0x40
    NSString * _lpVideoThumbPath; // +0x48
    PlatformMediaSize * _lpVideoThumbSize; // +0x50
    long long _lpStillImageTimeMs; // +0x58
    NSString * _mediaId; // +0x60
    long long _durationMs; // +0x68
    NSString * _translateImgPath; // +0x70
    PlatformImageScaleInfo * _imageScaleInfo; // +0x78
}
+ (id)makeWithType:(id)arg1 originPath:(id)arg2 thumbPath:(id)arg3 thumbSize:(id)arg4 originSize:(id)arg5 lpVideoPath:(id)arg6 lpVideoSize:(id)arg7 lpVideoThumbPath:(id)arg8 lpVideoThumbSize:(id)arg9 lpStillImageTimeMs:(long long)arg10 mediaId:(id)arg11 durationMs:(long long)arg12 translateImgPath:(id)arg13 isLivePhoto:(BOOL)arg14 isLivePhotoOpt:(BOOL)arg15 imageScaleInfo:(id)arg16;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)originPath;
- (void)setOriginPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)thumbSize;
- (void)setThumbSize:(id)arg1;
- (id)originSize;
- (void)setOriginSize:(id)arg1;
- (id)lpVideoPath;
- (void)setLpVideoPath:(id)arg1;
- (id)lpVideoSize;
- (void)setLpVideoSize:(id)arg1;
- (id)lpVideoThumbPath;
- (void)setLpVideoThumbPath:(id)arg1;
- (id)lpVideoThumbSize;
- (void)setLpVideoThumbSize:(id)arg1;
- (long long)lpStillImageTimeMs;
- (void)setLpStillImageTimeMs:(long long)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (id)translateImgPath;
- (void)setTranslateImgPath:(id)arg1;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)isLivePhotoOpt;
- (void)setIsLivePhotoOpt:(BOOL)arg1;
- (id)imageScaleInfo;
- (void)setImageScaleInfo:(id)arg1;
- (void).cxx_destruct;
@end

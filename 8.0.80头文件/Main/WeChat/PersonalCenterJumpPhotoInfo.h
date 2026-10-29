@interface PersonalCenterJumpPhotoInfo : NSObject
{
    NSString * _path; // +0x8
    NSString * _mimeType; // +0x10
    NSString * _originPath; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
    NSNumber * _isLivePhoto; // +0x30
    NSString * _livePhotoVideoPath; // +0x38
    NSString * _originLivePhotoVideoPath; // +0x40
    NSNumber * _latitude; // +0x48
    NSNumber * _longitude; // +0x50
    NSString * _aiPicId; // +0x58
    NSString * _aiPicPrompt; // +0x60
    NSNumber * _aiPicSource; // +0x68
    NSString * _aiPicTemplateId; // +0x70
    NSString * _aiPicDataBuf; // +0x78
    NSString * _aiPicStyle; // +0x80
}
+ (id)makeWithPath:(id)arg1 mimeType:(id)arg2 originPath:(id)arg3 width:(id)arg4 height:(id)arg5 isLivePhoto:(id)arg6 livePhotoVideoPath:(id)arg7 originLivePhotoVideoPath:(id)arg8 latitude:(id)arg9 longitude:(id)arg10 aiPicId:(id)arg11 aiPicPrompt:(id)arg12 aiPicSource:(id)arg13 aiPicTemplateId:(id)arg14 aiPicDataBuf:(id)arg15 aiPicStyle:(id)arg16;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)path;
- (void)setPath:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)originPath;
- (void)setOriginPath:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)isLivePhoto;
- (void)setIsLivePhoto:(id)arg1;
- (id)livePhotoVideoPath;
- (void)setLivePhotoVideoPath:(id)arg1;
- (id)originLivePhotoVideoPath;
- (void)setOriginLivePhotoVideoPath:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)aiPicId;
- (void)setAiPicId:(id)arg1;
- (id)aiPicPrompt;
- (void)setAiPicPrompt:(id)arg1;
- (id)aiPicSource;
- (void)setAiPicSource:(id)arg1;
- (id)aiPicTemplateId;
- (void)setAiPicTemplateId:(id)arg1;
- (id)aiPicDataBuf;
- (void)setAiPicDataBuf:(id)arg1;
- (id)aiPicStyle;
- (void)setAiPicStyle:(id)arg1;
- (void).cxx_destruct;
@end

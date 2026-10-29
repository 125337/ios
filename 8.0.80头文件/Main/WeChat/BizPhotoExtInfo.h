@interface BizPhotoExtInfo : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
    NSNumber * _isLivePhoto; // +0x18
    NSString * _livePhotoVideoPath; // +0x20
    NSString * _originLivePhotoVideoPath; // +0x28
    NSString * _aiPicId; // +0x30
    NSString * _aiPicPrompt; // +0x38
    NSNumber * _aiPicSource; // +0x40
    NSString * _aiPicTemplateId; // +0x48
    NSString * _aiPicDataBuf; // +0x50
    NSString * _aiPicStyle; // +0x58
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 isLivePhoto:(id)arg3 livePhotoVideoPath:(id)arg4 originLivePhotoVideoPath:(id)arg5 aiPicId:(id)arg6 aiPicPrompt:(id)arg7 aiPicSource:(id)arg8 aiPicTemplateId:(id)arg9 aiPicDataBuf:(id)arg10 aiPicStyle:(id)arg11;
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
- (id)originLivePhotoVideoPath;
- (void)setOriginLivePhotoVideoPath:(id)arg1;
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

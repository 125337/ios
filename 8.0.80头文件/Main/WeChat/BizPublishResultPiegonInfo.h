@interface BizPublishResultPiegonInfo : NSObject
{
    NSNumber * _success; // +0x8
    NSArray * _imagesInfo; // +0x10
    NSString * _title; // +0x18
    BizPublishLaunchPoiPiegonInfo * _poiInfo; // +0x20
    NSString * _nickname; // +0x28
    NSString * _avatar; // +0x30
    NSString * _url; // +0x38
    BizPublishResultImagePiegonInfo * _coverInfo; // +0x40
    BizPublishAppMsgDataResultPigeonInfo * _appMsgData; // +0x48
    NSNumber * _successInit; // +0x50
    NSString * _reason; // +0x58
    NSNumber * _rewardOpened; // +0x60
}
+ (id)makeWithSuccess:(id)arg1 imagesInfo:(id)arg2 title:(id)arg3 poiInfo:(id)arg4 nickname:(id)arg5 avatar:(id)arg6 url:(id)arg7 coverInfo:(id)arg8 appMsgData:(id)arg9 successInit:(id)arg10 reason:(id)arg11 rewardOpened:(id)arg12;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)success;
- (void)setSuccess:(id)arg1;
- (id)imagesInfo;
- (void)setImagesInfo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)appMsgData;
- (void)setAppMsgData:(id)arg1;
- (id)successInit;
- (void)setSuccessInit:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (id)rewardOpened;
- (void)setRewardOpened:(id)arg1;
- (void).cxx_destruct;
@end

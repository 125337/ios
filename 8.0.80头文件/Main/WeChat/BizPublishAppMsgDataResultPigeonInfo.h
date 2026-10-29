@interface BizPublishAppMsgDataResultPigeonInfo : NSObject
{
    NSString * _title; // +0x8
    BizPublishAppMsgDataResultPigeonBizInfo * _bizInfo; // +0x10
    BizPublishResultImagePiegonInfo * _pictureInfo; // +0x18
    NSNumber * _serviceType; // +0x20
    NSString * _jumpUrl; // +0x28
    NSString * _contentUrl; // +0x30
}
+ (id)makeWithTitle:(id)arg1 bizInfo:(id)arg2 pictureInfo:(id)arg3 serviceType:(id)arg4 jumpUrl:(id)arg5 contentUrl:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)pictureInfo;
- (void)setPictureInfo:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (void).cxx_destruct;
@end

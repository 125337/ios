@interface WCAdvertiseFinderTopicResModel : NSObject
{
    NSString * _avatar; // +0x8
    NSString * _nickname; // +0x10
    NSString * _tag; // +0x18
    NSString * _desc; // +0x20
    NSString * _barBgColor; // +0x28
    NSString * _duration; // +0x30
    NSString * _finderType; // +0x38
    WCAdvertiseFinderTopicResImageModel * _imageInfo; // +0x40
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)barBgColor;
- (void)setBarBgColor:(id)arg1;
- (id)duration;
- (void)setDuration:(id)arg1;
- (id)finderType;
- (void)setFinderType:(id)arg1;
- (id)imageInfo;
- (void)setImageInfo:(id)arg1;
- (void).cxx_destruct;
@end


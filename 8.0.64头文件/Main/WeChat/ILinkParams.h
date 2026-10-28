@interface ILinkParams : NSObject
{
    BOOL _enableCustomAudio; // +0x8
    unsigned int _wxUin; // +0xc
    NSString * _wxUserName; // +0x10
    NSString * _sdkAppId; // +0x18
    NSString * _sdkGroupId; // +0x20
    NSString * _rtmpUrl; // +0x28
}
- (unsigned int)wxUin;
- (void)setWxUin:(unsigned int)arg1;
- (id)wxUserName;
- (void)setWxUserName:(id)arg1;
- (id)sdkAppId;
- (void)setSdkAppId:(id)arg1;
- (id)sdkGroupId;
- (void)setSdkGroupId:(id)arg1;
- (id)rtmpUrl;
- (void)setRtmpUrl:(id)arg1;
- (BOOL)enableCustomAudio;
- (void)setEnableCustomAudio:(BOOL)arg1;
- (void).cxx_destruct;
@end

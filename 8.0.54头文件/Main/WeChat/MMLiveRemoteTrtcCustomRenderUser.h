@interface MMLiveRemoteTrtcCustomRenderUser : NSObject
{
    unsigned long long _renderSrc; // +0x8
    NSString * _sdkUserId; // +0x10
    NSString * _userName; // +0x18
    CGRect _normalizeFrame; // +0x20
}
+ (id)genCustomRenderUserWithUserId:(id)arg1 userName:(id)arg2 renderSrc:(unsigned long long)arg3 normalizeFrame:(CGRect)arg4;
- (BOOL)isValid;
- (unsigned long long)renderSrc;
- (void)setRenderSrc:(unsigned long long)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end


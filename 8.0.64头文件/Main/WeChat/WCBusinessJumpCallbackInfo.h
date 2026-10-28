@interface WCBusinessJumpCallbackInfo : NSObject
{
    long long _sceneValue; // +0x8
    NSString * _appid; // +0x10
    NSString * _universalLink; // +0x18
    NSString * _callbackUrl; // +0x20
    NSDictionary * _extInfo; // +0x28
}
- (long long)sceneValue;
- (void)setSceneValue:(long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)callbackUrl;
- (void)setCallbackUrl:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

@interface ZTChannelInfo : NSObject
{
    NSString * _appid; // +0x8
    NSString * _packageid; // +0x10
    NSString * _schannel; // +0x18
    NSString * _sceneid; // +0x20
    NSString * _scenename; // +0x28
    NSString * _subscenename; // +0x30
    NSString * _qq; // +0x38
    NSString * _commid; // +0x40
    NSString * _openid; // +0x48
}
- (id)toDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)packageid;
- (void)setPackageid:(id)arg1;
- (id)schannel;
- (void)setSchannel:(id)arg1;
- (id)sceneid;
- (void)setSceneid:(id)arg1;
- (id)scenename;
- (void)setScenename:(id)arg1;
- (id)subscenename;
- (void)setSubscenename:(id)arg1;
- (id)qq;
- (void)setQq:(id)arg1;
- (id)commid;
- (void)setCommid:(id)arg1;
- (id)openid;
- (void)setOpenid:(id)arg1;
- (void).cxx_destruct;
@end

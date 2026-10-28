@interface WCPayAntiCheatWarningJumpInfo : NSObject
{
    unsigned int _type; // +0x8
    NSString * _url; // +0x10
    NSString * _username; // +0x18
    NSString * _path; // +0x20
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

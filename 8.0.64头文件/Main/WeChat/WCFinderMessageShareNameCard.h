@interface WCFinderMessageShareNameCard : MMObject <NSCopying>
{
    NSString * _username; // +0x8
    NSString * _avatar; // +0x10
    NSString * _nickname; // +0x18
    NSString * _authJob; // +0x20
    NSString * _authIcon; // +0x28
    NSString * _authIconUrl; // +0x30
    NSString * _lastGMsgID; // +0x38
    NSString * _ecSource; // +0x40
    unsigned long long _contentType; // +0x48
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)isMemberShipFeed;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)authJob;
- (void)setAuthJob:(id)arg1;
- (id)authIcon;
- (void)setAuthIcon:(id)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

@interface BizAccountSelectResult : NSObject
{
    BizAccountSelectCallbackTypeBox * _type; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headImgUrl; // +0x18
    NSNumber * _identityType; // +0x20
    NSString * _identityName; // +0x28
    NSNumber * _authType; // +0x30
    NSString * _authProfession; // +0x38
    NSString * _linkKey; // +0x40
    NSString * _linkValue; // +0x48
    NSNumber * _serviceType; // +0x50
}
+ (id)makeWithType:(id)arg1 nickname:(id)arg2 headImgUrl:(id)arg3 identityType:(id)arg4 identityName:(id)arg5 authType:(id)arg6 authProfession:(id)arg7 linkKey:(id)arg8 linkValue:(id)arg9 serviceType:(id)arg10;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)identityType;
- (void)setIdentityType:(id)arg1;
- (id)identityName;
- (void)setIdentityName:(id)arg1;
- (id)authType;
- (void)setAuthType:(id)arg1;
- (id)authProfession;
- (void)setAuthProfession:(id)arg1;
- (id)linkKey;
- (void)setLinkKey:(id)arg1;
- (id)linkValue;
- (void)setLinkValue:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void).cxx_destruct;
@end

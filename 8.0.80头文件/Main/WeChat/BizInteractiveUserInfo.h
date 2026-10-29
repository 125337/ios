@interface BizInteractiveUserInfo : NSObject
{
    NSString * _headImgUrl; // +0x8
    NSString * _nickname; // +0x10
    NSString * _identityName; // +0x18
    NSNumber * _identityType; // +0x20
    NSNumber * _serviceType; // +0x28
    NSDictionary * _params; // +0x30
}
+ (id)makeWithHeadImgUrl:(id)arg1 nickname:(id)arg2 identityName:(id)arg3 identityType:(id)arg4 serviceType:(id)arg5 params:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)identityName;
- (void)setIdentityName:(id)arg1;
- (id)identityType;
- (void)setIdentityType:(id)arg1;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

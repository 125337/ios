@interface MMLimitedModeDataAgreenAuthorizationItemPB : MMObject <PBCoding>
{
    unsigned int _businessType; // +0x8
    unsigned int _agreenAuthorizationTime; // +0xc
    NSString * _businesskey; // +0x10
    NSString * _guardianUserName; // +0x18
    NSString * _wardUserName; // +0x20
    unsigned long long _requestAuthorizationMsgid; // +0x28
}
+ (void)PBArrayAdd_businesskey;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_guardianUserName;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_agreenAuthorizationTime;
+ (void)PBArrayAdd_requestAuthorizationMsgid;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)businesskey;
- (void)setBusinesskey:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)guardianUserName;
- (void)setGuardianUserName:(id)arg1;
- (id)wardUserName;
- (void)setWardUserName:(id)arg1;
- (unsigned int)agreenAuthorizationTime;
- (void)setAgreenAuthorizationTime:(unsigned int)arg1;
- (unsigned long long)requestAuthorizationMsgid;
- (void)setRequestAuthorizationMsgid:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

@interface MemUserAppidSig : NSObject <NSCoding>
{
    WloginUserInfo * userInfo; // +0x8
    MemAppidSigManager * userSigList; // +0x10
}
- (id)initWithBasicInfo:(unsigned int)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;
- (void)dealloc;
- (id)sigByAppid:(unsigned int)arg1 andSigName:(id)arg2;
- (void)removeSigByAppid:(unsigned int)arg1;
- (void)setSig:(id)arg1;
- (void)setPriority:(unsigned int)arg1 andTime:(unsigned int)arg2 byAppid:(unsigned int)arg3;
- (BOOL)hasExpireByAppid:(unsigned int)arg1 andAppExpTime:(unsigned int)arg2;
- (BOOL)hasExpireBySigType:(unsigned int)arg1 andAppid:(unsigned int)arg2;
- (void)setUserUin:(unsigned int)arg1;
- (unsigned int)userUin;
- (unsigned int)topPriorityAppid;
- (void)printUserAndSig;
- (BOOL)encodeUserPwdSig:(id)arg1 byKey:(id)arg2 outDataBuff:(id)arg3;
- (int)decodeUserPwdSigData:(id)arg1 andSigAppId:(unsigned int)arg2 byKey:(id)arg3 outPwdSig:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userInfo;
@end

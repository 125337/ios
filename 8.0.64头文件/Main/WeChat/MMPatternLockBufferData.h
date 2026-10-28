@interface MMPatternLockBufferData : NSObject <PBCoding>
{
    unsigned int _uin; // +0x8
    unsigned int _version; // +0xc
    unsigned int _lockStatus; // +0x10
    NSData * _svrPatternHash; // +0x18
    NSData * _sign; // +0x20
}
+ (void)PBArrayAdd_uin;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_svrPatternHash;
+ (void)PBArrayAdd_lockStatus;
+ (void)PBArrayAdd_sign;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)uin;
- (void)setUin:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)svrPatternHash;
- (void)setSvrPatternHash:(id)arg1;
- (unsigned int)lockStatus;
- (void)setLockStatus:(unsigned int)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (void).cxx_destruct;
@end

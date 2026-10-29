@interface WWKFDBContactInfo : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _lastUpdateTime; // +0x8
    unsigned int _kefuType; // +0xc
    NSString * _nickName; // +0x10
    NSString * _bigHeadImg; // +0x18
    NSString * _smallHeadImg; // +0x20
    NSString * _nickNamePyinit; // +0x28
    NSString * _nickNameQuanpin; // +0x30
    NSString * _ticket; // +0x38
}
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_bigHeadImg;
+ (void)PBArrayAdd_smallHeadImg;
+ (void)PBArrayAdd_nickNamePyinit;
+ (void)PBArrayAdd_nickNameQuanpin;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_kefuType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)bigHeadImg;
- (void)setBigHeadImg:(id)arg1;
- (id)smallHeadImg;
- (void)setSmallHeadImg:(id)arg1;
- (id)nickNamePyinit;
- (void)setNickNamePyinit:(id)arg1;
- (id)nickNameQuanpin;
- (void)setNickNameQuanpin:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)kefuType;
- (void)setKefuType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


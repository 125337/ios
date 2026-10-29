@interface WCOutRecentCallItem : MMObject <WCTTableCoding, NSCopying>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int localID; // +0xc
    unsigned int createTime; // +0x10
    unsigned int startTime; // +0x14
    unsigned int endTime; // +0x18
    unsigned int statusCode; // +0x1c
    unsigned int _dialScene; // +0x20
    unsigned int _countyrCodeType; // +0x24
    unsigned int _callFlag; // +0x28
    NSString * countryCode; // +0x30
    NSString * phoneNum; // +0x38
    long long lastInsertedRowID; // +0x40
    NSString * nickName; // +0x48
    NSString * phoneTag; // +0x50
    NSString * _checkCountryCode; // +0x58
    NSString * _inviteRespFullPhoneNum; // +0x60
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localID;
+ (const void *)countryCode;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_countryCode;
+ (const void *)phoneNum;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_phoneNum;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)statusCode;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_statusCode;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)copy;
- (void)CopyValueToCopy:(id)arg1;
- (id)statusWording;
- (id)fullPhoneNum;
- (id)fullPhoneNumInLog;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)phoneNum;
- (void)setPhoneNum:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)statusCode;
- (void)setStatusCode:(unsigned int)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)phoneTag;
- (void)setPhoneTag:(id)arg1;
- (id)checkCountryCode;
- (void)setCheckCountryCode:(id)arg1;
- (id)inviteRespFullPhoneNum;
- (void)setInviteRespFullPhoneNum:(id)arg1;
- (unsigned int)dialScene;
- (void)setDialScene:(unsigned int)arg1;
- (unsigned int)countyrCodeType;
- (void)setCountyrCodeType:(unsigned int)arg1;
- (unsigned int)callFlag;
- (void)setCallFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end


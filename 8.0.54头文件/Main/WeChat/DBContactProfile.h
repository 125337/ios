@interface DBContactProfile : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _sex; // +0x8
    NSString * _country; // +0x10
    NSString * _province; // +0x18
    NSString * _city; // +0x20
    NSString * _signature; // +0x28
    NSString * _patSuffix; // +0x30
    NSString * _textStatusID; // +0x38
    NSString * _textStatusExtInfo; // +0x40
}
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_patSuffix;
+ (void)PBArrayAdd_textStatusID;
+ (void)PBArrayAdd_textStatusExtInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)patSuffix;
- (void)setPatSuffix:(id)arg1;
- (id)textStatusID;
- (void)setTextStatusID:(id)arg1;
- (id)textStatusExtInfo;
- (void)setTextStatusExtInfo:(id)arg1;
- (void).cxx_destruct;
@end


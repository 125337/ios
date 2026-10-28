@interface WCFinderContactExtInfo : NSObject <WCTColumnCoding, PBCoding>
{
    int _sexType; // +0x8
    NSString * _country; // +0x10
    NSString * _province; // +0x18
    NSString * _city; // +0x20
    unsigned long long _birthYear; // +0x28
    unsigned long long _birthMonth; // +0x30
    unsigned long long _birthDay; // +0x38
}
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_sexType;
+ (void)PBArrayAdd_birthYear;
+ (void)PBArrayAdd_birthMonth;
+ (void)PBArrayAdd_birthDay;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)infoWithFinderExtInfo:(id)arg1;
+ (id)infoWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 sex:(int)arg4;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderExtInfo:(id)arg1;
- (id)initWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 sex:(int)arg4;
- (id)convertToFinderContactExtInfo;
- (id)description;
- (id)debugDescription;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (int)sexType;
- (void)setSexType:(int)arg1;
- (unsigned long long)birthYear;
- (void)setBirthYear:(unsigned long long)arg1;
- (unsigned long long)birthMonth;
- (void)setBirthMonth:(unsigned long long)arg1;
- (unsigned long long)birthDay;
- (void)setBirthDay:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

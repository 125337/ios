@interface WADBContactPack : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _uiLastUpdateAppVersionInfoTime; // +0x8
    unsigned int _uiLastLaunchAppTime; // +0xc
    NSString * _aliasName; // +0x10
    NSString * _nickName; // +0x18
    NSString * _fullPinYin; // +0x20
    NSString * _headHDImageURL; // +0x28
    NSString * _headImageURL; // +0x30
    NSString * _signature; // +0x38
}
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_fullPinYin;
+ (void)PBArrayAdd_headHDImageURL;
+ (void)PBArrayAdd_headImageURL;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_uiLastUpdateAppVersionInfoTime;
+ (void)PBArrayAdd_uiLastLaunchAppTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)aliasName;
- (void)setAliasName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)fullPinYin;
- (void)setFullPinYin:(id)arg1;
- (id)headHDImageURL;
- (void)setHeadHDImageURL:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (unsigned int)uiLastUpdateAppVersionInfoTime;
- (void)setUiLastUpdateAppVersionInfoTime:(unsigned int)arg1;
- (unsigned int)uiLastLaunchAppTime;
- (void)setUiLastLaunchAppTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

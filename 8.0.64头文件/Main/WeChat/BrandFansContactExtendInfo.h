@interface BrandFansContactExtendInfo : NSObject <WCTColumnCoding, PBCoding>
{
    BOOL _inBlackList; // +0x8
    unsigned int _sex; // +0xc
    NSString * _country; // +0x10
    NSString * _province; // +0x18
    NSString * _city; // +0x20
    NSString * _signature; // +0x28
    NSString * _renderMPAppURL; // +0x30
    NSData * _interactiveInfo; // +0x38
}
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_renderMPAppURL;
+ (void)PBArrayAdd_inBlackList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithUserInfo:(id)arg1;
- (id)contactDescription;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)renderMPAppURL;
- (void)setRenderMPAppURL:(id)arg1;
- (BOOL)inBlackList;
- (void)setInBlackList:(BOOL)arg1;
- (id)interactiveInfo;
- (void)setInteractiveInfo:(id)arg1;
- (void).cxx_destruct;
@end

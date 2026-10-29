@interface UserInfoForReport : NSObject
{
    unsigned int _sex; // +0x8
    unsigned int _distance; // +0xc
    unsigned int _hasAlbumFlag; // +0x10
    unsigned int _hasSignature; // +0x14
    unsigned int _nickNameHasEmoji; // +0x18
    unsigned int _hasFinderFlag; // +0x1c
    NSString * _country; // +0x20
    NSString * _district; // +0x28
    NSString * _city; // +0x30
    NSString * _userName; // +0x38
}
+ (id)genFromLBSContactInfo:(id)arg1;
+ (id)genFromCContact:(id)arg1;
+ (unsigned int)parseDistanceStr:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (unsigned int)hasAlbumFlag;
- (void)setHasAlbumFlag:(unsigned int)arg1;
- (unsigned int)hasSignature;
- (void)setHasSignature:(unsigned int)arg1;
- (unsigned int)nickNameHasEmoji;
- (void)setNickNameHasEmoji:(unsigned int)arg1;
- (unsigned int)hasFinderFlag;
- (void)setHasFinderFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end


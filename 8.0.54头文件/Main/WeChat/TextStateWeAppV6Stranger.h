@interface TextStateWeAppV6Stranger : NSObject
{
    BOOL _snsFlag; // +0x8
    int _sex; // +0xc
    NSString * _encUsername; // +0x10
    NSString * _nickname; // +0x18
    NSString * _country; // +0x20
    NSString * _province; // +0x28
    NSString * _city; // +0x30
    NSString * _signature; // +0x38
    NSString * _bigHeadImgUrl; // +0x40
    NSString * _smallHeadImgUrl; // +0x48
    NSString * _textStatusId; // +0x50
    StatusExtInfo * _textStatusExtInfo; // +0x58
    NSString * _hashUsername; // +0x60
}
- (id)generateContact;
- (id)encUsername;
- (void)setEncUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (int)sex;
- (void)setSex:(int)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)bigHeadImgUrl;
- (void)setBigHeadImgUrl:(id)arg1;
- (id)smallHeadImgUrl;
- (void)setSmallHeadImgUrl:(id)arg1;
- (id)textStatusId;
- (void)setTextStatusId:(id)arg1;
- (id)textStatusExtInfo;
- (void)setTextStatusExtInfo:(id)arg1;
- (BOOL)snsFlag;
- (void)setSnsFlag:(BOOL)arg1;
- (id)hashUsername;
- (void)setHashUsername:(id)arg1;
- (void).cxx_destruct;
@end


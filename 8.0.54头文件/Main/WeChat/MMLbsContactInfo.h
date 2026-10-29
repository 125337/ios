@interface MMLbsContactInfo : NSObject
{
    NSString * UserName; // +0x8
    NSString * NickName; // +0x10
    NSString * Country; // +0x18
    NSString * Province; // +0x20
    NSString * City; // +0x28
    NSString * Signature; // +0x30
    NSString * Distance; // +0x38
    int Sex; // +0x40
    unsigned int ImgStatus; // +0x44
    unsigned int CertificationFlag; // +0x48
    NSString * CertificationInfo; // +0x50
    NSString * m_nsAlias; // +0x58
    NSString * m_nsWCBGImgObjectID; // +0x60
    long long m_iAlbumFlag; // +0x68
    NSString * m_pcAlbumBGImgID; // +0x70
    NSString * m_nsExternalInfo; // +0x78
    NSString * m_nsBrandSubscriptConfigUrl; // +0x80
    unsigned int m_uiBrandSubscriptionSettings; // +0x88
    NSString * m_nsBrandIconUrl; // +0x90
    NSString * m_nsHeadImgUrl; // +0x98
    NSString * m_nsHeadHDImgUrl; // +0xa0
    BOOL m_isFriend; // +0xa8
    NSString * m_displayName; // +0xb0
    NSString * m_nsAntispamTicket; // +0xb8
    unsigned int _finderFlag; // +0xc0
}
- (id)init;
- (id)initWithPBLbsContactInfo:(id)arg1;
- (id)keyPaths;
- (id)description;
- (BOOL)isInMyContactList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)distance;
- (void)setDistance:(id)arg1;
- (int)sex;
- (void)setSex:(int)arg1;
- (unsigned int)imgStatus;
- (void)setImgStatus:(unsigned int)arg1;
- (unsigned int)CertificationFlag;
- (void)setCertificationFlag:(unsigned int)arg1;
- (id)CertificationInfo;
- (void)setCertificationInfo:(id)arg1;
- (id)m_nsAlias;
- (void)setM_nsAlias:(id)arg1;
- (id)m_nsWCBGImgObjectID;
- (void)setM_nsWCBGImgObjectID:(id)arg1;
- (long long)m_iAlbumFlag;
- (void)setM_iAlbumFlag:(long long)arg1;
- (id)m_pcAlbumBGImgID;
- (void)setM_pcAlbumBGImgID:(id)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (id)m_nsExternalInfo;
- (void)setM_nsExternalInfo:(id)arg1;
- (id)m_nsBrandSubscriptConfigUrl;
- (void)setM_nsBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)m_uiBrandSubscriptionSettings;
- (void)setM_uiBrandSubscriptionSettings:(unsigned int)arg1;
- (id)m_nsBrandIconUrl;
- (void)setM_nsBrandIconUrl:(id)arg1;
- (BOOL)m_isFriend;
- (void)setM_isFriend:(BOOL)arg1;
- (id)m_displayName;
- (void)setM_displayName:(id)arg1;
- (id)m_nsAntispamTicket;
- (void)setM_nsAntispamTicket:(id)arg1;
- (unsigned int)finderFlag;
- (void)setFinderFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end


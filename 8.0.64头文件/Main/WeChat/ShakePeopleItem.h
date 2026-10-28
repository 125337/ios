@interface ShakePeopleItem : NSObject <PBCoding, NSCoding>
{
    unsigned int _m_uiSex; // +0x8
    unsigned int _m_uiScene; // +0xc
    unsigned int _m_uiVerifyFlag; // +0x10
    int _m_iAlbumFlag; // +0x14
    unsigned int _m_uiBrandSubscriptionSettings; // +0x18
    unsigned int _m_createTime; // +0x1c
    NSString * _m_nsUserName; // +0x20
    NSString * _m_nsNickName; // +0x28
    NSString * _m_nsCountry; // +0x30
    NSString * _m_nsProvince; // +0x38
    NSString * _m_nsCity; // +0x40
    NSString * _m_nsDistance; // +0x48
    NSString * _m_nsSignature; // +0x50
    NSString * _m_nsVerifyInfo; // +0x58
    NSString * _m_nsVerifyContent; // +0x60
    NSString * _m_nsWCBGImgObjectID; // +0x68
    NSString * _m_pcAlbumBGImgID; // +0x70
    NSString * _m_nsExternalInfo; // +0x78
    NSString * _m_nsBrandSubscriptConfigUrl; // +0x80
    NSString * _m_nsBrandIconUrl; // +0x88
    NSString * _m_headImgUrl; // +0x90
    NSString * _m_nsHeadHDImgUrl; // +0x98
    NSString * _m_nsAntispamTicket; // +0xa0
}
+ (void)PBArrayAdd_m_nsUserName;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_uiSex;
+ (void)PBArrayAdd_m_nsDistance;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_uiScene;
+ (void)PBArrayAdd_m_uiVerifyFlag;
+ (void)PBArrayAdd_m_nsVerifyInfo;
+ (void)PBArrayAdd_m_nsVerifyContent;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_iAlbumFlag;
+ (void)PBArrayAdd_m_pcAlbumBGImgID;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandIconUrl;
+ (void)PBArrayAdd_m_createTime;
+ (void)PBArrayAdd_m_headImgUrl;
+ (void)PBArrayAdd_m_nsHeadHDImgUrl;
+ (void)PBArrayAdd_m_nsAntispamTicket;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)setM_nsNickName:(id)arg1;
- (void)setM_nsSignature:(id)arg1;
- (void)preInit;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsNickName;
- (id)m_nsCountry;
- (void)setM_nsCountry:(id)arg1;
- (id)m_nsProvince;
- (void)setM_nsProvince:(id)arg1;
- (id)m_nsCity;
- (void)setM_nsCity:(id)arg1;
- (unsigned int)m_uiSex;
- (void)setM_uiSex:(unsigned int)arg1;
- (id)m_nsDistance;
- (void)setM_nsDistance:(id)arg1;
- (id)m_nsSignature;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (unsigned int)m_uiVerifyFlag;
- (void)setM_uiVerifyFlag:(unsigned int)arg1;
- (id)m_nsVerifyInfo;
- (void)setM_nsVerifyInfo:(id)arg1;
- (id)m_nsVerifyContent;
- (void)setM_nsVerifyContent:(id)arg1;
- (id)m_nsWCBGImgObjectID;
- (void)setM_nsWCBGImgObjectID:(id)arg1;
- (int)m_iAlbumFlag;
- (void)setM_iAlbumFlag:(int)arg1;
- (id)m_pcAlbumBGImgID;
- (void)setM_pcAlbumBGImgID:(id)arg1;
- (id)m_nsExternalInfo;
- (void)setM_nsExternalInfo:(id)arg1;
- (id)m_nsBrandSubscriptConfigUrl;
- (void)setM_nsBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)m_uiBrandSubscriptionSettings;
- (void)setM_uiBrandSubscriptionSettings:(unsigned int)arg1;
- (id)m_nsBrandIconUrl;
- (void)setM_nsBrandIconUrl:(id)arg1;
- (unsigned int)m_createTime;
- (void)setM_createTime:(unsigned int)arg1;
- (id)m_headImgUrl;
- (void)setM_headImgUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (id)m_nsAntispamTicket;
- (void)setM_nsAntispamTicket:(id)arg1;
- (void).cxx_destruct;
@end

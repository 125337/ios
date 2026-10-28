@interface PBCContact : NSObject <PBCoding>
{
    unsigned int _chatRoomStatus; // +0x8
    unsigned int _certificationFlag; // +0xc
    unsigned int _needUpdate; // +0x10
    unsigned int _wcflag; // +0x14
    unsigned int _brandSubscriptionSettings; // +0x18
    unsigned int _isShowRedDot; // +0x1c
    unsigned int _chatRoomDetailStatus; // +0x20
    unsigned int _m_uiDeleteFlag; // +0x24
    PBBaseContact * _baseContact; // +0x28
    NSString * _chatRoomMemList; // +0x30
    NSString * _chatRoomData; // +0x38
    NSString * _country; // +0x40
    NSString * _province; // +0x48
    NSString * _city; // +0x50
    NSString * _signature; // +0x58
    NSString * _certificationInfo; // +0x60
    NSString * _owner; // +0x68
    NSString * _fbnickName; // +0x70
    NSString * _fbid; // +0x78
    NSString * _wcbgimgObjectId; // +0x80
    NSString * _wcbgimgId; // +0x88
    NSString * _externalInfo; // +0x90
    NSString * _brandSubscriptConfigUrl; // +0x98
    NSString * _brandIconUrl; // +0xa0
    NSString * _openIMAppid; // +0xa8
    NSString * _openIMDescId; // +0xb0
    NSString * _m_textStatusID; // +0xb8
    NSString * _m_textStatusExtInfo; // +0xc0
}
+ (void)PBArrayAdd_baseContact;
+ (void)PBArrayAdd_chatRoomMemList;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_certificationFlag;
+ (void)PBArrayAdd_certificationInfo;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_fbnickName;
+ (void)PBArrayAdd_fbid;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_wcbgimgObjectId;
+ (void)PBArrayAdd_wcflag;
+ (void)PBArrayAdd_wcbgimgId;
+ (void)PBArrayAdd_externalInfo;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_isShowRedDot;
+ (void)PBArrayAdd_openIMAppid;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_chatRoomDetailStatus;
+ (void)PBArrayAdd_m_textStatusID;
+ (void)PBArrayAdd_m_textStatusExtInfo;
+ (void)PBArrayAdd_m_uiDeleteFlag;
+ (void)initialize;
- (id)toCContact;
- (void)setFromCContact:(id)arg1;
- (id)getPBPropertyTable;
- (id)baseContact;
- (void)setBaseContact:(id)arg1;
- (id)chatRoomMemList;
- (void)setChatRoomMemList:(id)arg1;
- (unsigned int)chatRoomStatus;
- (void)setChatRoomStatus:(unsigned int)arg1;
- (id)chatRoomData;
- (void)setChatRoomData:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (unsigned int)certificationFlag;
- (void)setCertificationFlag:(unsigned int)arg1;
- (id)certificationInfo;
- (void)setCertificationInfo:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)fbnickName;
- (void)setFbnickName:(id)arg1;
- (id)fbid;
- (void)setFbid:(id)arg1;
- (unsigned int)needUpdate;
- (void)setNeedUpdate:(unsigned int)arg1;
- (id)wcbgimgObjectId;
- (void)setWcbgimgObjectId:(id)arg1;
- (unsigned int)wcflag;
- (void)setWcflag:(unsigned int)arg1;
- (id)wcbgimgId;
- (void)setWcbgimgId:(id)arg1;
- (id)externalInfo;
- (void)setExternalInfo:(id)arg1;
- (id)brandSubscriptConfigUrl;
- (void)setBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)brandSubscriptionSettings;
- (void)setBrandSubscriptionSettings:(unsigned int)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (unsigned int)isShowRedDot;
- (void)setIsShowRedDot:(unsigned int)arg1;
- (id)openIMAppid;
- (void)setOpenIMAppid:(id)arg1;
- (id)openIMDescId;
- (void)setOpenIMDescId:(id)arg1;
- (unsigned int)chatRoomDetailStatus;
- (void)setChatRoomDetailStatus:(unsigned int)arg1;
- (id)m_textStatusID;
- (void)setM_textStatusID:(id)arg1;
- (id)m_textStatusExtInfo;
- (void)setM_textStatusExtInfo:(id)arg1;
- (unsigned int)m_uiDeleteFlag;
- (void)setM_uiDeleteFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

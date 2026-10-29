@interface AddressBookFriend : NSObject
{
    MMAddressBook * m_addressBook; // +0x8
    NSString * m_username; // +0x10
    NSString * m_aliasname; // +0x18
    NSString * m_nickname; // +0x20
    BOOL m_isInMyContactList; // +0x28
    unsigned int m_uiSex; // +0x2c
    NSString * m_nsCountry; // +0x30
    NSString * m_nsProvince; // +0x38
    NSString * m_nsCity; // +0x40
    NSString * m_nsSignature; // +0x48
    NSString * m_nsWCBGImgObjectID; // +0x50
    int m_iWCFlag; // +0x58
    NSString * m_pcWCBGImgID; // +0x60
    NSString * m_nsExternalInfo; // +0x68
    NSString * m_nsBrandSubscriptConfigUrl; // +0x70
    unsigned int m_uiBrandSubscriptionSettings; // +0x78
    NSString * m_nsBrandIconUrl; // +0x80
    NSString * m_nsHeadImgUrl; // +0x88
    NSString * m_nsHeadHDImgUrl; // +0x90
    NSString * m_nsAntispamTicket; // +0x98
    BOOL _bWaitForVerify; // +0xa0
}
- (id)init;
- (void)dealloc;
- (long long)compare:(id)arg1;
- (long long)compareMobileFriendAscending:(id)arg1;
- (BOOL)copyPatialFieldFromAddressBookFriend:(id)arg1;
- (void)updateContact:(id)arg1;
- (id)m_addressBook;
- (void)setM_addressBook:(id)arg1;
- (id)m_username;
- (void)setM_username:(id)arg1;
- (id)m_aliasname;
- (void)setM_aliasname:(id)arg1;
- (id)m_nickname;
- (void)setM_nickname:(id)arg1;
- (BOOL)m_isInMyContactList;
- (void)setM_isInMyContactList:(BOOL)arg1;
- (unsigned int)m_uiSex;
- (void)setM_uiSex:(unsigned int)arg1;
- (id)m_nsCountry;
- (void)setM_nsCountry:(id)arg1;
- (id)m_nsProvince;
- (void)setM_nsProvince:(id)arg1;
- (id)m_nsCity;
- (void)setM_nsCity:(id)arg1;
- (id)m_nsSignature;
- (void)setM_nsSignature:(id)arg1;
- (id)m_nsWCBGImgObjectID;
- (void)setM_nsWCBGImgObjectID:(id)arg1;
- (int)m_iWCFlag;
- (void)setM_iWCFlag:(int)arg1;
- (id)m_pcWCBGImgID;
- (void)setM_pcWCBGImgID:(id)arg1;
- (id)m_nsExternalInfo;
- (void)setM_nsExternalInfo:(id)arg1;
- (id)m_nsBrandSubscriptConfigUrl;
- (void)setM_nsBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)m_uiBrandSubscriptionSettings;
- (void)setM_uiBrandSubscriptionSettings:(unsigned int)arg1;
- (id)m_nsBrandIconUrl;
- (void)setM_nsBrandIconUrl:(id)arg1;
- (id)m_nsHeadImgUrl;
- (void)setM_nsHeadImgUrl:(id)arg1;
- (id)m_nsHeadHDImgUrl;
- (void)setM_nsHeadHDImgUrl:(id)arg1;
- (id)m_nsAntispamTicket;
- (void)setM_nsAntispamTicket:(id)arg1;
- (BOOL)bWaitForVerify;
- (void)setBWaitForVerify:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WCPayVirtualNoBindCard : NSObject
{
    unsigned int m_uiCardID; // +0x8
    NSString * m_nsBankType; // +0x10
    NSString * m_nsBankName; // +0x18
    unsigned int m_uiCardStatus; // +0x20
    NSString * m_nsLogoUrl; // +0x28
    NSString * m_nsBigLogoUrl; // +0x30
    NSString * m_nsBackgroundLogoUrl; // +0x38
    unsigned int m_uiCardType; // +0x40
    NSArray * m_aryEducationList; // +0x48
    NSString * m_branderUserName; // +0x50
    NSString * m_branderNickName; // +0x58
}
- (unsigned int)m_uiCardID;
- (void)setM_uiCardID:(unsigned int)arg1;
- (id)m_nsBankName;
- (void)setM_nsBankName:(id)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (unsigned int)m_uiCardStatus;
- (void)setM_uiCardStatus:(unsigned int)arg1;
- (id)m_nsLogoUrl;
- (void)setM_nsLogoUrl:(id)arg1;
- (id)m_nsBigLogoUrl;
- (void)setM_nsBigLogoUrl:(id)arg1;
- (id)m_nsBackgroundLogoUrl;
- (void)setM_nsBackgroundLogoUrl:(id)arg1;
- (unsigned int)m_uiCardType;
- (void)setM_uiCardType:(unsigned int)arg1;
- (id)m_aryEducationList;
- (void)setM_aryEducationList:(id)arg1;
- (id)m_branderUserName;
- (void)setM_branderUserName:(id)arg1;
- (id)m_branderNickName;
- (void)setM_branderNickName:(id)arg1;
- (void).cxx_destruct;
@end


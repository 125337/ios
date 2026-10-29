@interface CPushContact : CContact
{
    NSString * m_nsSource; // +0x378
    BOOL m_bReaded; // +0x380
    unsigned int m_uiPushTime; // +0x384
    NSString * m_nsDes; // +0x388
    NSString * m_nsTicket; // +0x390
    CMessageWrap * m_oMessage; // +0x398
    unsigned int m_uiOpCode; // +0x3a0
    unsigned int m_uiStatus; // +0x3a4
    BOOL m_bSuspiciousUser; // +0x3a8
    BOOL _m_bHadMMContactDelete; // +0x3a9
    unsigned int m_uiOpenimVerifyStatus; // +0x3ac
    NSString * m_nsChatRoomUserName; // +0x3b0
    NSString * m_nsSourceUserName; // +0x3b8
    NSString * m_nsSourceNickName; // +0x3c0
    NSString * m_nsShareCardUserName; // +0x3c8
    NSString * m_nsShareCardNickName; // +0x3d0
    NSString * m_safetyWarning; // +0x3d8
    NSString * m_safetyWarningDetail; // +0x3e0
    NSString * _m_nsInitialDes; // +0x3e8
    CardImgItemInfo * _businessCardItemFromMessage; // +0x3f0
}
+ (id)thread_GetContactDetailFromMsg:(id)arg1;
- (id)init;
- (BOOL)genPushContactFromMsgWrap:(id)arg1;
- (BOOL)shouldAttachBusinessCardItemForVerify;
- (id)xmlForMessageWrapContent:(id)arg1 OpCode:(unsigned int)arg2;
- (long long)comparePushContactAscending:(id)arg1;
- (id)initWithMsgWrap:(id)arg1;
- (BOOL)IsShake;
- (BOOL)isMsgSendFromMe;
- (BOOL)isVerifyRequestFromMe;
- (BOOL)isWaitingForVerify;
- (BOOL)isAddRequestContact;
- (void)getPushContactSource;
- (void)getPushContactDes;
- (BOOL)isExpire;
- (id)description;
- (long long)compare:(id)arg1;
- (id)toContact;
- (BOOL)copyFieldFromContact:(id)arg1;
- (BOOL)isMobilePush;
- (id)m_nsSource;
- (void)setM_nsSource:(id)arg1;
- (BOOL)m_bReaded;
- (void)setM_bReaded:(BOOL)arg1;
- (unsigned int)m_uiPushTime;
- (void)setM_uiPushTime:(unsigned int)arg1;
- (id)m_nsDes;
- (void)setM_nsDes:(id)arg1;
- (id)m_nsTicket;
- (void)setM_nsTicket:(id)arg1;
- (id)m_oMessage;
- (void)setM_oMessage:(id)arg1;
- (unsigned int)m_uiOpCode;
- (void)setM_uiOpCode:(unsigned int)arg1;
- (unsigned int)m_uiStatus;
- (void)setM_uiStatus:(unsigned int)arg1;
- (id)m_nsChatRoomUserName;
- (void)setM_nsChatRoomUserName:(id)arg1;
- (id)m_nsSourceUserName;
- (void)setM_nsSourceUserName:(id)arg1;
- (id)m_nsSourceNickName;
- (void)setM_nsSourceNickName:(id)arg1;
- (id)m_nsShareCardUserName;
- (void)setM_nsShareCardUserName:(id)arg1;
- (id)m_nsShareCardNickName;
- (void)setM_nsShareCardNickName:(id)arg1;
- (unsigned int)m_uiOpenimVerifyStatus;
- (void)setM_uiOpenimVerifyStatus:(unsigned int)arg1;
- (BOOL)m_bSuspiciousUser;
- (void)setM_bSuspiciousUser:(BOOL)arg1;
- (id)m_safetyWarning;
- (void)setM_safetyWarning:(id)arg1;
- (id)m_safetyWarningDetail;
- (void)setM_safetyWarningDetail:(id)arg1;
- (id)m_nsInitialDes;
- (void)setM_nsInitialDes:(id)arg1;
- (BOOL)m_bHadMMContactDelete;
- (void)setM_bHadMMContactDelete:(BOOL)arg1;
- (id)businessCardItemFromMessage;
- (void)setBusinessCardItemFromMessage:(id)arg1;
- (void).cxx_destruct;
@end

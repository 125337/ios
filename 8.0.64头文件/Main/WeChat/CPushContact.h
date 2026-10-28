@interface CPushContact : CContact
{
    NSString * m_nsSource; // +0x348
    BOOL m_bReaded; // +0x350
    unsigned int m_uiPushTime; // +0x354
    NSString * m_nsDes; // +0x358
    NSString * m_nsTicket; // +0x360
    CMessageWrap * m_oMessage; // +0x368
    unsigned int m_uiOpCode; // +0x370
    unsigned int m_uiStatus; // +0x374
    BOOL m_bSuspiciousUser; // +0x378
    BOOL _m_bHadMMContactDelete; // +0x379
    unsigned int m_uiOpenimVerifyStatus; // +0x37c
    NSString * m_nsChatRoomUserName; // +0x380
    NSString * m_nsSourceUserName; // +0x388
    NSString * m_nsSourceNickName; // +0x390
    NSString * m_nsShareCardUserName; // +0x398
    NSString * m_nsShareCardNickName; // +0x3a0
    NSString * m_safetyWarning; // +0x3a8
    NSString * m_safetyWarningDetail; // +0x3b0
}
+ (id)thread_GetContactDetailFromMsg:(id)arg1;
- (id)init;
- (BOOL)genPushContactFromMsgWrap:(id)arg1;
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
- (BOOL)m_bHadMMContactDelete;
- (void)setM_bHadMMContactDelete:(BOOL)arg1;
- (void).cxx_destruct;
@end

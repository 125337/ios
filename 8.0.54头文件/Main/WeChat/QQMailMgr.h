@interface QQMailMgr : MMUserService <IMsgExt, IUpdateProfileMgrExt, MMServiceProtocol, IQQMailExt>
{
    BOOL m_bSyncingContact; // +0x8
    unsigned int m_uiSyncCount; // +0xc
    NSMutableDictionary * m_dicCookie; // +0x10
    int mailUnreadCount; // +0x18
    XMailSearchMailAddrLogic * _searchMailAddrLogic; // +0x20
    XMailUploadAttachmentLogic * _uploadAttachMentLogic; // +0x28
}
+ (BOOL)canBindXmail;
+ (BOOL)isXmailVerified;
- (void)DeleteMailByMailId:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)init;
- (void)changeBindXmailAddr:(id)arg1;
- (id)GetCookie;
- (id)GetCookieString;
- (void)SyncContact;
- (void)ResetSyncCount;
- (id)GetAllMailContact;
- (id)GetMail:(id)arg1;
- (void)SyncMailUnreadCount;
- (void)SetMailUnread:(id)arg1;
- (void)uploadAttachmentWithData:(id)arg1 fileName:(id)arg2;
- (void)uploadAttachmentWithFilePath:(id)arg1 fileName:(id)arg2;
- (id)composeSend:(id)arg1 sendtype:(unsigned int)arg2 mailid:(id)arg3;
- (void)handleMailUnreadCount:(int)arg1;
- (int)getMailUnreadCount;
- (void)asyncSearchMailAddrWithInput:(id)arg1;
- (void)clearMailPluginMsgIfNeeded;
- (void)onProfileChange;
- (id)m_dicCookie;
- (void)setM_dicCookie:(id)arg1;
- (id)searchMailAddrLogic;
- (void)setSearchMailAddrLogic:(id)arg1;
- (id)uploadAttachMentLogic;
- (void)setUploadAttachMentLogic:(id)arg1;
- (void).cxx_destruct;
@end


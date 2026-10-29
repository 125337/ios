@interface ChatBotUploadCDNMgr : NSObject <ICdnComMgrExt>
{
    id <ChatBotUploadCDNMgrDelegate> _m_delegate; // +0x8
    ChatBotTaskInfo * _curTaskInfo; // +0x10
}
- (id)init;
- (void)startUploadChatBotAttach:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)curTaskInfo;
- (void)setCurTaskInfo:(id)arg1;
- (void).cxx_destruct;
@end

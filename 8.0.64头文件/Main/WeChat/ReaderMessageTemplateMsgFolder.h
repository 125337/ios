@interface ReaderMessageTemplateMsgFolder : CMessageWrap
{
    unsigned int _earliestCreateTime; // +0xe4
    unsigned int _earliestMsgLocalID; // +0xe8
    unsigned int _foldCount; // +0xec
    CMessageWrap * _messageWrap; // +0xf0
    ReaderMessageTemplateMsgFolderViewModel * _folderViewModel; // +0xf8
    NSArray * _foldMsgTitles; // +0x100
    NSString * _clusterId; // +0x108
}
- (unsigned int)m_uiMesLocalID;
- (id)m_nsFromUsr;
- (id)m_nsRealChatUsr;
- (unsigned int)m_uiCreateTime;
- (id)m_nsTemplateId;
- (unsigned int)m_uiTemplateType;
- (unsigned int)m_subscrMsgScopeType;
- (unsigned int)templateOpType;
- (BOOL)IsSameMsg:(id)arg1;
- (unsigned int)earliestCreateTime;
- (void)setEarliestCreateTime:(unsigned int)arg1;
- (unsigned int)earliestMsgLocalID;
- (void)setEarliestMsgLocalID:(unsigned int)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)folderViewModel;
- (void)setFolderViewModel:(id)arg1;
- (unsigned int)foldCount;
- (void)setFoldCount:(unsigned int)arg1;
- (id)foldMsgTitles;
- (void)setFoldMsgTitles:(id)arg1;
- (id)clusterId;
- (void)setClusterId:(id)arg1;
- (void).cxx_destruct;
@end

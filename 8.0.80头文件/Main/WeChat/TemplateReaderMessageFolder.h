@interface TemplateReaderMessageFolder : CMessageWrap
{
    NSMutableArray * _messageWrapList; // +0xf0
    TemplateReaderMessageFolderViewModel * _folderViewModel; // +0xf8
    ChatTimeViewModel * _timeViewModel; // +0x100
    ChatTimeNodeRightButtonInfo * _rightButtonInfo; // +0x108
}
- (id)initWithMsgType:(long long)arg1;
- (unsigned int)m_uiMesLocalID;
- (id)m_nsFromUsr;
- (id)m_nsRealChatUsr;
- (unsigned int)m_uiCreateTime;
- (id)m_nsTemplateId;
- (unsigned int)m_uiTemplateType;
- (unsigned int)m_subscrMsgScopeType;
- (unsigned int)templateOpType;
- (BOOL)IsSameMsg:(id)arg1;
- (id)messageWrapList;
- (void)setMessageWrapList:(id)arg1;
- (id)folderViewModel;
- (void)setFolderViewModel:(id)arg1;
- (id)timeViewModel;
- (void)setTimeViewModel:(id)arg1;
- (id)rightButtonInfo;
- (void)setRightButtonInfo:(id)arg1;
- (void).cxx_destruct;
@end

@interface ChatRoomStillNotificationMsgViewController : ChatRoomBaseMemberFunctionViewController <ChatRoomSpecialAttentionMemberPageLogicDelegate>
{
    NSMutableArray * m_attentionMemberContactList; // +0x70
    NSMutableArray * m_chatRoomMemContactList; // +0x78
    ChatRoomSpecialAttentionAddMemberLogic * m_addMemberSelectContactLogic; // +0x80
    ChatRoomSpecialAttentionDeleteMemberLogic * m_deleteMemberSelectContactLogic; // +0x88
    MMTableView * m_tableView; // +0x90
    NSMutableArray * m_initialAttentionMemberUserNameList; // +0x98
    NSMutableArray * m_chatRoomMemContactUserNameList; // +0xa0
    BOOL m_isAtMeNotificationMsg; // +0xa8
    BOOL m_isAtAllNotificationMsg; // +0xa9
    BOOL m_isGroupNoticeNotificationMsg; // +0xaa
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0xb0
    BOOL _isOnlyShowSpecialAttentionMember; // +0xb8
    MMTableViewInfo * m_tableViewInfo; // +0xc0
    CContact * _chatRoomContact; // +0xc8
    NSString * _reportSessionId; // +0xd0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initData;
- (id)getAddMemberSelectContactLogic;
- (id)getDeleteMemberSelectContactLogic;
- (void)reloadData;
- (id)getChatRoomContact;
- (unsigned int)getNeedPushFlag;
- (double)getCellMargin;
- (double)getCellTitleLeftMargin;
- (double)getCellAddImageViewLeftMargin;
- (double)getAddImageSizeLength;
- (double)getCellRemoveButtonRightMargin;
- (void)commitAllSwitchSetting;
- (void)reloadTableData;
- (void)setAtMeNotificationMsg:(id)arg1;
- (void)setAtAllNotificationMsg:(id)arg1;
- (void)setGroupNoticeNotificationMsg:(id)arg1;
- (void)didFunctionAddMember;
- (void)modifySpecialAttentionMember;
- (void)didRemoveOperateButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 isAddMember:(BOOL)arg3;
- (void)reportClickAddFollowMember:(id)arg1;
- (void)reportClickOpereateFollowMember:(id)arg1 isAdd:(BOOL)arg2;
- (void)reportGroupSettingSwitchUpdate:(BOOL)arg1 groupSettingSwtichType:(unsigned int)arg2;
- (id)getReportParams;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (BOOL)isOnlyShowSpecialAttentionMember;
- (void)setIsOnlyShowSpecialAttentionMember:(BOOL)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end

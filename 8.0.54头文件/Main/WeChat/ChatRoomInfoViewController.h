@interface ChatRoomInfoViewController : MMUIViewController <MsgSearchHelperDelegate, MMNewTipsMgrExt, WCFinderClubExt, ILinkEventExt, MMTableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, IGroupMgrExt, WCActionSheetDelegate, IAutoSetRemarkExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChatRoomManagementDelegate, IntelligentMsgBrowseResultCommonDelegate>
{
    CContact * m_chatRoomContact; // +0x68
    NSArray * m_arrMemberList; // +0x70
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // +0x78
    UIButton * m_muteButton; // +0x80
    UIView * m_titleView; // +0x88
    BOOL m_bDeleteStatus; // +0x90
    BOOL m_isChatStatusNotifyOpen; // +0x91
    MMTableViewInfo * m_tableViewInfo; // +0x98
    AddMemLogic * m_addMemLogic; // +0xa0
    ViewMemLogic * m_viewMemLogic; // +0xa8
    DelMemLogic * m_delMemLogic; // +0xb0
    ChangeOwnerLogic * m_changeOwnerLogic; // +0xb8
    BOOL m_isShowDislayName; // +0xc0
    BOOL m_bIsShowNotificationSectionIndexAtFirst; // +0xc1
    NSIndexPath * m_notificationSectionIndex; // +0xc8
    BOOL m_bIsShowNickNameSectionIndexAtFirst; // +0xd0
    NSIndexPath * m_showNicknameSectionIndex; // +0xd8
    BOOL m_bIsShowAnnouncementSectionIndexAtFirst; // +0xe0
    NSIndexPath * m_showAnnouncementSectionIndex; // +0xe8
    BOOL m_bEnterDescView; // +0xf0
    unsigned long long m_nCellCnt; // +0xf8
    unsigned long long m_nCellCol; // +0x100
    BOOL m_bIsShowViewMoreBtn; // +0x108
    UIButton * m_viewMoreBtn; // +0x110
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x118
    RichTextView * m_openIMCommentRichTextView; // +0x120
    BOOL m_HadShowNotification; // +0x128
    MsgSearchHelper * m_oMsgSearchHelper; // +0x130
    BOOL m_reportSpecialAttentionMemberEntranceExposure; // +0x138
    BOOL m_reportChatBoxEntranceExposure; // +0x139
    BOOL m_isInChatBox; // +0x13a
    BOOL m_isSessionTop; // +0x13b
    BOOL m_isMyContact; // +0x13c
    MMUIView * m_tableViewHeader; // +0x140
    BOOL m_hadLoadView; // +0x148
    RichTextView * m_tableViewHeaderRichTextView; // +0x150
    NSString * m_richTextJoinChatRoomWord; // +0x158
    NSString * m_inviterUsername; // +0x160
    CGPoint m_tableViewStartDraggingContentOffset; // +0x168
    CGPoint m_tableViewLastContentOffset; // +0x178
    BOOL m_isDraggingDown; // +0x188
    BOOL m_hadShowTableViewHeaderView; // +0x189
    BOOL m_isFromChatBoxList; // +0x18a
    BOOL _isShowChatRooJoinInfoSwitch; // +0x18b
    unsigned long long _m_searchScene; // +0x190
}
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (BOOL)setUpdateNotifyMuted:(BOOL)arg1;
- (void)setChatBoxStatus:(BOOL)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)showChatBackgroundConfig;
- (void)onClear:(id)arg1 Index:(id)arg2;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)switchSaveToChatBox:(id)arg1;
- (void)onExpose;
- (void)OnChangeGroup:(id)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(BOOL)arg3;
- (void)OnQuitGroupUIRespone:(id)arg1 withResult:(BOOL)arg2 errorMsg:(id)arg3 deleteAllMsg:(BOOL)arg4;
- (void)onTopSession:(BOOL)arg1;
- (BOOL)isTopSessionCountExceed;
- (void)updateTitleView;
- (void)initTitleView;
- (void)resortMemList;
- (void)loadMemberList;
- (void)genTableViewHeader;
- (void)updateToNormalStatusEx;
- (void)willDisplaySpecialAttentionMemberCell:(id)arg1 indexPath:(id)arg2;
- (void)willDisplayChatBoxEntryCell:(id)arg1 indexPath:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)addMemListWithSection:(id)arg1;
- (id)makeDescView;
- (void)makeDescCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadProfileTableData;
- (void)reloadTableData;
- (void)initOpenIMCommentRichTextView;
- (void)initData;
- (void)requestFinderClubInfo;
- (void)showAdminViewDesc;
- (void)showRemarkEdit;
- (void)showGroupManage;
- (BOOL)isGroupMember;
- (void)showAdminViewName;
- (BOOL)showNavigationBarSepLine;
- (void)onQRCodeView;
- (void)onQuit;
- (void)onClickDelete;
- (void)realDoDelete;
- (void)showFinderGroup;
- (void)onEditAndSearch;
- (void)initMsgSearchHelper:(int)arg1;
- (void)setTopSession:(id)arg1;
- (void)initFooterView;
- (void)updateMemberView;
- (void)doReset;
- (void)initView;
- (void)showNotifiactionAnimate;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)hideCoverView;
- (void)removeCoverView;
- (void)reloadMemberListAndView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (id)init;
- (void)setM_chatRoomContact:(id)arg1;
- (BOOL)shouldRestrictContentViewSize;
- (void)onEnterChat;
- (void)openContactInfo:(id)arg1;
- (id)getViewController;
- (void)showDelMemView;
- (void)onDelMemLogicStop:(BOOL)arg1;
- (void)showMoreMemberEx;
- (void)onViewMemLogicStop:(BOOL)arg1;
- (void)addMember;
- (void)onAddMemLogicStop:(BOOL)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)setShowRemoveMember;
- (void)showMoreMember;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)getDisplayName;
- (void)showSetRoomDisplayName;
- (void)setShowDisplayName:(id)arg1;
- (void)showSetSpecialAttentionMember;
- (void)newMessageFromContactInfo:(id)arg1;
- (BOOL)canShowUpgradeStatus;
- (void)quitChatRoomConfirm;
- (void)quitChatRoomWithDeleteAllMsg:(BOOL)arg1;
- (void)onAlertViewAction:(BOOL)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmOnArriveFund:(long long)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)changeSetting;
- (id)navigationBarBackgroundColor;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchDidPresent;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onChatroomFinderClubInfoUpdated:(id)arg1;
- (void)updateFinderClubReddotIfNeeded:(id)arg1;
- (id)getShowTopViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)reportDismissedChatroomInfoIfNeededWithAction:(unsigned long long)arg1;
- (void)reportChatroomInfoGroupJoinInfo:(id)arg1 viewId:(id)arg2;
- (id)m_chatRoomContact;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_muteButton;
- (void)setM_muteButton:(id)arg1;
- (BOOL)m_isFromChatBoxList;
- (void)setM_isFromChatBoxList:(BOOL)arg1;
- (BOOL)m_bIsShowNotificationSectionIndexAtFirst;
- (void)setM_bIsShowNotificationSectionIndexAtFirst:(BOOL)arg1;
- (BOOL)m_bIsShowNickNameSectionIndexAtFirst;
- (void)setM_bIsShowNickNameSectionIndexAtFirst:(BOOL)arg1;
- (BOOL)m_bIsShowAnnouncementSectionIndexAtFirst;
- (void)setM_bIsShowAnnouncementSectionIndexAtFirst:(BOOL)arg1;
- (unsigned long long)m_searchScene;
- (void)setM_searchScene:(unsigned long long)arg1;
- (BOOL)isShowChatRooJoinInfoSwitch;
- (void)setIsShowChatRooJoinInfoSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end


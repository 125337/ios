@interface ChatRoomInfoViewController : MMUIViewController <MsgSearchHelperDelegate, MMNewTipsMgrExt, WCFinderClubExt, MMTableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, IGroupMgrExt, WCActionSheetDelegate, IAutoSetRemarkExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChatRoomManagementDelegate>
{
    CContact * m_chatRoomContact; // +0x70
    NSArray * m_arrMemberList; // +0x78
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // +0x80
    UIButton * m_muteButton; // +0x88
    UIView * m_titleView; // +0x90
    BOOL m_bDeleteStatus; // +0x98
    BOOL m_isChatStatusNotifyOpen; // +0x99
    MMTableViewInfo * m_tableViewInfo; // +0xa0
    AddMemLogic * m_addMemLogic; // +0xa8
    ViewMemLogic * m_viewMemLogic; // +0xb0
    DelMemLogic * m_delMemLogic; // +0xb8
    ChangeOwnerLogic * m_changeOwnerLogic; // +0xc0
    BOOL m_isShowDislayName; // +0xc8
    BOOL m_bIsShowNotificationSectionIndexAtFirst; // +0xc9
    NSIndexPath * m_notificationSectionIndex; // +0xd0
    BOOL m_bIsShowNickNameSectionIndexAtFirst; // +0xd8
    NSIndexPath * m_showNicknameSectionIndex; // +0xe0
    BOOL m_bIsShowAnnouncementSectionIndexAtFirst; // +0xe8
    NSIndexPath * m_showAnnouncementSectionIndex; // +0xf0
    BOOL m_bEnterDescView; // +0xf8
    unsigned long long m_nCellCnt; // +0x100
    unsigned long long m_nCellCol; // +0x108
    BOOL m_bIsShowViewMoreBtn; // +0x110
    UIButton * m_viewMoreBtn; // +0x118
    BOOL m_isDraggingDown; // +0x120
    BOOL m_isExpandMember; // +0x121
    MMUIView * m_foldBottomView; // +0x128
    UITableViewCell * m_moreButtonCell; // +0x130
    double m_memberGridHeight; // +0x138
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x140
    RichTextView * m_openIMCommentRichTextView; // +0x148
    BOOL m_HadShowNotification; // +0x150
    MsgSearchHelper * m_oMsgSearchHelper; // +0x158
    BOOL m_reportSpecialAttentionMemberEntranceExposure; // +0x160
    BOOL m_reportChatBoxEntranceExposure; // +0x161
    BOOL m_isMyContact; // +0x162
    BOOL m_hadLoadView; // +0x163
    NSString * m_newJoinInviterUsername; // +0x168
    CGPoint m_tableViewLastContentOffset; // +0x170
    BOOL m_isInChatBox; // +0x180
    BOOL m_isSessionTop; // +0x181
    BOOL m_initBTopSession; // +0x182
    BOOL m_initIsChatStatusNotifyOpen; // +0x183
    BOOL m_initIsInChatBox; // +0x184
    BOOL m_isHadReportAsyncRelationUpdate; // +0x185
    BOOL m_isFromChatBoxList; // +0x186
    BOOL _shouldShowChatRoomJoinInfoRows; // +0x187
    BOOL _forbidReloadTableData; // +0x188
    BOOL _isFirstExpandMoreMember; // +0x189
    BOOL _hasReportedGroupJoinTypeExposure; // +0x18a
    unsigned int _pendingGroupJoinTypeScene; // +0x18c
    unsigned long long _m_searchScene; // +0x190
    long long _m_bottomDistMsgCnt; // +0x198
    NSString * _m_searchChatSessionId; // +0x1a0
    WCTableViewSectionManager * _memListSection; // +0x1a8
    NSString * _reportSessionId; // +0x1b0
    CGPoint _expandMoreMemberBeginPoint; // +0x1b8
}
- (void)setupReportData;
- (void)reportGroupSettingSwitchUpdate:(BOOL)arg1 groupSettingSwtichType:(unsigned int)arg2;
- (void)reportExposureStillNotifySettingCell;
- (void)reportClickStillNotifySettingCell;
- (void)setupGroupJoinTypeReportForCell:(id)arg1 scene:(unsigned int)arg2 clickable:(BOOL)arg3;
- (void)onGroupJoinTypeCellWillDisplay:(id)arg1 indexPath:(id)arg2;
- (id)groupJoinTypeReportParamsForScene:(unsigned int)arg1;
- (id)getReportParams;
- (void)initReportContactRelationInfo;
- (void)reportContactRelationUpdateDoAction;
- (void)initFoldBottomView;
- (void)resetRightSearchButton;
- (void)handleViewMoreBtnCellInProfileOptimize:(id)arg1 CellInfo:(id)arg2;
- (id)getMoreBtnTitle;
- (void)handleScrollViewDidScroll:(id)arg1;
- (void)handleModifyViewMemLogic:(id)arg1;
- (void)expandMoreMember;
- (void)foldMoreMember;
- (void)onSearchButton:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (BOOL)setUpdateNotifyMuted:(BOOL)arg1;
- (void)setChatBoxStatus:(BOOL)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)showChatBackgroundConfig;
- (void)onClear:(id)arg1 Index:(id)arg2;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)switchSaveToChatBox:(id)arg1;
- (void)onExpose;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
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
- (void)updateToNormalStatusEx;
- (void)willDisplaySpecialAttentionMemberCell:(id)arg1 indexPath:(id)arg2;
- (void)willDisplayChatBoxEntryCell:(id)arg1 indexPath:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)calculateMemList;
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
- (void)showXiaoWeiClone;
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
- (id)genTableViewSectionInfo;
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
- (void)showStillNotification:(id)arg1;
- (id)getDisplayName;
- (void)showJoinInviterProfile;
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
- (void)popViewrInExitGroupWhenRoomContactSelectOpen;
- (void)onDeleteContact:(id)arg1;
- (void)changeSetting;
- (id)navigationBarBackgroundColor;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (id)searchChatSessionIdForReport;
- (void)msgSearchDidPresent;
- (void)msgSearchInputBoxDidClick;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onChatroomFinderClubInfoUpdated:(id)arg1;
- (void)updateFinderClubReddotIfNeeded:(id)arg1;
- (id)getShowTopViewController;
- (void)reportDismissedChatroomInfoIfNeededWithAction:(unsigned long long)arg1;
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
- (long long)m_bottomDistMsgCnt;
- (void)setM_bottomDistMsgCnt:(long long)arg1;
- (id)m_searchChatSessionId;
- (void)setM_searchChatSessionId:(id)arg1;
- (BOOL)shouldShowChatRoomJoinInfoRows;
- (void)setShouldShowChatRoomJoinInfoRows:(BOOL)arg1;
- (id)memListSection;
- (void)setMemListSection:(id)arg1;
- (BOOL)forbidReloadTableData;
- (void)setForbidReloadTableData:(BOOL)arg1;
- (BOOL)isFirstExpandMoreMember;
- (void)setIsFirstExpandMoreMember:(BOOL)arg1;
- (CGPoint)expandMoreMemberBeginPoint;
- (void)setExpandMoreMemberBeginPoint:(CGPoint)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (BOOL)hasReportedGroupJoinTypeExposure;
- (void)setHasReportedGroupJoinTypeExposure:(BOOL)arg1;
- (unsigned int)pendingGroupJoinTypeScene;
- (void)setPendingGroupJoinTypeScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

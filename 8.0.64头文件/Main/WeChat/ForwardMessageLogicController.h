@interface ForwardMessageLogicController : MMObject <SharePreConfirmSheetViewDelegate, WCGroupUndoneEduViewDelegate, WWKMsgForwarderDelegate, RoomContactSelectDelegate, SessionSelectControllerDelegate, IMsgRevokeExt>
{
    id <ForwardMessageLogicDelegate> m_delegate; // +0x8
    NSMutableArray * m_msgList; // +0x10
    NSMutableArray * m_msgListForWXWork; // +0x18
    NSArray * m_msgRecordOriginList; // +0x20
    NSArray * m_toContacts; // +0x28
    SessionSelectController * m_sessionSelectController; // +0x30
    UIView * _waitingView; // +0x38
    unsigned long long m_startTime; // +0x40
    CContact * m_toChatRoomContact; // +0x48
    NSString * m_atUserList; // +0x50
    BOOL _bMutliContact; // +0x58
    BOOL _bShowSendSuccessView; // +0x59
    BOOL _bHiddenSendSuccessToastView; // +0x5a
    BOOL _bPresent; // +0x5b
    BOOL _bAnimation; // +0x5c
    BOOL _m_bFilterMyContact; // +0x5d
    BOOL _bSpecificContact; // +0x5e
    BOOL _forbidForwardToEnterpriseChat; // +0x5f
    BOOL _onlyChatRoom; // +0x60
    BOOL _m_bIgnoreChatRoom; // +0x61
    BOOL _hideNewSessionButton; // +0x62
    BOOL _sendWaiting; // +0x63
    BOOL _hideSelectFromContactList; // +0x64
    BOOL _alignsFilterRulesInSearchResult; // +0x65
    BOOL _hasInputSth; // +0x66
    BOOL _supportLandscapeShareConfirmView; // +0x67
    BOOL _onlyShareCardForwardToContact; // +0x68
    BOOL _hasAnyMsgDidnotDownload; // +0x69
    unsigned int _m_uiAppMsgScene; // +0x6c
    unsigned int _m_forwardType; // +0x70
    unsigned long long _m_commonSearchScene; // +0x78
    NSString * _confirmPlaceholder; // +0x80
    NSString * _title; // +0x88
    unsigned long long _m_uiIDKeyScene; // +0x90
    NSString * _fromContactUserName; // +0x98
    NSString * _fromAppName; // +0xa0
    NSString * _stayAtString; // +0xa8
    NSString * _selectTitle; // +0xb0
    NSArray * _cancelSendContacts; // +0xb8
    NSDictionary * _shareInfo; // +0xc0
    NSString * _todoActivityId; // +0xc8
    NSString * _searchText; // +0xd0
    NSData * _forwardThumbData; // +0xd8
    unsigned long long _eMultiForwardType; // +0xe0
    id _userData; // +0xe8
    unsigned long long _forwardBizScene; // +0xf0
    unsigned long long _loadingType; // +0xf8
    NSString * _reportUserInfo; // +0x100
    double _pageSheetHeight; // +0x108
    WWKMsgForwarder * _wwkMsgForwarder; // +0x110
    SharePreConfirmSheetView * _confirmSheetView; // +0x118
}
- (id)init;
- (void)clearData;
- (id)getToContacts;
- (id)getMessages;
- (id)getOriginMessags;
- (BOOL)isShareCardForwardInChat;
- (void)forwardRecordMessage:(id)arg1 msgList:(id)arg2 toContacts:(id)arg3;
- (void)forwardMessage:(id)arg1;
- (void)forwardMsgList:(id)arg1;
- (void)forwardMsgList:(id)arg1 toContacts:(id)arg2;
- (void)forwardNoConfirmForMsgList:(id)arg1 toContacts:(id)arg2;
- (void)forwardNoConfirmForMsgList:(id)arg1 toContacts:(id)arg2 withBatchSendScene:(unsigned long long)arg3;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4 showConfirmView:(BOOL)arg5;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4 showConfirmView:(BOOL)arg5 batchRevokeScene:(unsigned long long)arg6;
- (void)showContactSelectViewController;
- (void)setSendWaiting:(BOOL)arg1;
- (void)setLoadingType:(unsigned long long)arg1;
- (void)onWaitingTimeout;
- (id)mmvcForSendResultToast;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewBackToApp:(id)arg1;
- (void)OnSharePreConfirmSheetViewStayAtWeChat:(id)arg1;
- (unsigned long long)OnSharePreConfirmSheetViewGetLoadingType:(id)arg1;
- (void)OnSharePreConfirmSheetViewShowRoomContactSelector:(id)arg1;
- (void)showRoomContactSelectorViewController;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)GetCurrentViewController;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)dismissViewController;
- (void)showConfirmView:(id)arg1;
- (void)internalShowConfirmView;
- (BOOL)sessionSelectControllerHideSelectFromContactList:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectForwardToEnterpriseChat:(id)arg1 appType:(long long)arg2;
- (void)OnSelectSessionCancelInPageSheetMode:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (id)sectionTitleForCurrentSessionView;
- (void)backOnShouldSelectContactError;
- (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 batchRevokeScene:(unsigned long long)arg3;
- (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2;
- (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 WithRevokeBatchId:(id)arg3;
- (void)ForwardMsg:(id)arg1 ToContact:(id)arg2;
- (id)checkMessageWrap:(id)arg1 toContact:(id)arg2;
- (void)reportConfirmIDKey;
- (void)reportViewControllerIDKey;
- (void)reportUrlMsgInfoWithMsgWrap:(id)arg1 actionRet:(BOOL)arg2;
- (void)reportImageMsgInfoWithMsgWrap:(id)arg1;
- (void)reportWeAppMsgInfoWithMsgWrap:(id)arg1 toContacts:(id)arg2;
- (void)reportMsgForwardHasInput:(BOOL)arg1;
- (id)extInfoForMessageList:(id)arg1;
- (void)dismissLogicController;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)setForwardThumbData:(id)arg1;
- (BOOL)checkIfShareGroupToolItem:(id)arg1;
- (void)configGroupUndoneReport;
- (void)onGUEClose:(id)arg1;
- (void)onGUEConfirm:(id)arg1;
- (void)checkAndFilterMsgForForwardToWeWork;
- (BOOL)checkDidDownLoadOKRecordDataFieldAr:(id)arg1;
- (void)forwardMsgToWeWork;
- (id)getViewController;
- (void)onForwardMessageSend;
- (void)didSelectContact:(id)arg1;
- (void)didMultiSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)AddAtUser:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (id)getAtUserContactDisplayName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bMutliContact;
- (void)setBMutliContact:(BOOL)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (unsigned int)m_uiAppMsgScene;
- (void)setM_uiAppMsgScene:(unsigned int)arg1;
- (BOOL)bShowSendSuccessView;
- (void)setBShowSendSuccessView:(BOOL)arg1;
- (BOOL)bHiddenSendSuccessToastView;
- (void)setBHiddenSendSuccessToastView:(BOOL)arg1;
- (BOOL)bPresent;
- (void)setBPresent:(BOOL)arg1;
- (BOOL)bAnimation;
- (void)setBAnimation:(BOOL)arg1;
- (id)confirmPlaceholder;
- (void)setConfirmPlaceholder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)m_uiIDKeyScene;
- (void)setM_uiIDKeyScene:(unsigned long long)arg1;
- (BOOL)m_bFilterMyContact;
- (void)setM_bFilterMyContact:(BOOL)arg1;
- (id)fromContactUserName;
- (void)setFromContactUserName:(id)arg1;
- (unsigned int)m_forwardType;
- (void)setM_forwardType:(unsigned int)arg1;
- (id)fromAppName;
- (void)setFromAppName:(id)arg1;
- (id)stayAtString;
- (void)setStayAtString:(id)arg1;
- (id)selectTitle;
- (void)setSelectTitle:(id)arg1;
- (BOOL)bSpecificContact;
- (void)setBSpecificContact:(BOOL)arg1;
- (id)cancelSendContacts;
- (void)setCancelSendContacts:(id)arg1;
- (BOOL)forbidForwardToEnterpriseChat;
- (void)setForbidForwardToEnterpriseChat:(BOOL)arg1;
- (BOOL)onlyChatRoom;
- (void)setOnlyChatRoom:(BOOL)arg1;
- (BOOL)m_bIgnoreChatRoom;
- (void)setM_bIgnoreChatRoom:(BOOL)arg1;
- (BOOL)hideNewSessionButton;
- (void)setHideNewSessionButton:(BOOL)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (BOOL)sendWaiting;
- (id)todoActivityId;
- (void)setTodoActivityId:(id)arg1;
- (BOOL)hideSelectFromContactList;
- (void)setHideSelectFromContactList:(BOOL)arg1;
- (BOOL)alignsFilterRulesInSearchResult;
- (void)setAlignsFilterRulesInSearchResult:(BOOL)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)forwardThumbData;
- (unsigned long long)eMultiForwardType;
- (void)setEMultiForwardType:(unsigned long long)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (unsigned long long)forwardBizScene;
- (void)setForwardBizScene:(unsigned long long)arg1;
- (unsigned long long)loadingType;
- (BOOL)hasInputSth;
- (id)reportUserInfo;
- (void)setReportUserInfo:(id)arg1;
- (double)pageSheetHeight;
- (void)setPageSheetHeight:(double)arg1;
- (BOOL)supportLandscapeShareConfirmView;
- (void)setSupportLandscapeShareConfirmView:(BOOL)arg1;
- (BOOL)onlyShareCardForwardToContact;
- (void)setOnlyShareCardForwardToContact:(BOOL)arg1;
- (BOOL)hasAnyMsgDidnotDownload;
- (void)setHasAnyMsgDidnotDownload:(BOOL)arg1;
- (id)wwkMsgForwarder;
- (void)setWwkMsgForwarder:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (void).cxx_destruct;
@end

@interface ForwardMessageLogicController : MMObject <SharePreConfirmSheetViewDelegate, WCGroupUndoneEduViewDelegate, WWKMsgForwarderDelegate, RoomContactSelectDelegate, ChatBotUploadCDNMgrDelegate, ForwardToThirdAppZipHandlerDelegate, SessionSelectControllerDelegate, IMsgRevokeExt>
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
    NSMutableArray * m_msgListBeforeConvertBackup; // +0x58
    NSArray * m_msgRecordOriginListBeforeConvertBackup; // +0x60
    BOOL _bMutliContact; // +0x68
    BOOL _bShowSendSuccessView; // +0x69
    BOOL _bHiddenSendSuccessToastView; // +0x6a
    BOOL _bPresent; // +0x6b
    BOOL _bAnimation; // +0x6c
    BOOL _m_bFilterMyContact; // +0x6d
    BOOL _bSpecificContact; // +0x6e
    BOOL _forbidForwardToEnterpriseChat; // +0x6f
    BOOL _onlyChatRoom; // +0x70
    BOOL _m_bIgnoreChatRoom; // +0x71
    BOOL _hideNewSessionButton; // +0x72
    BOOL _sendWaiting; // +0x73
    BOOL _hideSelectFromContactList; // +0x74
    BOOL _alignsFilterRulesInSearchResult; // +0x75
    BOOL _hasInputSth; // +0x76
    BOOL _supportLandscapeShareConfirmView; // +0x77
    BOOL _onlyShareCardForwardToContact; // +0x78
    BOOL _hasAnyMsgDidnotDownload; // +0x79
    BOOL _isPreparedChatForwardAsyncSending; // +0x7a
    unsigned int _m_uiAppMsgScene; // +0x7c
    unsigned int _m_forwardType; // +0x80
    unsigned long long _m_commonSearchScene; // +0x88
    NSString * _confirmPlaceholder; // +0x90
    NSString * _title; // +0x98
    unsigned long long _m_uiIDKeyScene; // +0xa0
    NSString * _fromContactUserName; // +0xa8
    NSString * _fromAppName; // +0xb0
    NSString * _stayAtString; // +0xb8
    NSString * _selectTitle; // +0xc0
    NSArray * _cancelSendContacts; // +0xc8
    NSDictionary * _shareInfo; // +0xd0
    NSString * _todoActivityId; // +0xd8
    NSString * _weappChatBotAttach; // +0xe0
    NSString * _searchText; // +0xe8
    NSData * _forwardThumbData; // +0xf0
    unsigned long long _eMultiForwardType; // +0xf8
    id _userData; // +0x100
    unsigned long long _forwardBizScene; // +0x108
    unsigned long long _loadingType; // +0x110
    NSString * _reportUserInfo; // +0x118
    id /* block */ _snackBarTitleProvider; // +0x120
    id /* block */ _snackBarExposureReporter; // +0x128
    id /* block */ _snackBarActionReporter; // +0x130
    double _pageSheetHeight; // +0x138
    WWKMsgForwarder * _wwkMsgForwarder; // +0x140
    SharePreConfirmSheetView * _confirmSheetView; // +0x148
    ChatBotUploadCDNMgr * _chatbotUploadCDNMgr; // +0x150
    ForwardToThirdAppZipHandler * _forwardToThirdAppZipHandler; // +0x158
}
+ (BOOL)newTypeForwardConfirmBar;
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
- (void)forwardPreparedChatForwardNoConfirmForMsgList:(id)arg1 toContacts:(id)arg2 batchTag:(id)arg3;
- (void)sendPreparedChatForwardSliceWithMessages:(id)arg1 contacts:(id)arg2 revokeBatchIds:(id)arg3 contactIndex:(unsigned long long)arg4 messageIndex:(unsigned long long)arg5;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4 showConfirmView:(BOOL)arg5;
- (void)forwardMsgList:(id)arg1 msgOriginList:(id)arg2 toContacts:(id)arg3 ignoreTips:(BOOL)arg4 showConfirmView:(BOOL)arg5 batchRevokeScene:(unsigned long long)arg6;
- (void)setForwardScreenFromScene:(int)arg1;
- (void)showContactSelectViewController;
- (void)setSendWaiting:(BOOL)arg1;
- (void)setLoadingType:(unsigned long long)arg1;
- (void)onWaitingTimeout;
- (void)dismissSendWaitingWithoutForward;
- (id)mmvcForSendResultToast;
- (id)chatbotUploadCDNMgr;
- (void)OnUploadMsgDataSuccess:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewBackToApp:(id)arg1;
- (void)OnSharePreConfirmSheetViewStayAtWeChat:(id)arg1;
- (unsigned long long)OnSharePreConfirmSheetViewGetLoadingType:(id)arg1;
- (void)OnSharePreConfirmSheetViewShowRoomContactSelector:(id)arg1;
- (void)showRoomContactSelectorViewController;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)GetCurrentViewController;
- (void)notifyForwardMessageSendCompleted;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)dismissViewController;
- (id)forwardToThirdAppMsgList;
- (BOOL)isForwardToThirdAppMergedForward;
- (void)finishForwardToThirdAppZipLaunchSuccess;
- (void)restoreMsgListsFromConvertBackupIfNeeded;
- (void)processAndForwardToBotContacts:(id)arg1;
- (void)showConfirmView:(id)arg1;
- (void)internalShowConfirmView;
- (BOOL)sessionSelectControllerHideSelectFromContactList:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectControllerForwardOtherAppPageSheetDidShow:(id)arg1;
- (void)forwardToThirdAppZipHandlerDidFinish:(id)arg1;
- (void)OnSelectControllerForwardOtherAppPageSheetDidCloseWithoutSelection:(id)arg1;
- (BOOL)hasAnyUndownloadMediaMsgForForwardToOtherApp:(BOOL)arg1;
- (void)OnSelectController:(id)arg1 forwardOtherAppType:(long long)arg2 params:(id)arg3;
- (void)dispatchForwardOtherAppType:(long long)arg1 params:(id)arg2;
- (void)forwardMsgToSystemShare:(id)arg1;
- (void)showForwardSystemShare:(id)arg1 params:(id)arg2 zipPath:(id)arg3;
- (void)reportForwardSystemShare:(id)arg1 completed:(BOOL)arg2 params:(id)arg3;
- (void)forwardMsgToWeWork:(long long)arg1 params:(id)arg2;
- (void)forwardMsgToYuanbao:(id)arg1;
- (void)forwardMsgToQQ:(id)arg1;
- (void)forwardMsgToQQMail:(id)arg1;
- (void)forwardMsgToWorkBuddy:(id)arg1;
- (void)forwardMsgToClawBot:(id)arg1;
- (BOOL)isYuanBaoBotForwardSwitchOn;
- (BOOL)needShowBotForwardZipAlertForContacts:(id)arg1;
- (void)showBotForwardAlertWithContacts:(id)arg1;
- (void)showBotForwardAlertWithContacts:(id)arg1 reportParams:(id)arg2;
- (void)OnSelectSessionCancelInPageSheetMode:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)onShouldFilterContact:(id)arg1;
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
- (BOOL)isAppImgMsgForWeWorkFallback:(id)arg1;
- (BOOL)isEmoticonMsgForWeWorkFallback:(id)arg1;
- (id)weWorkFallbackContentForUndownloadMsg:(id)arg1;
- (id)weWorkFallbackTextMsgForUndownloadMsg:(id)arg1 fallbackContent:(id)arg2;
- (void)checkAndFilterMsgForForwardToWeWork;
- (void)checkAndFilterMsgForForwardToWeWorkWithUndownloadFallback:(BOOL)arg1;
- (BOOL)checkDidDownLoadOKRecordDataFieldAr:(id)arg1 ignoreWeappThumb:(BOOL)arg2;
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
- (id)weappChatBotAttach;
- (void)setWeappChatBotAttach:(id)arg1;
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
- (id /* block */)snackBarTitleProvider;
- (void)setSnackBarTitleProvider:(id /* block */)arg1;
- (id /* block */)snackBarExposureReporter;
- (void)setSnackBarExposureReporter:(id /* block */)arg1;
- (id /* block */)snackBarActionReporter;
- (void)setSnackBarActionReporter:(id /* block */)arg1;
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
- (void)setChatbotUploadCDNMgr:(id)arg1;
- (id)forwardToThirdAppZipHandler;
- (void)setForwardToThirdAppZipHandler:(id)arg1;
- (BOOL)isPreparedChatForwardAsyncSending;
- (void)setIsPreparedChatForwardAsyncSending:(BOOL)arg1;
- (void).cxx_destruct;
@end

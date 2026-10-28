@interface SendAppMsgHandler : MMObject <SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    OpenApiParameter * m_parameter; // +0x8
    CMessageWrap * m_messageWrap; // +0x10
    CContact * m_oContact; // +0x18
    MMTipsViewController * _tipsViewController; // +0x20
    BOOL m_bIsHiddenTarBar; // +0x28
    int m_Scene; // +0x2c
    NSString * m_nsRedirectUrl; // +0x30
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x38
    unsigned int m_uiSessionSelectConfirmType; // +0x40
    BOOL m_bIsFromSysCopy; // +0x44
    BOOL _m_bIsSendSpecifiedContact; // +0x45
    BOOL _appBrandWithShareTicket; // +0x46
    BOOL _canReturnRightShareResult; // +0x47
    unsigned int _appbrandVersion; // +0x48
    unsigned int _flagshipFlag; // +0x4c
    id <SendAppMsgHandleDelegate> m_delegate; // +0x50
    MMUINavigationController * _m_navigationController; // +0x58
    WXMediaInternalMessage * _mediaMessage; // +0x60
    WAContactGetter * _contactGetter; // +0x68
    NSString * _appbrandDisplayName; // +0x70
    NSString * _appbrandIconUrl; // +0x78
    NSMutableDictionary * _shareKeyInfo; // +0x80
    NSString * _appbrandAppId; // +0x88
    NSArray * _toContacts; // +0x90
    NSMutableDictionary * _extraInfo; // +0x98
    NSString * _musicDataCDNMsgID; // +0xa0
    WCShareAuthViewController * _authVC; // +0xa8
}
+ (void)reportShareAppMsgInSessionMsgArr:(id)arg1 contacts:(id)arg2;
+ (void)reportShareMsg:(id)arg1 contacts:(id)arg2 openSDKVersion:(id)arg3 shareSource:(unsigned long long)arg4;
- (id)init;
- (void)dealloc;
- (void)sendAppMsgWithOpenApiParameter:(id)arg1;
- (void)showUnsupportedAlert;
- (void)sendRespAndReportToApp:(id)arg1 universalLink:(id)arg2 errCode:(int)arg3 errStr:(id)arg4;
- (void)sendAppMsg:(id)arg1 searchScene:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)sendAppMsg:(id)arg1 searchScene:(unsigned long long)arg2;
- (void)sendAppMsg:(id)arg1;
- (void)cancelSendAppMsg;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdAppUnsupport;
- (void)clearAllHandleAndReturn3rdApp:(BOOL)arg1;
- (void)sendRespToAppWithErrCode:(int)arg1;
- (void)asyncNotifySendAppMsgOk;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)handleShareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)trySendAppMsg:(id)arg1;
- (void)sendVideoFileWithLocalIdentifier:(id)arg1 extraInfo:(id)arg2;
- (void)checkAppOpenId;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)removeAuthViewController;
- (void)decryptWxWorkChatRecord;
- (void)handleDecryptWxWorkChatRecordSuccess:(id)arg1;
- (void)handleDecryptWxWorkChatRecordFail;
- (void)handleGetGameShareDataFail:(id)arg1 errMsg:(id)arg2;
- (void)handleGetGameShareMsgInfoResp:(id)arg1;
- (void)decryptWxWorkMsgList;
- (void)handleDecryptWxWorkMsgListResp:(id)arg1;
- (void)forwardMsgListFromWeWork:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)OnForwardAppBrandMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageBackToApp:(id)arg1;
- (void)OnForwardMessageStayAtWeChat:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)getShareInfoWithContactsIfNeeded:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getShareActivityInfoStr:(id)arg1;
- (void)reportShareResult:(int)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_Scene;
- (void)setM_Scene:(int)arg1;
- (BOOL)m_bIsFromSysCopy;
- (void)setM_bIsFromSysCopy:(BOOL)arg1;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (BOOL)m_bIsSendSpecifiedContact;
- (void)setM_bIsSendSpecifiedContact:(BOOL)arg1;
- (id)mediaMessage;
- (void)setMediaMessage:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (unsigned int)appbrandVersion;
- (void)setAppbrandVersion:(unsigned int)arg1;
- (id)appbrandDisplayName;
- (void)setAppbrandDisplayName:(id)arg1;
- (id)appbrandIconUrl;
- (void)setAppbrandIconUrl:(id)arg1;
- (unsigned int)flagshipFlag;
- (void)setFlagshipFlag:(unsigned int)arg1;
- (id)shareKeyInfo;
- (void)setShareKeyInfo:(id)arg1;
- (id)appbrandAppId;
- (void)setAppbrandAppId:(id)arg1;
- (BOOL)appBrandWithShareTicket;
- (void)setAppBrandWithShareTicket:(BOOL)arg1;
- (BOOL)canReturnRightShareResult;
- (void)setCanReturnRightShareResult:(BOOL)arg1;
- (id)toContacts;
- (void)setToContacts:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)musicDataCDNMsgID;
- (void)setMusicDataCDNMsgID:(id)arg1;
- (id)authVC;
- (void)setAuthVC:(id)arg1;
- (void).cxx_destruct;
@end

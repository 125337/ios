@interface WASessionContentLogicController : WeixinContentLogicController <WAContactMgrExtension, WASessionContentLogicHandlerDelegate, WASessionContentDelegate>
{
    WASessionContentLogicHandler * _sessionLogichandler; // +0xe0
    BOOL _isQuickSendSessionMsgViewHide; // +0xe8
    BOOL _hasCheckUpdateContact; // +0xe9
    BOOL _isInWeAppSheetMode; // +0xea
    unsigned int _appVersion; // +0xec
    unsigned long long _enterScene; // +0xf0
    unsigned long long _fromScene; // +0xf8
    NSDictionary * _dicSessionContentContext; // +0x100
    NSString * _sceneID; // +0x108
    unsigned long long _debugMode; // +0x110
    NSString * _fatherAppid; // +0x118
    NSString * _fromPagePath; // +0x120
    NSString * _sessionTitle; // +0x128
    NSString * _sessionSubTitle; // +0x130
    NSString * _customHeadImageUrl; // +0x138
    id /* block */ _backFromContactCallback; // +0x140
}
- (id)initWithSceneID:(id)arg1;
- (id)getMsgSendOpEntry;
- (BOOL)CanSendVoiceMsg;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendVoipMsg;
- (BOOL)CanLongPressHeadImage;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanShowBanner;
- (id)getLeftBarButton;
- (id)GetRightBarBtn;
- (id)GetHeadImageUrl:(id)arg1;
- (id)GetUsrTitle;
- (id)getSubTitle;
- (BOOL)isFromBusiness;
- (BOOL)isWeAppSheetMode;
- (void)onClickWeAppReceiveSessionMsg;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)getOpenWeAppMenuButton;
- (void)onClickOpenWeAppButton;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3;
- (void)ViewWillInit;
- (void)ViewDidAppear;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (void)Register;
- (void)UnRegister;
- (void)initViewController;
- (BOOL)CanRemoteRecord;
- (id)GetTitleTailImageView;
- (id)getSessionContentContact;
- (id)getSessionContentNavigationController;
- (id)getSessionContentViewController;
- (unsigned long long)getSessionContentEnterScene;
- (id)getSessionContentPageID;
- (id)getSessionSceneID;
- (unsigned long long)getDebugMode;
- (unsigned int)getAppVersion;
- (id)getQuickSendSessionMsgInfo;
- (id)getFatherAppid;
- (id)getFromPagePath;
- (void)onClickRightBarButton:(id)arg1;
- (void)callbackBackFromContact:(id)arg1 query:(id)arg2;
- (void)checkUpdateWeAppContact;
- (BOOL)isNeedShowQuickSendMsgView;
- (BOOL)isBackToWeApp:(id)arg1;
- (void)backToWeApp:(id)arg1 pagePath:(id)arg2;
- (void)onHideQuickSendSessionMsgBtn;
- (void)onClickQuickSendSessionMsgBtn:(id)arg1;
- (void)onSessionContentViewDidBePoped;
- (double)getCustomizedAreaWidth;
- (id)getScanQrCodeBlackList;
- (void)onClickTitle;
- (void)fetchKFSessionInfo;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)dicSessionContentContext;
- (void)setDicSessionContentContext:(id)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)fatherAppid;
- (void)setFatherAppid:(id)arg1;
- (id)fromPagePath;
- (void)setFromPagePath:(id)arg1;
- (id)sessionTitle;
- (void)setSessionTitle:(id)arg1;
- (id)sessionSubTitle;
- (void)setSessionSubTitle:(id)arg1;
- (id)customHeadImageUrl;
- (void)setCustomHeadImageUrl:(id)arg1;
- (BOOL)isInWeAppSheetMode;
- (void)setIsInWeAppSheetMode:(BOOL)arg1;
- (id /* block */)backFromContactCallback;
- (void)setBackFromContactCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end


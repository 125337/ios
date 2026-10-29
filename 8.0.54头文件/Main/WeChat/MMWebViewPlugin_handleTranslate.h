@interface MMWebViewPlugin_handleTranslate : MMWebViewPluginBase <MMWebHalfScreenDelegate, WebTransHelpButtonDelegate, WebTransPageLogicDelegate, MMMsgContentNavBarDelegate>
{
    BOOL _canUseWebTransAbility; // +0x8
    BOOL _isInTransABtestList; // +0x9
    BOOL _shouldTranslateNaviTitleShow; // +0xa
    BOOL _userHasClickedCloseHangTips; // +0xb
    BOOL _hasHiddenRightButton; // +0xc
    long long _transHelpButtonStatus; // +0x10
    long long _status; // +0x18
    NSCache * _haveTransedTextCache; // +0x20
    UIView * _orgTitleView; // +0x28
    double _dynamicRatio; // +0x30
    NSString * _curRandomUUID; // +0x38
    WebTransWebpageLogic * _webPageMgr; // +0x40
}
+ (double)getDynamicRatio;
- (id)init;
- (void)judgeWebTransAvailable;
- (void)cleanWebPageMgr;
- (void)initWebPageMgr;
- (void)transReportWithAction:(long long)arg1 andScene:(long long)arg2 andUrl:(id)arg3;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dispatchPostMessage:(id)arg1;
- (void)handleMessageDomReady;
- (void)handleMessageWebTrans:(id)arg1;
- (void)dispatchStatusTask;
- (BOOL)checkPullNoticeScreenBefore;
- (void)pullHalfScreenNotice;
- (BOOL)isDoingTransNow;
- (void)hideHelpButton;
- (BOOL)isThisPageCanTrans;
- (BOOL)isThisPageFollowMPTitleRule;
- (void)doAfterClickTransBtnFromHelpBtn:(BOOL)arg1;
- (void)doAfterClickRevertBtn;
- (void)onChangeTargetLanguage;
- (void)onNoticeHalfScreenConfirmBtnClick;
- (void)clickHelperTransButton;
- (void)clickHelperRevertButton;
- (id)getWebViewController;
- (id)getWKWebView;
- (id)getCache;
- (void)storeCache:(id)arg1 withKey:(id)arg2;
- (void)clearCache;
- (long long)getStatus;
- (void)setStatusFromPageLogic:(long long)arg1;
- (BOOL)getHiddenRightButtonFlag;
- (id)getOrgTitleView;
- (long long)getHelpButtonAvailableStatus;
- (void)onTranslateNaviTitleStateChange:(BOOL)arg1;
- (void)onTranslateNaviTitleAnimationStart;
- (void)onTranslateNaviTitleAnimationEnd;
- (BOOL)canUseWebTransAbility;
- (void)setCanUseWebTransAbility:(BOOL)arg1;
- (long long)transHelpButtonStatus;
- (void)setTransHelpButtonStatus:(long long)arg1;
- (BOOL)isInTransABtestList;
- (void)setIsInTransABtestList:(BOOL)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (BOOL)shouldTranslateNaviTitleShow;
- (void)setShouldTranslateNaviTitleShow:(BOOL)arg1;
- (BOOL)userHasClickedCloseHangTips;
- (void)setUserHasClickedCloseHangTips:(BOOL)arg1;
- (id)haveTransedTextCache;
- (void)setHaveTransedTextCache:(id)arg1;
- (id)orgTitleView;
- (void)setOrgTitleView:(id)arg1;
- (BOOL)hasHiddenRightButton;
- (void)setHasHiddenRightButton:(BOOL)arg1;
- (double)dynamicRatio;
- (void)setDynamicRatio:(double)arg1;
- (id)curRandomUUID;
- (void)setCurRandomUUID:(id)arg1;
- (id)webPageMgr;
- (void)setWebPageMgr:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMURLHandler : MMObject <WCActionSheetDelegate, MFMailComposeViewControllerDelegate, contactInfoDelegate, MMWebViewDelegate, IMsgRevokeExt>
{
    UIViewController * m_viewController; // +0x8
    NSMutableDictionary * m_urlToViewController; // +0x10
    NSMutableDictionary * m_urlToBackupURL; // +0x18
    NSString * m_url; // +0x20
    unsigned int m_urlPermittedSet; // +0x28
    BOOL m_bPresentViewController; // +0x2c
    BOOL m_isDisableShare; // +0x2d
    BOOL m_disalbeStartLoadGetA8Key; // +0x2e
    BOOL m_isShouldShowGoBackBtn; // +0x2f
    BOOL _m_bOpenInNewWindow; // +0x30
    BOOL _m_shouldShowDomain; // +0x31
    BOOL _isShowingSaftyTips; // +0x32
    int m_urlSource; // +0x34
    NSDictionary * _extraInfo; // +0x38
}
+ (id)sharedInstance;
+ (void)presentUrlWithoutShare:(id)arg1;
+ (void)handleUrl:(id)arg1 withBackupURL:(id)arg2 withExtraInfo:(id)arg3;
+ (BOOL)containsString:(id)arg1 withRegex:(id)arg2;
+ (BOOL)containsHTTPString:(id)arg1;
+ (BOOL)containsHTTPSString:(id)arg1;
+ (BOOL)containsLocalPathString:(id)arg1;
+ (BOOL)containsWeixinString:(id)arg1;
+ (BOOL)containsWXPayLinkString:(id)arg1;
+ (BOOL)containsMoaString:(id)arg1;
+ (BOOL)containEmailString:(id)arg1;
+ (BOOL)containsPhoneLinkString:(id)arg1;
+ (BOOL)containsTextLinkString:(id)arg1;
+ (BOOL)containsAppStoreLinkString:(id)arg1;
+ (BOOL)containsAppMusicLinkString:(id)arg1;
+ (BOOL)containsApplePodcastsLinkString:(id)arg1;
+ (BOOL)containsProtocalHead:(id)arg1;
+ (id)grepString:(id)arg1 withRegex:(id)arg2;
+ (id)grepPhoneNumber:(id)arg1;
+ (id)grepTextNumber:(id)arg1;
+ (id)grepAppStoreIDFromUrl:(id)arg1;
+ (id)grepSMSNumberAndBody:(id)arg1;
+ (BOOL)canHandleNativeUrl:(id)arg1;
- (void)initData;
- (id)init;
- (id)getViewController;
- (id)getNavigationController;
- (void)popViewController:(id)arg1;
- (id)constructContactInfoView:(id)arg1 withUserName:(id)arg2;
- (id)constructSetHeaderImageViewController:(id)arg1;
- (id)openQQMailPlugin:(id)arg1;
- (id)showBlackList:(id)arg1;
- (void)showAppStore;
- (void)showAlert:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)handleInnerJumpURL:(id)arg1;
- (void)handleHttpURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleDeepLinkURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleEmailURL:(id)arg1;
- (void)handleLocalResource:(id)arg1;
- (BOOL)isInnerWXPayURL:(id)arg1;
- (BOOL)isInnerAppURL:(id)arg1;
- (BOOL)isSystemAppURL:(id)arg1;
- (void)handleInnerWXPayURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleInnerAppURL:(id)arg1;
- (void)handleSystemAppURL:(id)arg1;
- (void)handleOutterAppURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)showConfirmAlertViewWithTitle:(id)arg1 andMessage:(id)arg2 url:(id)arg3;
- (void)handleURL:(id)arg1 withExtraInfo:(id)arg2;
- (id)handlePreviewURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleURL:(id)arg1 withBackupURL:(id)arg2 withExtraInfo:(id)arg3;
- (BOOL)isURLRegistered:(id)arg1;
- (void)writeEmailWithQQMail;
- (void)writeEmailWithSystemMail;
- (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)handleNativeUrl:(id)arg1 withViewController:(id)arg2;
- (void)openWeixinHB;
- (void)openDeviceRankView;
- (void)openRankMyHomepage;
- (void)nextFeedback:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (BOOL)m_bPresentViewController;
- (void)setM_bPresentViewController:(BOOL)arg1;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (BOOL)m_isDisableShare;
- (void)setM_isDisableShare:(BOOL)arg1;
- (BOOL)m_disalbeStartLoadGetA8Key;
- (void)setM_disalbeStartLoadGetA8Key:(BOOL)arg1;
- (int)m_urlSource;
- (void)setM_urlSource:(int)arg1;
- (unsigned int)m_urlPermittedSet;
- (void)setM_urlPermittedSet:(unsigned int)arg1;
- (BOOL)m_isShouldShowGoBackBtn;
- (void)setM_isShouldShowGoBackBtn:(BOOL)arg1;
- (BOOL)m_bOpenInNewWindow;
- (void)setM_bOpenInNewWindow:(BOOL)arg1;
- (BOOL)m_shouldShowDomain;
- (void)setM_shouldShowDomain:(BOOL)arg1;
- (BOOL)isShowingSaftyTips;
- (void)setIsShowingSaftyTips:(BOOL)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

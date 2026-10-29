@interface MainFrameHeaderLogic : MMObject <MFPushBannerDelegate, MFPushSystemMsgDelegate, IOnlineClientMgrExt, IMusicPlayerExt, IMMWebViewKeepHolderMgrExt, IBackupExt, IMigrationClientExt, IContactVerifyExt, H5GameViewControllerDelegate, IFavoritesOnTopLogicExt, IExptDebugExt>
{
    FTSVoiceSearchBarController * m_searchBar; // +0x8
    NSMutableArray * m_bannerAry; // +0x10
    BOOL m_bWebWXLogined; // +0x18
    BOOL m_bBakChatStarted; // +0x19
    MFWebMMBtn * m_webMMBtn; // +0x20
    MFMusicPlayBtn * m_musicPlayBtn; // +0x28
    MFWebViewVCKeepHoldBtn * m_webViewRecoverBtn; // +0x30
    MFBackupBtn * m_backupBtn; // +0x38
    MFMigrationBtn * m_migrationBtn; // +0x40
    MFRoamBtn * m_roamBtn; // +0x48
    MFRoamRemindBtn * m_roamRemindBtn; // +0x50
    MFBannerBtn * m_contactVerifyBtn; // +0x58
    MFBannerBtn * m_MFFavDetailBtn; // +0x60
    MFBannerBtn * m_strongNotificationBtn; // +0x68
    MFBannerBtn * m_exptDebugBtn; // +0x70
    MFBannerBtn * m_brandDebugBtn; // +0x78
    MFPushBannerLogic * m_pushBannerLogic; // +0x80
    MFPushSystemMsgLogic * m_pushSystemMsgLogic; // +0x88
    id <MainFrameHeaderDelegate> _delegate; // +0x90
}
- (id)initWithViewControllerForSearch:(id)arg1;
- (void)dealloc;
- (void)registerExt;
- (void)unRegisterExt;
- (void)initHeader;
- (unsigned long long)bannerCount;
- (id)getBanner:(unsigned long long)arg1;
- (BOOL)cellEditable:(unsigned long long)arg1;
- (void)trigBanner:(unsigned long long)arg1;
- (void)deleteBanner:(unsigned long long)arg1;
- (double)bannerTotalHeight;
- (void)dismissSystemMessage;
- (void)addBannerBtn:(id)arg1 withAnim:(BOOL)arg2;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 withAnim:(BOOL)arg3;
- (void)addBannerBtn:(id)arg1 atIndex:(unsigned int)arg2 editable:(BOOL)arg3 withAnim:(BOOL)arg4;
- (void)removeBannerBtn:(id)arg1;
- (void)removeBannerBtnWithoutAnim:(id)arg1;
- (void)initWebMMBtn;
- (void)showLogoutWebOnline;
- (void)onLogoutWeb;
- (void)onLoginWeb;
- (void)initMusicPlayBtn;
- (void)processMusicPlayBtn:(BOOL)arg1;
- (void)processArticleReadWebview:(BOOL)arg1;
- (void)showCancelMusicPlay;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)updateMusicPlayBanner:(id)arg1;
- (void)reloadMusicBanner;
- (void)delayHiddenMusicPlayBannerIfPlayerIdle:(id)arg1;
- (void)onKeepHoldWebViewVCForNewMainFrameBannerStatusChangedIsAddKeep:(BOOL)arg1;
- (void)showReadingWebview;
- (void)showConversionOnTop:(BOOL)arg1;
- (void)showReadingFavDetail;
- (void)initPushBanner;
- (void)PopViewController;
- (void)PushViewController:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onShowPushBanner;
- (void)onHidePushBanner;
- (void)showPushSystemMsg;
- (void)dismissPushSystemMsg;
- (void)initBackupButton;
- (void)showBackupViewController;
- (void)onStartBackup;
- (void)onTerminateBackup;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)initMigrationButton;
- (void)showMigrationViewController;
- (void)onStartMigration;
- (void)onTerminateMigration;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)initContactVerifyButton;
- (void)showPrivacyVC;
- (void)onStartContactVerify;
- (void)onTerminateContactVerify;
- (void)onGameViewClosed;
- (void)onStartMonitorKV:(id)arg1;
- (void)addExptDebugBanner:(id)arg1;
- (void)showCloseExptDebugDialog;
- (void)cancelExptDebug;
- (id)searchBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


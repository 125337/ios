@interface WXGMigrationAccountMgr : MMUserService <MMKernelExt, INewSyncExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _shouldShowBanner; // +0x8
    BOOL _isManualLogin; // +0x9
    BOOL _hasShowBannerCurrentProcess; // +0xa
}
- (void)onServiceInit;
- (void)dealloc;
- (id)keyWithHashName:(id)arg1;
- (id)getMmkv;
- (void)initAccountInfo;
- (BOOL)isAccountHasChatLog:(id)arg1;
- (id)getAccountInfoByHashName:(id)arg1;
- (id)getAccountInfoByHashName:(id)arg1 mmkv:(id)arg2;
- (BOOL)shouldShowPomEntryOnLoginPage;
- (BOOL)isEnableCrossNear;
- (BOOL)isMultiPipelineEnabled;
- (BOOL)isVerificationEnabled;
- (BOOL)shouldShowBanner;
- (void)hideBanner;
- (BOOL)isMainDbCreatedRecently:(id)arg1 timeSpan:(int)arg2;
- (void)checkShowBanner;
- (void)onNewSyncFinish;
- (void)onExptItemListChange;
- (void)onManulLoginOK;
- (void)onLoginOK;
- (void)setShouldShowBanner:(BOOL)arg1;
- (BOOL)isManualLogin;
- (void)setIsManualLogin:(BOOL)arg1;
- (BOOL)hasShowBannerCurrentProcess;
- (void)setHasShowBannerCurrentProcess:(BOOL)arg1;
@end

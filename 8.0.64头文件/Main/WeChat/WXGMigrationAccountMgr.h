@interface WXGMigrationAccountMgr : MMUserService <MMKernelExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _shouldShowBanner; // +0x8
    BOOL _isNewReg; // +0x9
    BOOL _isPureOfflineMigEnable; // +0xa
    BOOL _hasShowBannerCurrentProcess; // +0xb
}
- (void)onServiceInit;
- (void)dealloc;
- (id)keyWithUsername:(id)arg1;
- (id)getMmkv;
- (void)initAccountInfo;
- (BOOL)isAccountHasChatLog:(id)arg1;
- (id)getAccountInfoBySha256:(id)arg1;
- (id)getAccountInfoBySha256:(id)arg1 mmkv:(id)arg2;
- (BOOL)shouldShowPomEntryOnLoginPage;
- (BOOL)shouldShowBanner;
- (void)onHideBanner;
- (void)hideBannerForever;
- (BOOL)isMainDbCreatedRecently:(id)arg1 timeSpan:(int)arg2;
- (id)createOrUpdateAccountInfo:(id)arg1;
- (void)checkShowBanner:(id)arg1;
- (void)onExptItemListChange;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)onAuthOK;
- (void)setShouldShowBanner:(BOOL)arg1;
- (BOOL)isNewReg;
- (void)setIsNewReg:(BOOL)arg1;
- (BOOL)isPureOfflineMigEnable;
- (void)setIsPureOfflineMigEnable:(BOOL)arg1;
- (BOOL)hasShowBannerCurrentProcess;
- (void)setHasShowBannerCurrentProcess:(BOOL)arg1;
@end

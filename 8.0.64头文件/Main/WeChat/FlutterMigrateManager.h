@interface FlutterMigrateManager : NSObject <INewSyncExt, FlutterNavigatorDelegate>
{
    BOOL _m_bShouldNotInterruption; // +0x8
    BOOL _mIsOfflineEmigrate; // +0x9
    int _mUseFlutterExpt; // +0xc
    int _latestNotifyCode; // +0x10
    MMFlutterInstance * _flutterInstance; // +0x18
    UIViewController * _flutterViewController; // +0x20
}
+ (id)sharedInstance;
+ (BOOL)isKeepScreenOn;
+ (void)setKeepScreenOn:(BOOL)arg1;
- (id)init;
- (id)getFlutterInstacne;
- (id)getMigrateManager;
- (void)uninitMigrateManager;
- (void)reInit:(id)arg1 cachePath:(id)arg2;
- (void)showSelectMigrateTypeUI;
- (void)showExportToPcOnDemand:(id)arg1 ContactName:(id)arg2 NickName:(id)arg3 CreateTime:(unsigned long long)arg4;
- (void)showTaskDetailPageByRespone:(id)arg1;
- (void)showTaskDetailPageByOfflineRespone:(id)arg1;
- (void)showTaskDetailPageWithoutParms;
- (void)showGuestEntryPage:(id)arg1;
- (void)setLatestNotifyCode:(int)arg1;
- (BOOL)canStartByUrl;
- (void)releaseFlutterInstance;
- (BOOL)useFlutterExpt;
- (id)getMmkv;
- (BOOL)useOfflineFlutterExpt;
- (BOOL)isLogout;
- (BOOL)isOfflineEmigrateFlutterVcShowing;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (BOOL)canStopByPcNotify;
- (BOOL)isDataProcessing;
- (void)onNewSyncCloseMigration:(id)arg1;
- (void)onNewSyncPauseMigration:(id)arg1;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (BOOL)isFlutterViewControllerOnTop;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (int)mUseFlutterExpt;
- (void)setMUseFlutterExpt:(int)arg1;
- (int)latestNotifyCode;
- (BOOL)m_bShouldNotInterruption;
- (void)setM_bShouldNotInterruption:(BOOL)arg1;
- (BOOL)mIsOfflineEmigrate;
- (void)setMIsOfflineEmigrate:(BOOL)arg1;
- (void).cxx_destruct;
@end

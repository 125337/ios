@interface BoxBrandTLFlutterViewController : MMFlutterViewController <IMusicPlayerExt, BoxBrandTimelineMsgMgrExt, BrandDebugEventExt, WCFinderBoxMgrExt, BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    BOOL _hasViewWillBePushedOnce; // +0x71
    BOOL _hasColdLaunched; // +0x72
    BOOL _didAppear; // +0x73
    BOOL _canShowPersonalCenter; // +0x74
    BOOL _enableAd; // +0x75
    BOOL _enableBrandService; // +0x76
    BOOL _useNewFinderBoxApiImplementation; // +0x77
    BOOL _isExitingForUpdatedSettings; // +0x78
    unsigned int redDotCount; // +0x7c
    unsigned int enterSessionInfoNotifyType; // +0x80
    BrandTLExptConfig * exptConfig; // +0x88
    unsigned long long source; // +0x90
    unsigned long long enterRowIndexInMainFrameSession; // +0x98
    CMessageWrap * enterMsgInMainFrameSession; // +0xa0
    NSNumber * _timelineUnreadMsgCount; // +0xa8
    FlutterBrandTLApiImplementation * _apiImpl; // +0xb0
    FlutterFinderBoxApiImplementation * _boxApiImpl; // +0xb8
    BoxEnterStatusApiImplementation * _boxEnterStatusApiImpl; // +0xc0
    BTLFinderLiveTexturePlugin * _finderLiveTexturePlugin; // +0xc8
    BoxBrandTimelineReportLogic * _reportLogic; // +0xd0
    MusicCallbackApi * _flutterMusicPlayerCallBack; // +0xd8
}
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupPlugins;
- (void)viewDidLoad;
- (id)getMagicBrushFlutterPlugins;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)updateEnterInfo;
- (id)generateSessionParamsIdIfNeed;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)playApp:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)onBoxTimelinePageActiveChange:(BOOL)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onBoxDelBrandTimelineMsgBySession:(id)arg1;
- (void)onBoxShouldExitForUpdatedSettings;
- (void)_tryExitForUpdatedSettings;
- (void)_updateCreationCenterInfo;
- (void)setupMagicBrushEnv:(BOOL)arg1;
- (void)reportAdBrandCardOnClick;
- (void)insertMockCanvasModelToRecAtIndex:(long long)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)enterRowIndexInMainFrameSession;
- (void)setEnterRowIndexInMainFrameSession:(unsigned long long)arg1;
- (BOOL)isShowRedDotInMainFrameSession;
- (void)setIsShowRedDotInMainFrameSession:(BOOL)arg1;
- (unsigned int)redDotCount;
- (void)setRedDotCount:(unsigned int)arg1;
- (id)enterMsgInMainFrameSession;
- (void)setEnterMsgInMainFrameSession:(id)arg1;
- (unsigned int)enterSessionInfoNotifyType;
- (void)setEnterSessionInfoNotifyType:(unsigned int)arg1;
- (id)timelineUnreadMsgCount;
- (void)setTimelineUnreadMsgCount:(id)arg1;
- (id)apiImpl;
- (void)setApiImpl:(id)arg1;
- (id)boxApiImpl;
- (void)setBoxApiImpl:(id)arg1;
- (id)boxEnterStatusApiImpl;
- (void)setBoxEnterStatusApiImpl:(id)arg1;
- (id)finderLiveTexturePlugin;
- (void)setFinderLiveTexturePlugin:(id)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (BOOL)hasViewWillBePushedOnce;
- (void)setHasViewWillBePushedOnce:(BOOL)arg1;
- (BOOL)hasColdLaunched;
- (void)setHasColdLaunched:(BOOL)arg1;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (BOOL)canShowPersonalCenter;
- (void)setCanShowPersonalCenter:(BOOL)arg1;
- (BOOL)enableAd;
- (void)setEnableAd:(BOOL)arg1;
- (BOOL)enableBrandService;
- (void)setEnableBrandService:(BOOL)arg1;
- (BOOL)useNewFinderBoxApiImplementation;
- (void)setUseNewFinderBoxApiImplementation:(BOOL)arg1;
- (id)flutterMusicPlayerCallBack;
- (void)setFlutterMusicPlayerCallBack:(id)arg1;
- (BOOL)isExitingForUpdatedSettings;
- (void)setIsExitingForUpdatedSettings:(BOOL)arg1;
- (void).cxx_destruct;
@end

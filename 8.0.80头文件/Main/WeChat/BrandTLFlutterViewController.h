@interface BrandTLFlutterViewController : MMFlutterViewController <IMusicPlayerExt, BrandTimelineMsgMgrExt, BrandDebugEventExt, BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    BOOL _hasViewWillBePushedOnce; // +0x71
    BOOL _hasColdLaunched; // +0x72
    BOOL _didAppear; // +0x73
    BOOL _canShowPersonalCenter; // +0x74
    BOOL _enableAd; // +0x75
    BOOL _enableBrandService; // +0x76
    unsigned int redDotCount; // +0x78
    unsigned int enterSessionInfoNotifyType; // +0x7c
    BrandTLExptConfig * exptConfig; // +0x80
    unsigned long long source; // +0x88
    unsigned long long enterRowIndexInMainFrameSession; // +0x90
    CMessageWrap * enterMsgInMainFrameSession; // +0x98
    unsigned long long _xiaoweiSessionId; // +0xa0
    FlutterBrandTLApiImplementation * _apiImpl; // +0xa8
    BTLFinderLiveTexturePlugin * _finderLiveTexturePlugin; // +0xb0
    BrandTimelineReportLogic * _reportLogic; // +0xb8
    MusicCallbackApi * _flutterMusicPlayerCallBack; // +0xc0
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
- (id)entryPoint;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)playApp:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)onTimelinePageActiveChange:(BOOL)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
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
- (unsigned long long)xiaoweiSessionId;
- (void)setXiaoweiSessionId:(unsigned long long)arg1;
- (id)apiImpl;
- (void)setApiImpl:(id)arg1;
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
- (id)flutterMusicPlayerCallBack;
- (void)setFlutterMusicPlayerCallBack:(id)arg1;
- (void).cxx_destruct;
@end

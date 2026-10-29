@interface BrandTLFlutterViewController : MMFlutterViewController <IMusicPlayerExt, BrandTimelineMsgMgrExt, BrandDebugEventExt, BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x68
    BOOL _hasViewWillBePushedOnce; // +0x69
    BOOL _didAppear; // +0x6a
    BOOL _canShowPersonalCenter; // +0x6b
    BOOL _enableAd; // +0x6c
    BOOL _enableBrandService; // +0x6d
    unsigned int redDotCount; // +0x70
    unsigned int enterSessionInfoNotifyType; // +0x74
    BrandTLExptConfig * exptConfig; // +0x78
    unsigned long long source; // +0x80
    unsigned long long enterRowIndexInMainFrameSession; // +0x88
    CMessageWrap * enterMsgInMainFrameSession; // +0x90
    FlutterBrandTLApiImplementation * _apiImpl; // +0x98
    BTLFinderLiveTexturePlugin * _finderLiveTexturePlugin; // +0xa0
    BrandTimelineReportLogic * _reportLogic; // +0xa8
    MusicCallbackApi * _flutterMusicPlayerCallBack; // +0xb0
}
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)setupPlugins;
- (void)viewDidLoad;
- (id)getMagicBrushFlutterPlugins;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)updateEnterInfo;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)entryPoint;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)onTimelinePageActiveChange:(BOOL)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)_updateCreationCenterInfo;
- (void)setupMagicBrushEnv:(BOOL)arg1;
- (void)reportAdBrandCardOnClick;
- (void)insertMockCanvasModelToRecAtIndex:(long long)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (BOOL)shouldUpdatePageStateWhenPreRenderStart;
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
- (id)apiImpl;
- (void)setApiImpl:(id)arg1;
- (id)finderLiveTexturePlugin;
- (void)setFinderLiveTexturePlugin:(id)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (BOOL)hasViewWillBePushedOnce;
- (void)setHasViewWillBePushedOnce:(BOOL)arg1;
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


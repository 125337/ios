@interface BSTimelineFlutterViewController : MMFlutterViewController <BSTimelineMsgMgrExt, BSDebugEventExt>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    BOOL _hasViewWillBePushedOnce; // +0x71
    BOOL _didAppear; // +0x72
    BOOL _canShowPersonalCenter; // +0x73
    BOOL _enableAd; // +0x74
    BOOL _enableBrandService; // +0x75
    unsigned int redDotCount; // +0x78
    unsigned int enterSessionInfoNotifyType; // +0x7c
    BSTLExptConfig * exptConfig; // +0x80
    unsigned long long source; // +0x88
    unsigned long long enterRowIndexInMainFrameSession; // +0x90
    CMessageWrap * enterMsgInMainFrameSession; // +0x98
    BSTimelineFlutterPlugin * _apiImpl; // +0xa0
    BRSFinderLiveTexturePlugin * _finderLiveTexturePlugin; // +0xa8
    ECSTimelineReportLogic * _reportLogic; // +0xb0
}
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)registerPlugin;
- (void)loadView;
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
- (void)onTimelinePageActiveChange:(BOOL)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)_updateCreationCenterInfo;
- (void)setupMagicBrushEnv:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

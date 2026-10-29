@interface FlutterBizImagePreviewerFlutterViewController : MMFlutterViewController <BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    unsigned int redDotCount; // +0x74
    unsigned int enterSessionInfoNotifyType; // +0x78
    BrandTLExptConfig * exptConfig; // +0x80
    unsigned long long source; // +0x88
    unsigned long long enterRowIndexInMainFrameSession; // +0x90
    CMessageWrap * enterMsgInMainFrameSession; // +0x98
    FlutterBizImagePreviewPlugin * _apiImpl; // +0xa0
    id /* block */ _finishCallback; // +0xa8
    id /* block */ _mpImageForwardPluginProvider; // +0xb0
    FlutterBizSharePlugin * _shareApiImpl; // +0xb8
}
- (id)initWithExptConfig:(id)arg1;
- (id)initWithPreviewInfo:(LaunchBizImagePreviewInfo)arg1 finishCallback:(id /* block */)arg2;
- (id)initWithPreviewInfo:(LaunchBizImagePreviewInfo)arg1 mpImageForwardPluginProvider:(id /* block */)arg2 finishCallback:(id /* block */)arg3;
- (id)initWithImageUrls:(id)arg1 thumbRect:(CGRect)arg2 saveImageOnly:(BOOL)arg3;
- (id)initWithPreviewerInstance:(id)arg1 mpImageForwardPluginProvider:(id /* block */)arg2 finishCallback:(id /* block */)arg3;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupPlugins;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)entryPoint;
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
- (id /* block */)finishCallback;
- (void)setFinishCallback:(id /* block */)arg1;
- (id /* block */)mpImageForwardPluginProvider;
- (void)setMpImageForwardPluginProvider:(id /* block */)arg1;
- (id)shareApiImpl;
- (void)setShareApiImpl:(id)arg1;
- (void).cxx_destruct;
@end

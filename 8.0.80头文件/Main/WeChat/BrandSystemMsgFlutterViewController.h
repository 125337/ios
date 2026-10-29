@interface BrandSystemMsgFlutterViewController : MMFlutterViewController <BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x70
    BOOL _didAppear; // +0x71
    unsigned int redDotCount; // +0x74
    unsigned int enterSessionInfoNotifyType; // +0x78
    BrandTLExptConfig * exptConfig; // +0x80
    unsigned long long source; // +0x88
    unsigned long long enterRowIndexInMainFrameSession; // +0x90
    CMessageWrap * enterMsgInMainFrameSession; // +0x98
    FlutterBrandTLApiImplementation * _apiImpl; // +0xa0
}
- (id)initWithExptConfig:(id)arg1 serviceType:(long long)arg2;
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)setupPlugins;
- (void)didTakeSnapshot:(id)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)entryPoint;
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
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

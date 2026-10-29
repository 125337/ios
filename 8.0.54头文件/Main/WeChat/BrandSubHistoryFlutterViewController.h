@interface BrandSubHistoryFlutterViewController : MMFlutterViewController <BrandTLViewControllerProtocol>
{
    BOOL isShowRedDotInMainFrameSession; // +0x68
    BOOL _didAppear; // +0x69
    unsigned int redDotCount; // +0x6c
    unsigned int enterSessionInfoNotifyType; // +0x70
    BrandTLExptConfig * exptConfig; // +0x78
    unsigned long long source; // +0x80
    unsigned long long enterRowIndexInMainFrameSession; // +0x88
    CMessageWrap * enterMsgInMainFrameSession; // +0x90
    FlutterBrandTLApiImplementation * _apiImpl; // +0x98
}
- (id)initWithExptConfig:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getMagicBrushFlutterPlugins;
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


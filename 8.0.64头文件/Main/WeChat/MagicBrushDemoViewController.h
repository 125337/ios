@interface MagicBrushDemoViewController : MMUIViewController
{
    BOOL _isFullPage; // +0x70
    UIView * _contentContainer; // +0x78
    unsigned long long _incButtonTag; // +0x80
    UIButton * _testSimpleCanvas; // +0x88
    UIButton * _testListCanvas; // +0x90
    UIButton * _testPublicService; // +0x98
    UIButton * _testExternalView; // +0xa0
    UIButton * _testNewFullPage; // +0xa8
    MagicBrushDemoLogic * _logic; // +0xb0
    MagicBrushViewDelegateProxy * _viewDelegateProxy; // +0xb8
}
- (id)initWithIsFullPage:(BOOL)arg1;
- (id)createButton:(id)arg1 eventTouchUpInside:(id /* block */)arg2;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setLogic:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (unsigned long long)incButtonTag;
- (void)setIncButtonTag:(unsigned long long)arg1;
- (id)testSimpleCanvas;
- (void)setTestSimpleCanvas:(id)arg1;
- (id)testListCanvas;
- (void)setTestListCanvas:(id)arg1;
- (id)testPublicService;
- (void)setTestPublicService:(id)arg1;
- (id)testExternalView;
- (void)setTestExternalView:(id)arg1;
- (id)testNewFullPage;
- (void)setTestNewFullPage:(id)arg1;
- (BOOL)isFullPage;
- (void)setIsFullPage:(BOOL)arg1;
- (id)logic;
- (id)viewDelegateProxy;
- (void)setViewDelegateProxy:(id)arg1;
- (void).cxx_destruct;
@end

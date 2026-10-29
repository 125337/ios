@interface MagicBrushDemoViewController : MMUIViewController
{
    UIView * _contentContainer; // +0x68
    unsigned long long _incButtonTag; // +0x70
    UIButton * _testSimpleCanvas; // +0x78
    UIButton * _testListCanvas; // +0x80
    UIButton * _testPublicService; // +0x88
    UIButton * _testExternalView; // +0x90
    MagicBrushDemoLogic * _logic; // +0x98
    MagicBrushViewDelegateProxy * _viewDelegateProxy; // +0xa0
}
- (id)createButton:(id)arg1 eventTouchUpInside:(id /* block */)arg2;
- (void)viewDidLoad;
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
- (id)logic;
- (id)viewDelegateProxy;
- (void)setViewDelegateProxy:(id)arg1;
- (void).cxx_destruct;
@end


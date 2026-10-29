@interface WCFinderCardWebViewController : MMUIHalfScreenViewController <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCFinderHalfScreenProtocol>
{
    id <WCFinderCardWebViewControllerDelegate> _finderDelegate; // +0x68
    NSDictionary * _envDict; // +0x70
    MMWebViewController * _webViewController; // +0x78
    WCFinderEmptyTipsView * _emptyTipsView; // +0x80
    NSString * _url; // +0x88
    NSString * _uxinfo; // +0x90
    WCFinderJumpInfo * _jumpInfo; // +0x98
    long long _viewControllerCount; // +0xa0
    unsigned long long _jumpInfoPos; // +0xa8
    double _heightRatio; // +0xb0
}
+ (double)heightInFullScreenMode;
- (id)init;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)willJumpToOthers;
- (BOOL)useTransparentNavibar;
- (void)updateWithJumpInfo:(id)arg1 params:(id)arg2;
- (void)updateWithUrl:(id)arg1;
- (void)setIsFixedHeight:(BOOL)arg1;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (id)emptyTipsView;
- (BOOL)needCloseOnOrientationChanged;
- (void)initWebView;
- (void)updateFinderUI;
- (void)reportUniversalJumperWithJumperInfo:(id)arg1 eventType:(unsigned long long)arg2;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (id)envDict;
- (void)setEnvDict:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (long long)viewControllerCount;
- (void)setViewControllerCount:(long long)arg1;
- (unsigned long long)jumpInfoPos;
- (void)setJumpInfoPos:(unsigned long long)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end


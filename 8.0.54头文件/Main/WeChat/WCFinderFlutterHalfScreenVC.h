@interface WCFinderFlutterHalfScreenVC : WCFinderCustomPanelSheet <WCFinderFlutterHalfScreenPluginDelegate>
{
    WCFinderFlutterHalfScreenVCConfig * _config; // +0x68
    WCFinderFlutterHalfScreenPlugin * _halfScreenPlugin; // +0x70
    MMFlutterViewController * _flutterVC; // +0x78
    unsigned long long _cancelMode; // +0x80
}
- (BOOL)useTransparentNavibar;
- (id)initWithConfig:(id)arg1;
- (void)baseInit;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (BOOL)panelDragPanGesShouldBegin:(id)arg1;
- (void)setupUI;
- (void)setCancelMode:(unsigned long long)arg1;
- (id)flutterRouter;
- (id)_flutterPlugins;
- (id)extraFlutterPlugins;
- (id)_flutterParams;
- (id)extraFlutterParams;
- (void)onHalfScreenPluginCancelWithAnimated:(BOOL)arg1;
- (void)onHalfScreenPluginUpdateContentHeight:(double)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)halfScreenPlugin;
- (void)setHalfScreenPlugin:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (unsigned long long)cancelMode;
- (void).cxx_destruct;
@end


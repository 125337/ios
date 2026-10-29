@interface BizTextCoverFlutterViewController : MMFlutterViewController <FlutterBizTextCoverPluginDelegate>
{
    id <BizTextCoverControllerDelegate> _textCoverDelegate; // +0x70
    id /* block */ _resultCallback; // +0x78
    FlutterBizTextCoverPlugin * _textCoverPlugin; // +0x80
    BizTextCoverEditorParams * _params; // +0x88
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupPlugins;
- (void)handleCoverInfo:(id)arg1;
- (void)onRequestNativeBottomOverlayVisible:(BOOL)arg1;
- (id)textCoverDelegate;
- (void)setTextCoverDelegate:(id)arg1;
- (id /* block */)resultCallback;
- (void)setResultCallback:(id /* block */)arg1;
- (id)textCoverPlugin;
- (void)setTextCoverPlugin:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

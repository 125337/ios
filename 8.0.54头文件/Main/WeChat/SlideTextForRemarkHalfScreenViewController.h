@interface SlideTextForRemarkHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>
{
    WSWebViewPluginScheduler * pluginScheduler; // +0x68
    id /* block */ _doneBlock; // +0x70
    UIButton * _cancelButton; // +0x78
    UIButton * _doneButton; // +0x80
    WSTemplateLogicController * _logicController; // +0x88
    SlideTextJSHandler * _jsHandler; // +0x90
    NSString * _helloMsg; // +0x98
    NSString * _selectedText; // +0xa0
    long long _currentCharLength; // +0xa8
    long long _maxCharLength; // +0xb0
}
- (id)initWithHelloMsg:(id)arg1 currentCharLength:(long long)arg2 maxCharLength:(long long)arg3;
- (void)initPlugin;
- (void)initLogicController;
- (void)viewDidLoad;
- (void)initTopView;
- (void)viewDidLayoutSubviews;
- (void)onDone;
- (void)onSelectedTextChanged:(id)arg1;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)jsHandler;
- (void)setJsHandler:(id)arg1;
- (id)helloMsg;
- (void)setHelloMsg:(id)arg1;
- (id)selectedText;
- (void)setSelectedText:(id)arg1;
- (long long)currentCharLength;
- (void)setCurrentCharLength:(long long)arg1;
- (long long)maxCharLength;
- (void)setMaxCharLength:(long long)arg1;
- (void).cxx_destruct;
@end


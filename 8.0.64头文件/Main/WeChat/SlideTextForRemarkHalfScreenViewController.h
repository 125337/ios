@interface SlideTextForRemarkHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>
{
    BOOL _isInPageSheetMode; // +0x70
    WSWebViewPluginScheduler * pluginScheduler; // +0x78
    MMPageSheetAdapter * _pageSheetAdapter; // +0x80
    id /* block */ _doneBlock; // +0x88
    UIButton * _cancelButton; // +0x90
    UIButton * _doneButton; // +0x98
    WSTemplateLogicController * _logicController; // +0xa0
    SlideTextJSHandler * _jsHandler; // +0xa8
    NSString * _helloMsg; // +0xb0
    NSString * _selectedText; // +0xb8
    long long _currentCharLength; // +0xc0
    long long _maxCharLength; // +0xc8
}
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)onDoneInPageSheetMode:(id)arg1;
- (id)initWithHelloMsg:(id)arg1 currentCharLength:(long long)arg2 maxCharLength:(long long)arg3;
- (void)initPlugin;
- (void)initLogicController;
- (void)viewDidLoad;
- (void)initTopView;
- (void)viewDidLayoutSubviews;
- (void)onDone;
- (void)onSelectedTextChanged:(id)arg1;
- (void)DismissMyselfAnimatedSlideTextForRemark;
- (id)getRightBarButton;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
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

@interface WCFinderSlideTextForRemarkViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>
{
    WSWebViewPluginScheduler * pluginScheduler; // +0x68
    id /* block */ _doneBlock; // +0x70
    NSString * _content; // +0x78
    UIButton * _doneButton; // +0x80
    UIButton * _cancelButton; // +0x88
    UILabel * _topLabel; // +0x90
    WCFinderGuideLinkBubbleView * _guideBubbleView; // +0x98
    WSTemplateLogicController * _logicController; // +0xa0
    SlideTextJSHandler * _jsHandler; // +0xa8
    NSString * _selectedText; // +0xb0
    long long _maxCharLength; // +0xb8
    NSString * _guideIconUrl; // +0xc0
    NSString * _guidePreTips; // +0xc8
    NSString * _finishWording; // +0xd0
    NSString * _topTitle; // +0xd8
    UIScreenEdgePanGestureRecognizer * _popGesture; // +0xe0
    double _guideBubbleMaxWidth; // +0xe8
    WCFinderSlideTextForRemarkVCParams * _params; // +0xf0
    _NSRange _selectedRange; // +0xf8
}
- (id)initWithParams:(id)arg1;
- (void)_baseInit;
- (double)getMaxHalfScreenHeight;
- (BOOL)useTransparentNavibar;
- (BOOL)useCustomNavibar;
- (void)initPlugin;
- (void)initLogicController;
- (void)viewDidLoad;
- (void)setupPopGes;
- (void)handlePopGesture:(id)arg1;
- (void)initTopView;
- (void)initContentView;
- (void)viewDidLayoutSubviews;
- (void)onDone;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onSelectedTextChanged:(id)arg1;
- (void)updateGuideBubbleIconUrl:(id)arg1 content:(id)arg2;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)topLabel;
- (void)setTopLabel:(id)arg1;
- (id)guideBubbleView;
- (void)setGuideBubbleView:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)jsHandler;
- (void)setJsHandler:(id)arg1;
- (id)selectedText;
- (void)setSelectedText:(id)arg1;
- (long long)maxCharLength;
- (void)setMaxCharLength:(long long)arg1;
- (id)guideIconUrl;
- (void)setGuideIconUrl:(id)arg1;
- (id)guidePreTips;
- (void)setGuidePreTips:(id)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)popGesture;
- (void)setPopGesture:(id)arg1;
- (double)guideBubbleMaxWidth;
- (void)setGuideBubbleMaxWidth:(double)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end


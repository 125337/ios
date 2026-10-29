@interface ScanGoodsHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol>
{
    NSString * _reqKey; // +0x70
    WSTemplateLogicController * m_logicController; // +0x78
    ScanGoodsJSHandler * m_jsHandler; // +0x80
    BOOL _hasAddObservers; // +0x88
    BOOL _isBeDismissed; // +0x89
    BOOL _bInNodifyViewTopChanging; // +0x8a
    unsigned int _notifyViewTopChangeCount; // +0x8c
    unsigned int _enterSessionID; // +0x90
    unsigned int _tabSessionID; // +0x94
    unsigned int _scanSessionID; // +0x98
    BOOL _isPreload; // +0x9c
    unsigned int _resultOpenScene; // +0xa0
    MMUIButton * _closeButton; // +0xa8
    UIView * _customView; // +0xb0
    UIView * _customViewSuperView; // +0xb8
    unsigned long long _customViewIndex; // +0xc0
    UIView * _customMaskView; // +0xc8
    UIView * _customMaskSuperView; // +0xd0
    unsigned long long _customMaskIndex; // +0xd8
    WSWebViewPluginScheduler * _pluginScheduler; // +0xe0
    NSString * _detectSessionId; // +0xe8
    CGPoint _customViewPoint; // +0xf0
}
- (id)initWithReqKey:(id)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4;
- (id)initWithReqKey:(id)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4 detectSessionID:(id)arg5 openScene:(unsigned int)arg6 preload:(BOOL)arg7;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)pathForTestTemplate;
- (void)initData;
- (void)initView;
- (BOOL)hidesStatusBar;
- (id)closeButton;
- (void)setupAnimateTransitionBlocks;
- (void)notifyContentViewTopChangeEventStartY:(double)arg1 endY:(double)arg2 timeOnce:(double)arg3 repeatCount:(unsigned int)arg4;
- (BOOL)needCloseOnOrientationChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (void)setCloseButton:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)customViewSuperView;
- (void)setCustomViewSuperView:(id)arg1;
- (CGPoint)customViewPoint;
- (void)setCustomViewPoint:(CGPoint)arg1;
- (unsigned long long)customViewIndex;
- (void)setCustomViewIndex:(unsigned long long)arg1;
- (id)customMaskView;
- (void)setCustomMaskView:(id)arg1;
- (id)customMaskSuperView;
- (void)setCustomMaskSuperView:(id)arg1;
- (unsigned long long)customMaskIndex;
- (void)setCustomMaskIndex:(unsigned long long)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)detectSessionId;
- (void)setDetectSessionId:(id)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (unsigned int)resultOpenScene;
- (void)setResultOpenScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface WSFinderLongVideoContainerView : WSContainerBaseView
{
    BOOL _isCurWSWebView; // +0x8
    BOOL _needCreateContextId; // +0x9
    BOOL _hasAddView; // +0xa
    BOOL _selectedBefore; // +0xb
    BOOL _appearBySelectTab; // +0xc
    UIViewController * _vc; // +0x10
    WSLocalTemplateConfig * _config; // +0x18
    NSString * _curContextId; // +0x20
    unsigned long long _enterTime; // +0x28
    unsigned long long _appearType; // +0x30
    UILongPressGestureRecognizer * _tabLongPressGestureRecognizer; // +0x38
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)_clearContent;
- (void)initViewIfNeed;
- (void)receiveDidEnterBackgroundNotification:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onDidEnterWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (void)checkAddView;
- (void)updateContextId;
- (int)commentScene;
- (void)reportEnter:(unsigned long long)arg1;
- (void)reportEventCode:(long long)arg1;
- (void)reportTabExpose:(unsigned long long)arg1;
- (void)reportTabUnExpose:(BOOL)arg1 isExit:(BOOL)arg2;
- (id)enterQueryDict;
- (void)reportVCExpose:(unsigned long long)arg1;
- (void)reportVCUnexpose:(BOOL)arg1 isExit:(BOOL)arg2;
- (void)onTabSelectStateChangeWithWSExit;
- (void)onTabSelectStateChange:(BOOL)arg1 enterType:(long long)arg2;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isCurWSWebView;
- (void)setIsCurWSWebView:(BOOL)arg1;
- (BOOL)needCreateContextId;
- (void)setNeedCreateContextId:(BOOL)arg1;
- (id)curContextId;
- (void)setCurContextId:(id)arg1;
- (BOOL)hasAddView;
- (void)setHasAddView:(BOOL)arg1;
- (BOOL)selectedBefore;
- (void)setSelectedBefore:(BOOL)arg1;
- (BOOL)appearBySelectTab;
- (void)setAppearBySelectTab:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)appearType;
- (void)setAppearType:(unsigned long long)arg1;
- (id)tabLongPressGestureRecognizer;
- (void)setTabLongPressGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end


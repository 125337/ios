@interface DataReportExposeMonitor : MMUserService <DataReportViewHookExt, MMServiceProtocol>
{
    NSNumber * m_monitorSwitch; // +0x8
    NSHashTable * m_monitorViews; // +0x10
    NSHashTable * m_curExpViews; // +0x18
    NSMapTable * m_monitorViewBlocks; // +0x20
    NSMapTable * m_monitorPageBlocks; // +0x28
    NSMapTable * m_monitorViewToPageMap; // +0x30
    UIViewController * m_curPage; // +0x38
    NSHashTable * m_curSubPages; // +0x40
    double m_lastOffsetX; // +0x48
    double m_lastOffsetY; // +0x50
    unsigned long long m_lastScrollTimeMS; // +0x58
    unsigned long long m_lastRunTaskTimeMS; // +0x60
    double m_statusHeight; // +0x68
    double m_navigationHeight; // +0x70
    double m_screenWidth; // +0x78
    double m_screenHeight; // +0x80
    double m_keyboardHeight; // +0x88
    BOOL m_isForeground; // +0x90
    NSHashTable * m_curDelayExpViews; // +0x98
    NSMapTable * m_delayExpViewsQueue; // +0xa0
    DataReportViewExposeVisiableTools * m_viewExposeVisiableTools; // +0xa8
    NSMutableDictionary * m_countOfViewId; // +0xb0
    NSArray * m_viewExposeLimitWhite; // +0xb8
    NSMutableArray * m_removeViewControllers; // +0xc0
}
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)isOpenMonitor;
- (void)addMonitorView:(id)arg1;
- (void)removeMonitorView:(id)arg1;
- (void)addMonitorView:(id)arg1 exposeBlock:(id /* block */)arg2;
- (void)removeMonitorViewBlock:(id)arg1;
- (void)addMonitorVC:(id)arg1;
- (void)removeMonitorVC:(id)arg1;
- (void)addMonitorVC:(id)arg1 exposeBlock:(id /* block */)arg2;
- (void)removeMonitorVCBlock:(id)arg1;
- (void)addViewDeallocListener:(id)arg1;
- (void)hookUIView:(id)arg1;
- (void)viewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)viewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)appForeground;
- (void)appBackground;
- (void)pageChange:(id)arg1;
- (void)pageRemove:(id)arg1;
- (void)subPageIn:(id)arg1;
- (void)subPageOut:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide;
- (void)onDidMoveToSuperview:(id)arg1;
- (void)onDidMoveToWindow:(id)arg1;
- (void)onBringSubviewToFront:(id)arg1;
- (void)onSendSubviewToBack:(id)arg1;
- (void)onInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)onInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)onSetHidden:(BOOL)arg1 withView:(id)arg2;
- (void)onSetAlpha:(double)arg1 withView:(id)arg2;
- (void)onLayoutSubviews:(id)arg1;
- (void)onRemoveFromSuperview:(id)arg1;
- (void)onWillRemoveSubview:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)postTraverseView:(unsigned long long)arg1 delay:(double)arg2 limitFrequency:(BOOL)arg3;
- (void)forceChangeExpState:(id)arg1 isExp:(BOOL)arg2;
- (void)checkView:(id)arg1 checkType:(unsigned long long)arg2;
- (void)traverseViews:(unsigned long long)arg1;
- (id)getVisiableViews:(id)arg1;
- (BOOL)isViewVisiable:(id)arg1 withCurPage:(id)arg2 withCurSubPages:(id)arg3;
- (BOOL)isNavigationBar:(id)arg1;
- (id)getViewRealisticContainerVCCache:(id)arg1;
- (BOOL)rect:(CGRect)arg1 isInOther:(CGRect)arg2;
- (CGRect)getViewExposeRect:(CGRect)arg1 pageRect:(CGRect)arg2 isNavigationBar:(BOOL)arg3 ignoreKeyboardChange:(BOOL)arg4;
- (double)getViewExposeRate:(CGRect)arg1 originRect:(CGRect)arg2;
- (id)traverseDelayExpViews:(id)arg1 checkType:(unsigned long long)arg2;
- (BOOL)addDelayExpViewsQueue:(id)arg1 checkType:(unsigned long long)arg2 time:(unsigned long long)arg3;
- (void)removeDelayExpViewsQueue:(id)arg1;
- (void)clearDelayExpViewsQueue;
- (void)checkDelayExpViewsQueue;
- (double)getViewExposeMinRate:(id)arg1;
- (unsigned long long)getViewExposeMinTime:(id)arg1;
- (void)setViewExposeVisiableToolsSwitch:(BOOL)arg1;
- (void)clearCountOfViewId;
- (void)statCountOfViewId:(id)arg1;
- (void)clearViewId:(id)arg1;
- (void)removeFirstViewId:(id)arg1;
- (void).cxx_destruct;
@end

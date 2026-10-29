@interface WCBaseControlLogic : MMObject <WCBaseControlLogicDeleagte, MMUIViewControllerExt>
{
    NSMutableArray * m_arrVC; // +0x8
    unsigned int m_uiLogicStatus; // +0x10
    unsigned int m_tag; // +0x14
    unsigned long long m_uiStartedTime; // +0x18
    id <MMUIViewControllerDelegate> m_vcRootDelegate; // +0x20
    id <WCBaseControlLogicDeleagte> m_logicDelegate; // +0x28
    BOOL _useGotoRootViewControllerV2; // +0x30
    BOOL _cancelDimissOrPopAnimation; // +0x31
}
- (id)init;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)startLogic;
- (void)stopLogic;
- (void)removeTopViewController;
- (void)removeFromViewController:(id)arg1;
- (void)addTopViewController:(id)arg1;
- (id)getLogicViewControllers;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startLoading;
- (void)startLoadingWithTip:(id)arg1;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)showLoadingOK:(id)arg1;
- (void)showLoadingOK:(id)arg1 withDelay:(double)arg2;
- (void)showRedesignLoadingOK:(id)arg1;
- (void)checkStopLogic;
- (void)dismissCurrentViewWithAnimated:(BOOL)arg1;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(BOOL)arg1;
- (void)presentViewController:(id)arg1 Animated:(BOOL)arg2 showNavigation:(BOOL)arg3;
- (void)presentViewController:(id)arg1 Animated:(BOOL)arg2 showNavigation:(BOOL)arg3 transitioningDelegate:(id)arg4 forceFullScreen:(BOOL)arg5;
- (void)pushViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)presentViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 Animated:(BOOL)arg2 transitioningDelegate:(id)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(BOOL)arg5 Animation:(BOOL)arg6;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(BOOL)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 Animation:(BOOL)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 showNavigation:(BOOL)arg4 Animation:(BOOL)arg5 forceFullScreen:(BOOL)arg6;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 Animation:(BOOL)arg4 forceFullScreen:(BOOL)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 showNavigation:(BOOL)arg4 Animation:(BOOL)arg5 transitioningDelegate:(id)arg6 forceFullScreen:(BOOL)arg7;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Animation:(BOOL)arg3;
- (void)setViewControllers:(id)arg1 withData:(id)arg2 Animation:(BOOL)arg3;
- (void)gotoRootViewControllerWithAnimated:(BOOL)arg1;
- (void)gotoRootViewControllerWithAnimatedV2:(BOOL)arg1;
- (void)gotoRootViewControllerAndStopLogicWithAnimated:(BOOL)arg1;
- (void)setRootViewControllerDelegate:(id)arg1;
- (void)setlogicDelegate:(id)arg1;
- (id)getCurrentViewController;
- (BOOL)onError:(id)arg1;
- (BOOL)isLogicCompleteOK;
- (BOOL)isLogicCancel;
- (void)gotoLogicFirstViewControllerWithAnimation:(BOOL)arg1;
- (void)dismissCurrentViewWithAnimatedV2:(BOOL)arg1;
- (unsigned int)m_tag;
- (void)setM_tag:(unsigned int)arg1;
- (id)m_vcRootDelegate;
- (id)m_logicDelegate;
- (unsigned long long)m_uiStartedTime;
- (unsigned int)m_uiLogicStatus;
- (void)setM_uiLogicStatus:(unsigned int)arg1;
- (BOOL)useGotoRootViewControllerV2;
- (void)setUseGotoRootViewControllerV2:(BOOL)arg1;
- (BOOL)cancelDimissOrPopAnimation;
- (void)setCancelDimissOrPopAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end


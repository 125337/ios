@interface FullScreenViewController : WCDragToCloseViewController
{
    BOOL m_allowAutorotate; // +0x68
    BOOL _shouldCheckInterfaceOrientations; // +0x69
    id <UIViewControllerTransitioningDelegate> _m_TransitioningDelegate; // +0x70
}
- (void)setM_TransitioningDelegate:(id)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (void)showTransitioningAnimationCompleted;
- (unsigned long long)supportedInterfaceOrientations;
- (void)forwardVideoToFriend:(id)arg1;
- (void)presentedInViewController:(id)arg1 forceFullScreen:(BOOL)arg2 animated:(BOOL)arg3 pushAvaliable:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)m_TransitioningDelegate;
- (BOOL)shouldCheckInterfaceOrientations;
- (void)setShouldCheckInterfaceOrientations:(BOOL)arg1;
- (void).cxx_destruct;
@end


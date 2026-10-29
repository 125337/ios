@interface WCSplitDetailPresentationController : UIPresentationController
{
    BOOL _isChangingSize; // +0x8
    double _primaryWidth; // +0x10
    id <WCSplitDetailPresentationControllerDelegate> _splitDelegate; // +0x18
    id /* block */ _transtionEndHandler; // +0x20
}
- (void)updatePresentedFrame:(CGRect)arg1 displayMode:(long long)arg2;
- (BOOL)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)isInBackground;
- (double)primaryWidth;
- (void)setPrimaryWidth:(double)arg1;
- (id)splitDelegate;
- (void)setSplitDelegate:(id)arg1;
- (BOOL)isChangingSize;
- (void)setIsChangingSize:(BOOL)arg1;
- (id /* block */)transtionEndHandler;
- (void)setTranstionEndHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end


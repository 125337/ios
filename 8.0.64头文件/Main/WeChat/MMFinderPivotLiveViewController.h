@interface MMFinderPivotLiveViewController : MMFinderLiveViewController <MMLiveMorphDismissSource>
{
    BOOL _postponeJoinLive; // +0x70
    BOOL _supressMinimizeWindowAutoupdate; // +0x71
    MMLivePivotItemViewController * _itemController; // +0x78
    id <MMFinderPivotLiveViewControllerDelegate> _pivotLiveVcDelegate; // +0x80
    MMLiveFullScreenTipsView * _privateJoinBlockView; // +0x88
}
- (id)initWithLiveTaskId:(id)arg1;
- (id)liveTask;
- (id)createOperationViewWithTaskId:(id)arg1;
- (void)gotoCompletePageOverride;
- (id)createCompleteViewController;
- (void)showCompleteViewControllerWithoutAnimation;
- (BOOL)shouldSupportInteractiveTransition;
- (void)openShopShelfWithGoods:(id)arg1 extraInfo:(id)arg2 shopSelfParams:(id)arg3;
- (void)onMMFinderLiveShopShelfCloseWithReason:(long long)arg1;
- (void)persistMorphDismissTarget;
- (void)setupMorphDismiss:(BOOL)arg1;
- (id)liveMorphDismissSourceTransitionSnapshotView;
- (id)itemController;
- (void)setItemController:(id)arg1;
- (id)pivotLiveVcDelegate;
- (void)setPivotLiveVcDelegate:(id)arg1;
- (BOOL)postponeJoinLive;
- (void)setPostponeJoinLive:(BOOL)arg1;
- (BOOL)supressMinimizeWindowAutoupdate;
- (void)setSupressMinimizeWindowAutoupdate:(BOOL)arg1;
- (id)privateJoinBlockView;
- (void)setPrivateJoinBlockView:(id)arg1;
- (void).cxx_destruct;
@end

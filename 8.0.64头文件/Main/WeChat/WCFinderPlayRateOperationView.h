@interface WCFinderPlayRateOperationView : UIView
{
    id /* block */ _shownAction; // +0x8
    id /* block */ _dismissAction; // +0x10
    id /* block */ _selectAction; // +0x18
    UIView * _maskBGView; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showOnView:(id)arg1 withVM:(id)arg2;
- (void)onDismiss;
- (void)onReportPlayRateResult:(double)arg1;
- (void)onDismissAction;
- (void)onPlayRate:(id)arg1;
- (void)onShown:(id /* block */)arg1;
- (void)onDismiss:(id /* block */)arg1;
- (void)onSelect:(id /* block */)arg1;
- (BOOL)isInShowingState;
- (void)handleEnterBackgroundEvent;
- (void)addObserver;
- (void)removeObserver;
- (void)onEnterBackground:(id)arg1;
- (void)onResignActive:(id)arg1;
- (id /* block */)shownAction;
- (void)setShownAction:(id /* block */)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (id)maskBGView;
- (void)setMaskBGView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

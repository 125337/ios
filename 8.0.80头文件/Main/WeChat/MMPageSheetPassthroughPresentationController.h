@interface MMPageSheetPassthroughPresentationController : UIPresentationController
{
    id <MMPageSheetPassthroughTransitionDelegate> _passthroughDelegate; // +0x8
    MMPageSheetConfig * _pageSheetConfig; // +0x10
    MMPageSheetPassthroughHostView * _hostView; // +0x18
}
- (BOOL)shouldRemovePresentersView;
- (id)presentedView;
- (id)passthroughHitTestForPoint:(CGPoint)arg1 inHostView:(id)arg2 withEvent:(id)arg3;
- (BOOL)shouldPassthroughPoint:(CGPoint)arg1 inHostView:(id)arg2;
- (id)pageSheetContainer;
- (id)pageSheetContentView;
- (BOOL)isTransferTouchEnabled;
- (id)passthroughDelegate;
- (void)setPassthroughDelegate:(id)arg1;
- (id)pageSheetConfig;
- (void)setPageSheetConfig:(id)arg1;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (void).cxx_destruct;
@end

@interface KindaViewControllerRouteManager : MMUserService <KindaViewControllerRouteActionDelegate, MMServiceProtocol>
{
    NSMutableArray * _routeActions; // +0x8
}
- (id)init;
- (id)previousViewController:(id)arg1;
- (void)DismissOrPopViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)DismissOrPopViewController:(id)arg1 Animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)DismissModalViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)DismissModalViewController:(id)arg1 Animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)PopToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)PopViewControllerAndPush:(id)arg1 animated:(BOOL)arg2;
- (void)closeTinyApp:(id)arg1 animated:(BOOL)arg2;
- (void)closeTinyApp:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)routeActionDidTimeout:(id)arg1;
- (void)addRouteAction:(id)arg1;
- (void)parseNext;
- (id)routeActions;
- (void)setRouteActions:(id)arg1;
- (void).cxx_destruct;
@end


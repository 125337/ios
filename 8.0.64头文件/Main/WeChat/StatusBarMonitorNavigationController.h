@interface StatusBarMonitorNavigationController : MMUINavigationController
{
    BOOL _hasFinished; // +0x8
}
- (void)viewDidLayoutSubviews;
- (BOOL)hasFinished;
- (void)setHasFinished:(BOOL)arg1;
@end

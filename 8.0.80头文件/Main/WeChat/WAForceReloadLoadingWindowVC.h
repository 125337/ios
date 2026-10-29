@interface WAForceReloadLoadingWindowVC : MMWindowViewController
{
    UIView * _backView; // +0x80
    MMLoadingView * _loadingView; // +0x88
    BOOL _needLoading; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)getCurrentScreenShot;
- (void)delayHide:(id)arg1;
- (void)hideWithAnimated:(int)arg1;
- (BOOL)needLoading;
- (void)setNeedLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WAForceReloadLoadingWindowVC : MMWindowViewController
{
    UIView * _backView; // +0x78
    MMLoadingView * _loadingView; // +0x80
    BOOL _needLoading; // +0x88
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


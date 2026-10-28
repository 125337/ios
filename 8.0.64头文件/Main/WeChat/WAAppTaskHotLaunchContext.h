@interface WAAppTaskHotLaunchContext : MMObject
{
    BOOL _redirectPage; // +0x8
    BOOL _keepContextPage; // +0x9
    NSString * _relativeURL; // +0x10
    WAAppTaskExtInfo * _oldTaskExtInfo; // +0x18
    WAAppOpenParameter * _openInfo; // +0x20
    unsigned long long _oldTaskRunningState; // +0x28
    UINavigationController * _presentingNavigationController; // +0x30
    UIViewController * _presentingViewController; // +0x38
}
- (BOOL)redirectPage;
- (void)setRedirectPage:(BOOL)arg1;
- (id)relativeURL;
- (void)setRelativeURL:(id)arg1;
- (id)oldTaskExtInfo;
- (void)setOldTaskExtInfo:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (unsigned long long)oldTaskRunningState;
- (void)setOldTaskRunningState:(unsigned long long)arg1;
- (id)presentingNavigationController;
- (void)setPresentingNavigationController:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (BOOL)keepContextPage;
- (void)setKeepContextPage:(BOOL)arg1;
- (void).cxx_destruct;
@end

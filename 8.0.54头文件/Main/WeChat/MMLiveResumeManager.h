@interface MMLiveResumeManager : MMUserService <MMTipsViewControllerDelegate, MMServiceProtocol>
{
    BOOL _hasCheckedAbnormal; // +0x8
    WCFinderDataItem * _finderDataItem; // +0x10
    UIViewController * _presentingViewController; // +0x18
}
- (void)onServiceInit;
- (void)markFinderLiving;
- (void)unmarkFinderLiving;
- (BOOL)isFinderLiveAbnormal;
- (BOOL)isFinderLiving;
- (void)setIsFinderLiving:(BOOL)arg1;
- (id)lastFinderLivingTime;
- (void)setLastFinderLivingTime:(id)arg1;
- (void)checkAbnormalFinderLiveWithCompletionHandler:(id /* block */)arg1;
- (BOOL)showResumeAlertViewFromViewController:(id)arg1;
- (BOOL)resumeFinderLiveFromViewController:(id)arg1;
- (BOOL)validateFinderDataItem:(id)arg1;
- (BOOL)validatePresentingViewController:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (BOOL)hasCheckedAbnormal;
- (void)setHasCheckedAbnormal:(BOOL)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void).cxx_destruct;
@end


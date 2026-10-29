@interface WAMiniTaskLoadingViewController : MMUIViewController <UIViewControllerTransitioningDelegate>
{
    WAAppTansitionController * m_transitionController; // +0x70
    WAUINavigationController * _weappNav; // +0x78
    UIImageView * _snapShotView; // +0x80
    MinimizeTaskData * _taskData; // +0x88
    MinimizeTaskOpenContext * _openContext; // +0x90
}
- (id)initWithMinimizeTaskKey:(id)arg1 openContext:(id)arg2;
- (void)viewDidLoad;
- (void)setUpSnapShotView;
- (void)viewDidBePresented:(BOOL)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (id)weappNav;
- (void)setWeappNav:(id)arg1;
- (id)snapShotView;
- (void)setSnapShotView:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)openContext;
- (void)setOpenContext:(id)arg1;
- (void).cxx_destruct;
@end

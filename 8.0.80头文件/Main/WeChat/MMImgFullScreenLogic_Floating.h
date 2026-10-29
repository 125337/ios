@interface MMImgFullScreenLogic_Floating : MMImgFullScreenLogic <MinimizationTransitionControllerDelegate>
{
    MiniRecTransitionController * _minimizationTransitionController; // +0x8
    MinimizeContentMenuReportHelper * _helper; // +0x10
    MsgImgMinimizeHandler * _minimizationHandler; // +0x18
}
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)doFloating;
- (void)doAddToMultiFloatingFromTaskData:(id)arg1;
- (id)contentMinimizeTaskData;
- (id)minimizeSnapshot;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (id)minimizationTransitionController;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)helper;
- (void)setHelper:(id)arg1;
- (id)minimizationHandler;
- (void)setMinimizationHandler:(id)arg1;
- (void).cxx_destruct;
@end

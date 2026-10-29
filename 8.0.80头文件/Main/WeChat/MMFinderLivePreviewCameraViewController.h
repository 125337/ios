@interface MMFinderLivePreviewCameraViewController : MMUIViewController <UIGestureRecognizerDelegate, MMLiveBeautyUnifiedOperationPanelDelegate>
{
    MMLiveTaskId * _taskId; // +0x70
    id <MMFinderLivePreviewCameraViewControllerDelegate> _delegate; // +0x78
    UIView * _bgView; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
    MMLiveBeautyUnifiedOperationPanel * _beautyOperationView; // +0x90
    UIView * _activeRenderTargetView; // +0x98
}
- (id)initWithTaskId:(id)arg1 activeRenderTargetView:(id)arg2 delegate:(id)arg3;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)layoutUI;
- (void)onBeautyOperationPanelClosed:(id)arg1;
- (id)liveTask;
- (id)bgView;
- (id)gradientLayer;
- (void)onTapBg;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (id)beautyOperationView;
- (void)setBeautyOperationView:(id)arg1;
- (id)activeRenderTargetView;
- (void)setActiveRenderTargetView:(id)arg1;
- (void).cxx_destruct;
@end

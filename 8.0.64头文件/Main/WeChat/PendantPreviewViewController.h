@interface PendantPreviewViewController : MMUIViewController <PendantPreviewSelectViewDelegate, PendantPreviewLogicDelegate>
{
    BOOL _isInterrupt; // +0x70
    UIImageView * _topMaskView; // +0x78
    UIImageView * _bottomMaskView; // +0x80
    PendantPreviewView * _previewView; // +0x88
    MMUIView * _bottomBarView; // +0x90
    long long _currentType; // +0x98
    PendantPreviewLogic * _logic; // +0xa0
    PendantPreviewSelectView * _selectionView; // +0xa8
    NSString * _pendantUrl; // +0xb0
    PreviewBottomButton * _cameraButton; // +0xb8
    PreviewBottomButton * _sceneButton; // +0xc0
}
- (id)initWithPendantUrl:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)initView;
- (void)onBack;
- (void)onSwitchScene;
- (void)onSwitchCamera;
- (void)onLensPackageLoaded:(id)arg1;
- (void)onLensPackageLoadFail:(id)arg1;
- (void)onPreviewReload:(id)arg1;
- (void)onEffectReloadFinish;
- (void)selectedView:(id)arg1 didSelectedIndex:(long long)arg2;
- (id)selectionView;
- (BOOL)is9x16Screen;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (long long)currentType;
- (void)setCurrentType:(long long)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void)setSelectionView:(id)arg1;
- (id)pendantUrl;
- (void)setPendantUrl:(id)arg1;
- (BOOL)isInterrupt;
- (void)setIsInterrupt:(BOOL)arg1;
- (id)cameraButton;
- (void)setCameraButton:(id)arg1;
- (id)sceneButton;
- (void)setSceneButton:(id)arg1;
- (void).cxx_destruct;
@end

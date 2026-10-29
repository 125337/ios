@interface MMFinderCameraCastingStarterViewController : MMCPUIViewController <IMMFinderLiveCameraCastMgrExt, WCActionSheetDelegate>
{
    id <MMFinderCameraCastingStarterViewControllerDelegate> _delegate; // +0x70
    UIView * _contentView; // +0x78
    MMLiveCameraCastTipView * _cameraCastTipView; // +0x80
    MMUIButton * _miniWindowButton; // +0x88
    WCLiveBottomTextButton * _cameraSwitchButton; // +0x90
    MMLiveTaskId * _liveTaskId; // +0x98
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xa0
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubViews;
- (void)initTopSubViews;
- (void)initBottomSubViews;
- (void)layoutUI;
- (void)layoutTopButtons;
- (void)layoutBottomButtons;
- (id)cameraCastTipView;
- (id)miniWindowButton;
- (id)liveTask;
- (id)cameraSwitchButton;
- (id)topButtonImgNormalColor;
- (id)topButtonImgHighlightColor;
- (id)getMinimizeIconName;
- (id)currentLiveTask;
- (CGRect)getCurrentMainVideoViewFrame;
- (double)getCurrentMainVideoViewMaxY;
- (BOOL)isPortrait;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateSwitchCameraItemDisabled:(BOOL)arg1;
- (void)onClickCameraSwitchAction:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onMiniWindowButtonClicked;
- (void)onCameraCastResult:(long long)arg1 message:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setCameraCastTipView:(id)arg1;
- (void)setMiniWindowButton:(id)arg1;
- (void)setCameraSwitchButton:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (void).cxx_destruct;
@end

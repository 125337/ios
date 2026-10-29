@interface MMFinderLiveAnchorQuickPanelOpenParameter : MMObject
{
    BOOL _showMicSeatSettingButton; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    MMFinderLiveTask * _finderLiveTask; // +0x18
    MMFinderLiveConnectMicUser * _anchorMicUser; // +0x20
    id /* block */ _micSeatSettingActionCallback; // +0x28
    id /* block */ _maximizeOrMinimizeMicAudienceActionCallback; // +0x30
    id /* block */ _beautyActionCallback; // +0x38
    id /* block */ _switchCameraActionCallback; // +0x40
    id /* block */ _viewDidDismissCallback; // +0x48
}
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (id)anchorMicUser;
- (void)setAnchorMicUser:(id)arg1;
- (BOOL)showMicSeatSettingButton;
- (void)setShowMicSeatSettingButton:(BOOL)arg1;
- (id /* block */)micSeatSettingActionCallback;
- (void)setMicSeatSettingActionCallback:(id /* block */)arg1;
- (id /* block */)maximizeOrMinimizeMicAudienceActionCallback;
- (void)setMaximizeOrMinimizeMicAudienceActionCallback:(id /* block */)arg1;
- (id /* block */)beautyActionCallback;
- (void)setBeautyActionCallback:(id /* block */)arg1;
- (id /* block */)switchCameraActionCallback;
- (void)setSwitchCameraActionCallback:(id /* block */)arg1;
- (id /* block */)viewDidDismissCallback;
- (void)setViewDidDismissCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

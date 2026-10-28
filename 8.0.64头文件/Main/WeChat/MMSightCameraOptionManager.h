@interface MMSightCameraOptionManager : NSObject
{
    MMSightCameraAspectRatioOption * _aspectRatioOption; // +0x8
    MMSightCameraBeautifyOption * _beautifyOption; // +0x10
    MMSightCameraFilterOption * _filterOption; // +0x18
    MMSightCameraFlashlightOption * _flashlightOption; // +0x20
    MMSightCameraGridLineOption * _gridLineOption; // +0x28
    MMSightCameraHDROption * _hdrOption; // +0x30
    MMSightCameraNightModeOption * _nightModeOption; // +0x38
    MMSightCameraPortraitModeOption * _portraitModeOption; // +0x40
    MMSightCameraProModeOption * _proModeOption; // +0x48
    MMSightCameraTimerOption * _timerOption; // +0x50
    MMSightCameraZoomerOption * _zoomerOption; // +0x58
    id <MMSightCameraOptionControllerProtocol> _optionController; // +0x60
    NSMutableArray * _allOptionList; // +0x68
    CGRect _containerFrame; // +0x70
}
- (id)initWithContainerFrame:(CGRect)arg1 optionController:(id)arg2;
- (void)updateOptionOrientation:(long long)arg1;
- (void)_iniFortDefaultMode;
- (void)_initForProMode;
- (void)_initFlashlightOptionWithLegacyStyle:(BOOL)arg1;
- (void)_initNightModeOption;
- (void)_initPortraitModeOption;
- (void)_initHDROption;
- (void)_initFilterOption;
- (void)_initBeautifyOption;
- (void)_initAspectRatioOption;
- (void)_initGridLineOption;
- (void)_initTimerOption;
- (void)_initZoomerOption;
- (void)_initProModeOption;
- (id)aspectRatioOption;
- (void)setAspectRatioOption:(id)arg1;
- (id)beautifyOption;
- (void)setBeautifyOption:(id)arg1;
- (id)filterOption;
- (void)setFilterOption:(id)arg1;
- (id)flashlightOption;
- (void)setFlashlightOption:(id)arg1;
- (id)gridLineOption;
- (void)setGridLineOption:(id)arg1;
- (id)hdrOption;
- (void)setHdrOption:(id)arg1;
- (id)nightModeOption;
- (void)setNightModeOption:(id)arg1;
- (id)portraitModeOption;
- (void)setPortraitModeOption:(id)arg1;
- (id)proModeOption;
- (void)setProModeOption:(id)arg1;
- (id)timerOption;
- (void)setTimerOption:(id)arg1;
- (id)zoomerOption;
- (void)setZoomerOption:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)optionController;
- (void)setOptionController:(id)arg1;
- (id)allOptionList;
- (void)setAllOptionList:(id)arg1;
- (void).cxx_destruct;
@end

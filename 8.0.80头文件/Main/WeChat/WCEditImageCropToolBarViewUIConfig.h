@interface WCEditImageCropToolBarViewUIConfig : NSObject
{
    BOOL _createRotateBtn; // +0x8
    BOOL _createCropProportionBtn; // +0x9
    BOOL _deSelectCropProportionAfterReverting; // +0xa
    BOOL _proportionCropAtFirstTime; // +0xb
    BOOL _revertBtnLayoutCenter; // +0xc
    BOOL _useSmallStrongDoneButton; // +0xd
    BOOL _hideCancelButton; // +0xe
}
+ (id)defaultConfig;
- (BOOL)createRotateBtn;
- (void)setCreateRotateBtn:(BOOL)arg1;
- (BOOL)createCropProportionBtn;
- (void)setCreateCropProportionBtn:(BOOL)arg1;
- (BOOL)deSelectCropProportionAfterReverting;
- (void)setDeSelectCropProportionAfterReverting:(BOOL)arg1;
- (BOOL)proportionCropAtFirstTime;
- (void)setProportionCropAtFirstTime:(BOOL)arg1;
- (BOOL)revertBtnLayoutCenter;
- (void)setRevertBtnLayoutCenter:(BOOL)arg1;
- (BOOL)useSmallStrongDoneButton;
- (void)setUseSmallStrongDoneButton:(BOOL)arg1;
- (BOOL)hideCancelButton;
- (void)setHideCancelButton:(BOOL)arg1;
@end

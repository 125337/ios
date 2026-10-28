@interface MJLivePhotoButtonModel : NSObject
{
    BOOL _enableLiveBtn; // +0x8
    BOOL _isShowBtn; // +0x9
    BOOL _addBlurEffect; // +0xa
    BOOL _scaleAnimationEnabled; // +0xb
    unsigned int _blurEffectStyle; // +0xc
    double _paddingX; // +0x10
    double _paddingY; // +0x18
    NSString * _liveIconName; // +0x20
    UIColor * _liveIconColor; // +0x28
    UIFont * _liveLabelFont; // +0x30
    UIColor * _liveLabelTextColor; // +0x38
    NSString * _liveLabelText; // +0x40
    UIColor * _liveBtnBgColor; // +0x48
    CGSize _liveIconSize; // +0x50
    CGSize _liveIconPos; // +0x60
    CGSize _liveLabelPos; // +0x70
    CGSize _liveLabelSize; // +0x80
}
- (id)initWithStyle:(unsigned long long)arg1;
- (BOOL)setupLivePhotoButtonStyle:(unsigned long long)arg1;
- (void)_setupLivePhotoViewOn;
- (void)_setupLivePhotoViewOff;
- (void)_setupLivePhotoViewDisabled;
- (void)_setupLiveViewShow;
- (void)_setupLiveViewPlay;
- (double)paddingX;
- (void)setPaddingX:(double)arg1;
- (double)paddingY;
- (void)setPaddingY:(double)arg1;
- (id)liveIconName;
- (void)setLiveIconName:(id)arg1;
- (id)liveIconColor;
- (void)setLiveIconColor:(id)arg1;
- (CGSize)liveIconSize;
- (void)setLiveIconSize:(CGSize)arg1;
- (CGSize)liveIconPos;
- (void)setLiveIconPos:(CGSize)arg1;
- (id)liveLabelFont;
- (void)setLiveLabelFont:(id)arg1;
- (id)liveLabelTextColor;
- (void)setLiveLabelTextColor:(id)arg1;
- (id)liveLabelText;
- (void)setLiveLabelText:(id)arg1;
- (CGSize)liveLabelPos;
- (void)setLiveLabelPos:(CGSize)arg1;
- (CGSize)liveLabelSize;
- (void)setLiveLabelSize:(CGSize)arg1;
- (id)liveBtnBgColor;
- (void)setLiveBtnBgColor:(id)arg1;
- (BOOL)enableLiveBtn;
- (void)setEnableLiveBtn:(BOOL)arg1;
- (BOOL)isShowBtn;
- (void)setIsShowBtn:(BOOL)arg1;
- (BOOL)addBlurEffect;
- (void)setAddBlurEffect:(BOOL)arg1;
- (unsigned int)blurEffectStyle;
- (void)setBlurEffectStyle:(unsigned int)arg1;
- (BOOL)scaleAnimationEnabled;
- (void)setScaleAnimationEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface MJLivePhotoButtonModel : NSObject
{
    BOOL _enableLiveBtn; // +0x8
    BOOL _isShowBtn; // +0x9
    BOOL _addBlurEffect; // +0xa
    BOOL _scaleAnimationEnabled; // +0xb
    unsigned int _blurEffectStyle; // +0xc
    double _paddingX; // +0x10
    double _paddingRight; // +0x18
    double _paddingY; // +0x20
    NSString * _liveIconName; // +0x28
    UIColor * _liveIconColor; // +0x30
    double _liveIconCornerRadius; // +0x38
    UIImage * _liveIconImage; // +0x40
    double _liveIconBorderWidth; // +0x48
    UIColor * _liveIconBorderColor; // +0x50
    UIFont * _liveLabelFont; // +0x58
    UIColor * _liveLabelTextColor; // +0x60
    NSString * _liveLabelText; // +0x68
    UIColor * _liveBtnBgColor; // +0x70
    CGSize _liveIconSize; // +0x78
    CGSize _liveIconPos; // +0x88
    CGSize _liveLabelPos; // +0x98
    CGSize _liveLabelSize; // +0xa8
}
- (id)initWithStyle:(unsigned long long)arg1;
- (BOOL)setupLivePhotoButtonStyle:(unsigned long long)arg1;
- (void)_setupLivePhotoUnselect;
- (void)_setupLivePhotoSelect;
- (void)_setupLivePhotoViewOn;
- (void)_setupLivePhotoViewOff;
- (void)_setupLivePhotoViewDisabled;
- (void)_setupLiveViewShow;
- (void)_setupLiveViewPlay;
- (void)setUpButtonPadding;
- (double)paddingX;
- (void)setPaddingX:(double)arg1;
- (double)paddingRight;
- (void)setPaddingRight:(double)arg1;
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
- (double)liveIconCornerRadius;
- (void)setLiveIconCornerRadius:(double)arg1;
- (id)liveIconImage;
- (void)setLiveIconImage:(id)arg1;
- (double)liveIconBorderWidth;
- (void)setLiveIconBorderWidth:(double)arg1;
- (id)liveIconBorderColor;
- (void)setLiveIconBorderColor:(id)arg1;
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

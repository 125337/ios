@interface MMLiveKtvThemeItem : NSObject
{
    NSString * _themeId; // +0x8
    NSString * _previewThumbnailUri; // +0x10
    UIColor * _colorA; // +0x18
    UIColor * _colorB; // +0x20
    MMLiveKtvThemeResource * _ambientAnimation; // +0x28
    MMLiveKtvThemeResource * _ambientAnimationFallbackImage; // +0x30
    MMLiveKtvThemeResource * _bottomButtonIcon; // +0x38
    MMLiveKtvThemeResource * _centerIcon; // +0x40
    MMLiveKtvThemeResource * _goodAnimation; // +0x48
    MMLiveKtvThemeResource * _perfectAnimation; // +0x50
    NSArray * _allResources; // +0x58
}
+ (id)themeItemWithResource:(id)arg1;
- (id)allResources;
- (id)createResourcesPinningToken;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (id)previewThumbnailUri;
- (void)setPreviewThumbnailUri:(id)arg1;
- (id)colorA;
- (void)setColorA:(id)arg1;
- (id)colorB;
- (void)setColorB:(id)arg1;
- (id)ambientAnimation;
- (void)setAmbientAnimation:(id)arg1;
- (id)ambientAnimationFallbackImage;
- (void)setAmbientAnimationFallbackImage:(id)arg1;
- (id)bottomButtonIcon;
- (void)setBottomButtonIcon:(id)arg1;
- (id)centerIcon;
- (void)setCenterIcon:(id)arg1;
- (id)goodAnimation;
- (void)setGoodAnimation:(id)arg1;
- (id)perfectAnimation;
- (void)setPerfectAnimation:(id)arg1;
- (void)setAllResources:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveGestureInfo : NSObject
{
    NSString * _gestureId; // +0x8
    double _maxRotationAngleInRadius; // +0x10
    double _renderScale; // +0x18
    UIColor * _overlayTextStrokeColor; // +0x20
    NSString * _colorIconPath; // +0x28
    NSString * _darkModeMonochromeIconPath; // +0x30
    NSString * _lightModeMonochromeIconPath; // +0x38
    NSString * _hintIconPath; // +0x40
    NSString * _luaScriptPath; // +0x48
    NSString * _primaryPagPath; // +0x50
    NSString * _giftingPagPath; // +0x58
    NSString * _primaryWeVisionRenderLuaPath; // +0x60
    NSString * _giftingWeVisionRenderLuaPath; // +0x68
    NSString * _soundEffectPath; // +0x70
    FinderLiveGestureInfo * _gestureInfo; // +0x78
    NSString * _resourceBasePath; // +0x80
    NSString * _iconBasePath; // +0x88
    NSString * _hintIconBasePath; // +0x90
    NSString * _anchorResourceBasePath; // +0x98
    NSString * _renderingResourceBasePath; // +0xa0
    NSString * _downloadTempPath; // +0xa8
    id _resourceDownloader; // +0xb0
    CGPoint _overlayTextRelativeCenter; // +0xb8
}
+ (void)clearResourcesForGestureWithId:(unsigned int)arg1;
+ (void)clearResourcesForGestureWithIdStr:(id)arg1;
+ (id)gestureInfoWithModel:(id)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (BOOL)resourcesDifferentFromUpdateDirective:(id)arg1;
- (void)loadResourcesWithCompletionBlock:(id /* block */)arg1;
- (BOOL)validateResources;
- (void)clearResources;
- (id)initWithGestureInfo:(id)arg1;
- (unsigned int)version;
- (id)name;
- (id)hintText;
- (id)giftingHintText;
- (double)minRenderSize;
- (unsigned long long)renderMode;
- (unsigned long long)overlayTextFontSize;
- (double)overlayTextAppearTime;
- (double)overlayTextDisappearTime;
- (unsigned long long)minSdkVersion;
- (unsigned long long)maxSdkVersion;
- (BOOL)luaSupported;
- (unsigned int)displayOrder;
- (id)stub;
- (id)archivedWCTValue;
- (id)gestureId;
- (void)setGestureId:(id)arg1;
- (double)maxRotationAngleInRadius;
- (void)setMaxRotationAngleInRadius:(double)arg1;
- (double)renderScale;
- (void)setRenderScale:(double)arg1;
- (id)overlayTextStrokeColor;
- (void)setOverlayTextStrokeColor:(id)arg1;
- (CGPoint)overlayTextRelativeCenter;
- (void)setOverlayTextRelativeCenter:(CGPoint)arg1;
- (id)colorIconPath;
- (void)setColorIconPath:(id)arg1;
- (id)darkModeMonochromeIconPath;
- (void)setDarkModeMonochromeIconPath:(id)arg1;
- (id)lightModeMonochromeIconPath;
- (void)setLightModeMonochromeIconPath:(id)arg1;
- (id)hintIconPath;
- (void)setHintIconPath:(id)arg1;
- (id)luaScriptPath;
- (void)setLuaScriptPath:(id)arg1;
- (id)primaryPagPath;
- (void)setPrimaryPagPath:(id)arg1;
- (id)giftingPagPath;
- (void)setGiftingPagPath:(id)arg1;
- (id)primaryWeVisionRenderLuaPath;
- (void)setPrimaryWeVisionRenderLuaPath:(id)arg1;
- (id)giftingWeVisionRenderLuaPath;
- (void)setGiftingWeVisionRenderLuaPath:(id)arg1;
- (id)soundEffectPath;
- (void)setSoundEffectPath:(id)arg1;
- (id)gestureInfo;
- (void)setGestureInfo:(id)arg1;
- (id)resourceBasePath;
- (void)setResourceBasePath:(id)arg1;
- (id)iconBasePath;
- (void)setIconBasePath:(id)arg1;
- (id)hintIconBasePath;
- (void)setHintIconBasePath:(id)arg1;
- (id)anchorResourceBasePath;
- (void)setAnchorResourceBasePath:(id)arg1;
- (id)renderingResourceBasePath;
- (void)setRenderingResourceBasePath:(id)arg1;
- (id)downloadTempPath;
- (void)setDownloadTempPath:(id)arg1;
- (id)resourceDownloader;
- (void)setResourceDownloader:(id)arg1;
- (void).cxx_destruct;
@end


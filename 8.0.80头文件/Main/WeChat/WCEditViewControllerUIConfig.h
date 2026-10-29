@interface WCEditViewControllerUIConfig : NSObject
{
    BOOL _contentDisplayFrameAdaptsToBounds; // +0x8
    BOOL _canAdjustImageEditZoomMinVal; // +0x9
    BOOL _inputTextAlignCenter; // +0xa
    BOOL _keepCenterWhenSmallerThanScreen; // +0xb
    BOOL _scaleWhenCrop; // +0xc
    BOOL _clipContentToBrightFrame; // +0xd
    BOOL _imageAspectFitInContentDisplayFrame; // +0xe
    BOOL _editTextMenuCanChangeLine; // +0xf
    BOOL _textWidgetForceFillScreenWidth; // +0x10
    BOOL _useEmotionStyleColor; // +0x11
    BOOL _hideTextEdit; // +0x12
    BOOL _isBottomBarLaunchMiaoJianBtnEnabled; // +0x13
    BOOL _centerWidgetDeleteBarInContentDisplayFrame; // +0x14
    NSString * _finishButtonWording; // +0x18
    double _bottomBarMidY; // +0x20
    NSArray * _customVideoBottomButtonOrder; // +0x28
    NSArray * _customImageBottomButtonOrder; // +0x30
    WCEditImageCropToolBarViewUIConfig * _cropBarConfig; // +0x38
    NSArray * _textStyleOrders; // +0x40
    NSString * _firstShowCropTips; // +0x48
    NSString * _timeCropBtnText; // +0x50
    unsigned long long _launchMiaoJianAppScene; // +0x58
    long long _launchMiaoJianAppLaunchType; // +0x60
    NSString * _launchMiaoJianBtnReportViewId; // +0x68
    unsigned long long _launchMiaoJianBtnReportLogId; // +0x70
    unsigned long long _launchMiaoJianBtnReportPolicy; // +0x78
    NSDictionary * _launchMiaoJianBtnReportParams; // +0x80
    CGPoint _widgetInitialPosition; // +0x88
    CGRect _contentDisplayFrame; // +0x98
}
+ (id)configForEmotionEditWithContentDisplayFrame:(CGRect)arg1 isCropTimeOnly:(BOOL)arg2 keepCenter:(BOOL)arg3 clipContentToBrightFrame:(BOOL)arg4;
+ (id)configForEmotionEditWithContentDisplayFrame:(CGRect)arg1;
+ (id)configForEmotionEditWithContentDisplayFrame:(CGRect)arg1 keepCenter:(BOOL)arg2;
+ (CGRect)calculateEmotionEditContentDisplayFrameWithViewW:(double)arg1 height:(double)arg2 imageSize:(CGSize)arg3;
- (BOOL)bottomBarMidYIsValid;
- (BOOL)contentDisplayFrameIsValid;
- (BOOL)forceSetWidgetDeleteBarToScreedBottom;
- (BOOL)widgetInitialPositionIsValid;
- (id)description;
- (id)finishButtonWording;
- (void)setFinishButtonWording:(id)arg1;
- (double)bottomBarMidY;
- (void)setBottomBarMidY:(double)arg1;
- (CGRect)contentDisplayFrame;
- (void)setContentDisplayFrame:(CGRect)arg1;
- (BOOL)contentDisplayFrameAdaptsToBounds;
- (void)setContentDisplayFrameAdaptsToBounds:(BOOL)arg1;
- (BOOL)canAdjustImageEditZoomMinVal;
- (void)setCanAdjustImageEditZoomMinVal:(BOOL)arg1;
- (CGPoint)widgetInitialPosition;
- (void)setWidgetInitialPosition:(CGPoint)arg1;
- (BOOL)inputTextAlignCenter;
- (void)setInputTextAlignCenter:(BOOL)arg1;
- (BOOL)keepCenterWhenSmallerThanScreen;
- (void)setKeepCenterWhenSmallerThanScreen:(BOOL)arg1;
- (BOOL)scaleWhenCrop;
- (void)setScaleWhenCrop:(BOOL)arg1;
- (BOOL)clipContentToBrightFrame;
- (void)setClipContentToBrightFrame:(BOOL)arg1;
- (id)customVideoBottomButtonOrder;
- (void)setCustomVideoBottomButtonOrder:(id)arg1;
- (id)customImageBottomButtonOrder;
- (void)setCustomImageBottomButtonOrder:(id)arg1;
- (BOOL)imageAspectFitInContentDisplayFrame;
- (void)setImageAspectFitInContentDisplayFrame:(BOOL)arg1;
- (id)cropBarConfig;
- (void)setCropBarConfig:(id)arg1;
- (id)textStyleOrders;
- (void)setTextStyleOrders:(id)arg1;
- (BOOL)editTextMenuCanChangeLine;
- (void)setEditTextMenuCanChangeLine:(BOOL)arg1;
- (BOOL)textWidgetForceFillScreenWidth;
- (void)setTextWidgetForceFillScreenWidth:(BOOL)arg1;
- (BOOL)useEmotionStyleColor;
- (void)setUseEmotionStyleColor:(BOOL)arg1;
- (BOOL)hideTextEdit;
- (void)setHideTextEdit:(BOOL)arg1;
- (id)firstShowCropTips;
- (void)setFirstShowCropTips:(id)arg1;
- (id)timeCropBtnText;
- (void)setTimeCropBtnText:(id)arg1;
- (BOOL)isBottomBarLaunchMiaoJianBtnEnabled;
- (void)setIsBottomBarLaunchMiaoJianBtnEnabled:(BOOL)arg1;
- (unsigned long long)launchMiaoJianAppScene;
- (void)setLaunchMiaoJianAppScene:(unsigned long long)arg1;
- (long long)launchMiaoJianAppLaunchType;
- (void)setLaunchMiaoJianAppLaunchType:(long long)arg1;
- (id)launchMiaoJianBtnReportViewId;
- (void)setLaunchMiaoJianBtnReportViewId:(id)arg1;
- (unsigned long long)launchMiaoJianBtnReportLogId;
- (void)setLaunchMiaoJianBtnReportLogId:(unsigned long long)arg1;
- (unsigned long long)launchMiaoJianBtnReportPolicy;
- (void)setLaunchMiaoJianBtnReportPolicy:(unsigned long long)arg1;
- (id)launchMiaoJianBtnReportParams;
- (void)setLaunchMiaoJianBtnReportParams:(id)arg1;
- (BOOL)centerWidgetDeleteBarInContentDisplayFrame;
- (void)setCenterWidgetDeleteBarInContentDisplayFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WCEditViewControllerUIConfig : NSObject
{
    BOOL _canAdjustImageEditZoomMinVal; // +0x8
    BOOL _inputTextAlignCenter; // +0x9
    BOOL _imageAspectFitInContentDisplayFrame; // +0xa
    BOOL _editTextMenuCanChangeLine; // +0xb
    BOOL _textWidgetForceFillScreenWidth; // +0xc
    BOOL _useEmotionStyleColor; // +0xd
    BOOL _hideTextEdit; // +0xe
    BOOL _isBottomBarLaunchMiaoJianBtnEnabled; // +0xf
    NSString * _finishButtonWording; // +0x10
    double _bottomBarMidY; // +0x18
    NSArray * _customVideoBottomButtonOrder; // +0x20
    NSArray * _customImageBottomButtonOrder; // +0x28
    WCEditImageCropToolBarViewUIConfig * _cropBarConfig; // +0x30
    NSArray * _textStyleOrders; // +0x38
    NSString * _firstShowCropTips; // +0x40
    NSString * _timeCropBtnText; // +0x48
    unsigned long long _launchMiaoJianAppScene; // +0x50
    long long _launchMiaoJianAppLaunchType; // +0x58
    NSString * _launchMiaoJianBtnReportViewId; // +0x60
    unsigned long long _launchMiaoJianBtnReportLogId; // +0x68
    unsigned long long _launchMiaoJianBtnReportPolicy; // +0x70
    NSDictionary * _launchMiaoJianBtnReportParams; // +0x78
    CGPoint _widgetInitialPosition; // +0x80
    CGRect _contentDisplayFrame; // +0x90
}
+ (id)configForEmotionEditWithContentDisplayFrame:(CGRect)arg1 isCropTimeOnly:(BOOL)arg2;
+ (id)configForEmotionEditWithContentDisplayFrame:(CGRect)arg1;
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
- (BOOL)canAdjustImageEditZoomMinVal;
- (void)setCanAdjustImageEditZoomMinVal:(BOOL)arg1;
- (CGPoint)widgetInitialPosition;
- (void)setWidgetInitialPosition:(CGPoint)arg1;
- (BOOL)inputTextAlignCenter;
- (void)setInputTextAlignCenter:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

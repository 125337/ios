@interface TXYHyInnerConfig : NSObject
{
    BOOL _isRecordVideo; // +0x8
    BOOL _isCutVideo; // +0x9
    BOOL _isDeleteVideoCache; // +0xa
    BOOL _isEncrypt; // +0xb
    BOOL _isShowDialog; // +0xc
    BOOL _isForbidAnima; // +0xd
    BOOL _isUseBackCamera; // +0xe
    BOOL _isEntireHighlight; // +0xf
    BOOL _isEnableEarlyPreview; // +0x10
    BOOL _isAutoScreenBrightness; // +0x11
    BOOL _needLog; // +0x12
    BOOL _disableDarkMode; // +0x13
    BOOL _disableSystemRecordScreen; // +0x14
    BOOL _isOpenLightReflectAnim; // +0x15
    BOOL _isHideFrontCircleViewOnStart; // +0x16
    BOOL _isHideFrontCircleViewOnCheck; // +0x17
    BOOL _isHideFrontCircleViewOnReflect; // +0x18
    BOOL _isHideAvatarGuideFrame; // +0x19
    BOOL _isBaseMode; // +0x1a
    BOOL _isHiddenNavbarOriginal; // +0x1b
    BOOL _isOpenAudio; // +0x1c
    BOOL _keepAuthView; // +0x1d
    int _limitPkgSize; // +0x20
    int _showTimeOutMode; // +0x24
    TXYHyInnerPubConfig * _pubConfig; // +0x28
    TXYHyInnerOverConfig * _overConfig; // +0x30
    long long _cutVideoDuration; // +0x38
    NSString * _authLicense; // +0x40
    unsigned long long _encryptModel; // +0x48
    unsigned long long _cameraPreset; // +0x50
    unsigned long long _languageType; // +0x58
    id <HuiYanInnerDelegate> _delegate; // +0x60
    long long _prepareTimeoutMs; // +0x68
    long long _actionTimeoutMs; // +0x70
    NSString * _userLanguageFileName; // +0x78
    UIColor * _feedBackErrorColor; // +0x80
    UIColor * _feedBackTxtColor; // +0x88
    UIColor * _authCircleErrorColor; // +0x90
    UIColor * _authCircleCorrectColor; // +0x98
    UIColor * _authLayoutBgColor; // +0xa0
    UIColor * _authBackButtonColor; // +0xa8
    UIColor * _authTimeoutLabelColor; // +0xb0
    UIFont * _feedBackTxtFont; // +0xb8
    UIFont * _feedbackExtraTxtFont; // +0xc0
    long long _sdkKitModel; // +0xc8
    NSArray * _actionArr; // +0xd0
    unsigned long long _zoomType; // +0xd8
    NSString * _riskLicense; // +0xe0
    double _longCheckBestImageQuality; // +0xe8
    NSString * _huiyanSdkUIBundlePath; // +0xf0
    NSString * _userUIBundlePath; // +0xf8
    NSString * _languageBundlePath; // +0x100
    NSString * _faceTrackerBundlePath; // +0x108
    long long _statusBarStyle; // +0x110
    long long _bitRate; // +0x118
    long long _frameRate; // +0x120
    NSString * _audioBundlePath; // +0x128
}
- (id)init;
- (id)pubConfig;
- (void)setPubConfig:(id)arg1;
- (id)overConfig;
- (void)setOverConfig:(id)arg1;
- (BOOL)isRecordVideo;
- (void)setIsRecordVideo:(BOOL)arg1;
- (BOOL)isCutVideo;
- (void)setIsCutVideo:(BOOL)arg1;
- (long long)cutVideoDuration;
- (void)setCutVideoDuration:(long long)arg1;
- (BOOL)isDeleteVideoCache;
- (void)setIsDeleteVideoCache:(BOOL)arg1;
- (id)authLicense;
- (void)setAuthLicense:(id)arg1;
- (BOOL)isEncrypt;
- (void)setIsEncrypt:(BOOL)arg1;
- (unsigned long long)encryptModel;
- (void)setEncryptModel:(unsigned long long)arg1;
- (unsigned long long)cameraPreset;
- (void)setCameraPreset:(unsigned long long)arg1;
- (unsigned long long)languageType;
- (void)setLanguageType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)prepareTimeoutMs;
- (void)setPrepareTimeoutMs:(long long)arg1;
- (long long)actionTimeoutMs;
- (void)setActionTimeoutMs:(long long)arg1;
- (id)userLanguageFileName;
- (void)setUserLanguageFileName:(id)arg1;
- (id)feedBackErrorColor;
- (void)setFeedBackErrorColor:(id)arg1;
- (id)feedBackTxtColor;
- (void)setFeedBackTxtColor:(id)arg1;
- (id)authCircleErrorColor;
- (void)setAuthCircleErrorColor:(id)arg1;
- (id)authCircleCorrectColor;
- (void)setAuthCircleCorrectColor:(id)arg1;
- (id)authLayoutBgColor;
- (void)setAuthLayoutBgColor:(id)arg1;
- (id)authBackButtonColor;
- (void)setAuthBackButtonColor:(id)arg1;
- (id)authTimeoutLabelColor;
- (void)setAuthTimeoutLabelColor:(id)arg1;
- (id)feedBackTxtFont;
- (void)setFeedBackTxtFont:(id)arg1;
- (id)feedbackExtraTxtFont;
- (void)setFeedbackExtraTxtFont:(id)arg1;
- (BOOL)isShowDialog;
- (void)setIsShowDialog:(BOOL)arg1;
- (BOOL)isForbidAnima;
- (void)setIsForbidAnima:(BOOL)arg1;
- (BOOL)isUseBackCamera;
- (void)setIsUseBackCamera:(BOOL)arg1;
- (int)limitPkgSize;
- (void)setLimitPkgSize:(int)arg1;
- (long long)sdkKitModel;
- (void)setSdkKitModel:(long long)arg1;
- (id)actionArr;
- (void)setActionArr:(id)arg1;
- (unsigned long long)zoomType;
- (void)setZoomType:(unsigned long long)arg1;
- (BOOL)isEntireHighlight;
- (void)setIsEntireHighlight:(BOOL)arg1;
- (BOOL)isEnableEarlyPreview;
- (void)setIsEnableEarlyPreview:(BOOL)arg1;
- (BOOL)isAutoScreenBrightness;
- (void)setIsAutoScreenBrightness:(BOOL)arg1;
- (id)riskLicense;
- (void)setRiskLicense:(id)arg1;
- (int)showTimeOutMode;
- (void)setShowTimeOutMode:(int)arg1;
- (BOOL)needLog;
- (void)setNeedLog:(BOOL)arg1;
- (BOOL)disableDarkMode;
- (void)setDisableDarkMode:(BOOL)arg1;
- (BOOL)disableSystemRecordScreen;
- (void)setDisableSystemRecordScreen:(BOOL)arg1;
- (double)longCheckBestImageQuality;
- (void)setLongCheckBestImageQuality:(double)arg1;
- (BOOL)isOpenLightReflectAnim;
- (void)setIsOpenLightReflectAnim:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnStart;
- (void)setIsHideFrontCircleViewOnStart:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnCheck;
- (void)setIsHideFrontCircleViewOnCheck:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnReflect;
- (void)setIsHideFrontCircleViewOnReflect:(BOOL)arg1;
- (BOOL)isHideAvatarGuideFrame;
- (void)setIsHideAvatarGuideFrame:(BOOL)arg1;
- (id)huiyanSdkUIBundlePath;
- (void)setHuiyanSdkUIBundlePath:(id)arg1;
- (id)userUIBundlePath;
- (void)setUserUIBundlePath:(id)arg1;
- (id)languageBundlePath;
- (void)setLanguageBundlePath:(id)arg1;
- (id)faceTrackerBundlePath;
- (void)setFaceTrackerBundlePath:(id)arg1;
- (long long)statusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)bitRate;
- (void)setBitRate:(long long)arg1;
- (long long)frameRate;
- (void)setFrameRate:(long long)arg1;
- (BOOL)isBaseMode;
- (void)setIsBaseMode:(BOOL)arg1;
- (BOOL)isHiddenNavbarOriginal;
- (void)setIsHiddenNavbarOriginal:(BOOL)arg1;
- (BOOL)isOpenAudio;
- (void)setIsOpenAudio:(BOOL)arg1;
- (id)audioBundlePath;
- (void)setAudioBundlePath:(id)arg1;
- (BOOL)keepAuthView;
- (void)setKeepAuthView:(BOOL)arg1;
- (void).cxx_destruct;
@end

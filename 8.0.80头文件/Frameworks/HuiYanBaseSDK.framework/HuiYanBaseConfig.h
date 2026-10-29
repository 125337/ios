@interface HuiYanBaseConfig : NSObject
{
    BOOL _isRecordVideo; // +0x8
    BOOL _isCutVideo; // +0x9
    BOOL _isDeleteVideoCache; // +0xa
    BOOL _isEncrypt; // +0xb
    BOOL _isShowDialog; // +0xc
    BOOL _isForbidAnima; // +0xd
    BOOL _needLog; // +0xe
    BOOL _isHideAvatarGuideFrame; // +0xf
    BOOL _isOpenAudio; // +0x10
    BOOL _keepAuthView; // +0x11
    BOOL _isOpenLightReflectAnim; // +0x12
    BOOL _isHideFrontCircleViewOnStart; // +0x13
    BOOL _isHideFrontCircleViewOnCheck; // +0x14
    BOOL _isHideFrontCircleViewOnReflect; // +0x15
    BOOL _isEnableEarlyPreview; // +0x16
    NSString * _authLicense; // +0x18
    unsigned long long _encryptModel; // +0x20
    unsigned long long _cameraPreset; // +0x28
    unsigned long long _languageType; // +0x30
    id <HuiYanBaseDelegate> _delegate; // +0x38
    long long _prepareTimeoutMs; // +0x40
    long long _actionTimeoutMs; // +0x48
    NSString * _userLanguageFileName; // +0x50
    UIColor * _feedBackErrorColor; // +0x58
    UIColor * _feedBackTxtColor; // +0x60
    UIColor * _authCircleErrorColor; // +0x68
    UIColor * _authCircleCorrectColor; // +0x70
    UIColor * _authLayoutBgColor; // +0x78
    UIColor * _authBackButtonColor; // +0x80
    UIColor * _authTimeoutLabelColor; // +0x88
    UIFont * _feedBackTxtFont; // +0x90
    UIFont * _feedbackExtraTxtFont; // +0x98
    long long _sdkKitModel; // +0xa0
    NSString * _huiyanSdkUIBundlePath; // +0xa8
    NSString * _userUIBundlePath; // +0xb0
    NSString * _languageBundlePath; // +0xb8
    NSString * _faceTrackerBundlePath; // +0xc0
}
- (id)init;
- (BOOL)isRecordVideo;
- (void)setIsRecordVideo:(BOOL)arg1;
- (BOOL)isCutVideo;
- (void)setIsCutVideo:(BOOL)arg1;
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
- (long long)sdkKitModel;
- (void)setSdkKitModel:(long long)arg1;
- (BOOL)needLog;
- (void)setNeedLog:(BOOL)arg1;
- (id)huiyanSdkUIBundlePath;
- (void)setHuiyanSdkUIBundlePath:(id)arg1;
- (id)userUIBundlePath;
- (void)setUserUIBundlePath:(id)arg1;
- (id)languageBundlePath;
- (void)setLanguageBundlePath:(id)arg1;
- (id)faceTrackerBundlePath;
- (void)setFaceTrackerBundlePath:(id)arg1;
- (BOOL)isHideAvatarGuideFrame;
- (void)setIsHideAvatarGuideFrame:(BOOL)arg1;
- (BOOL)isOpenAudio;
- (void)setIsOpenAudio:(BOOL)arg1;
- (BOOL)keepAuthView;
- (void)setKeepAuthView:(BOOL)arg1;
- (BOOL)isOpenLightReflectAnim;
- (void)setIsOpenLightReflectAnim:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnStart;
- (void)setIsHideFrontCircleViewOnStart:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnCheck;
- (void)setIsHideFrontCircleViewOnCheck:(BOOL)arg1;
- (BOOL)isHideFrontCircleViewOnReflect;
- (void)setIsHideFrontCircleViewOnReflect:(BOOL)arg1;
- (BOOL)isEnableEarlyPreview;
- (void)setIsEnableEarlyPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end

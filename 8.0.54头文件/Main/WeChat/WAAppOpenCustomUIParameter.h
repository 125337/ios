@interface WAAppOpenCustomUIParameter : MMObject
{
    BOOL _m_bHideSimulatedNativeLeftReturnButton; // +0x8
    BOOL _m_bForceLightMode; // +0x9
    BOOL _m_bUseSimulatedNativeLoading; // +0xa
    BOOL _m_bNeedShowTemplateNav; // +0xb
    BOOL _m_bNeedHideTemplateNavOnExpand; // +0xc
    BOOL _m_bNeedShowShareBtnOnTemplateNav; // +0xd
    BOOL _m_bTemplateNavShareNormalWeAppMessage; // +0xe
    BOOL _m_bHideTemplateNavAvatar; // +0xf
    BOOL _noLaunchAnimation; // +0x10
    BOOL _needDoubleCheckContactTransparentBackgroundEnabled; // +0x11
    BOOL _forbidEntryAnimation; // +0x12
    BOOL _keepContextView; // +0x13
    BOOL _keepContextPageInCycleJump; // +0x14
    BOOL _m_forbidDefaultLoadingToast; // +0x15
    unsigned long long _m_uiLaunchAnimationType; // +0x18
    id /* block */ _m_shareBtnAction; // +0x20
    NSString * _m_oTmeplateNavAvartarUrl; // +0x28
    NSString * _m_oTemplateNavNickName; // +0x30
    NSString * _m_nsTemplateNavSubtitle; // +0x38
    long long _m_restoreOrientationOnDismiss; // +0x40
    MMUIViewController * _m_loadingToastVC; // +0x48
    unsigned long long _loadingDarkmodeSpecificType; // +0x50
    UIColor * _loadingBackgroundColor; // +0x58
    UIColor * _loadingForegroundTextColor; // +0x60
    NSMutableArray * _widgetParameters; // +0x68
    NSString * _m_liteGameLoadingParameters; // +0x70
}
- (unsigned long long)m_uiLaunchAnimationType;
- (void)setM_uiLaunchAnimationType:(unsigned long long)arg1;
- (BOOL)m_bHideSimulatedNativeLeftReturnButton;
- (void)setM_bHideSimulatedNativeLeftReturnButton:(BOOL)arg1;
- (BOOL)m_bForceLightMode;
- (void)setM_bForceLightMode:(BOOL)arg1;
- (BOOL)m_bUseSimulatedNativeLoading;
- (void)setM_bUseSimulatedNativeLoading:(BOOL)arg1;
- (BOOL)m_bNeedShowTemplateNav;
- (void)setM_bNeedShowTemplateNav:(BOOL)arg1;
- (BOOL)m_bNeedHideTemplateNavOnExpand;
- (void)setM_bNeedHideTemplateNavOnExpand:(BOOL)arg1;
- (BOOL)m_bNeedShowShareBtnOnTemplateNav;
- (void)setM_bNeedShowShareBtnOnTemplateNav:(BOOL)arg1;
- (id /* block */)m_shareBtnAction;
- (void)setM_shareBtnAction:(id /* block */)arg1;
- (BOOL)m_bTemplateNavShareNormalWeAppMessage;
- (void)setM_bTemplateNavShareNormalWeAppMessage:(BOOL)arg1;
- (id)m_oTmeplateNavAvartarUrl;
- (void)setM_oTmeplateNavAvartarUrl:(id)arg1;
- (BOOL)m_bHideTemplateNavAvatar;
- (void)setM_bHideTemplateNavAvatar:(BOOL)arg1;
- (id)m_oTemplateNavNickName;
- (void)setM_oTemplateNavNickName:(id)arg1;
- (id)m_nsTemplateNavSubtitle;
- (void)setM_nsTemplateNavSubtitle:(id)arg1;
- (long long)m_restoreOrientationOnDismiss;
- (void)setM_restoreOrientationOnDismiss:(long long)arg1;
- (BOOL)noLaunchAnimation;
- (void)setNoLaunchAnimation:(BOOL)arg1;
- (BOOL)needDoubleCheckContactTransparentBackgroundEnabled;
- (void)setNeedDoubleCheckContactTransparentBackgroundEnabled:(BOOL)arg1;
- (BOOL)forbidEntryAnimation;
- (void)setForbidEntryAnimation:(BOOL)arg1;
- (BOOL)keepContextView;
- (void)setKeepContextView:(BOOL)arg1;
- (BOOL)keepContextPageInCycleJump;
- (void)setKeepContextPageInCycleJump:(BOOL)arg1;
- (BOOL)m_forbidDefaultLoadingToast;
- (void)setM_forbidDefaultLoadingToast:(BOOL)arg1;
- (id)m_loadingToastVC;
- (void)setM_loadingToastVC:(id)arg1;
- (unsigned long long)loadingDarkmodeSpecificType;
- (void)setLoadingDarkmodeSpecificType:(unsigned long long)arg1;
- (id)loadingBackgroundColor;
- (void)setLoadingBackgroundColor:(id)arg1;
- (id)loadingForegroundTextColor;
- (void)setLoadingForegroundTextColor:(id)arg1;
- (id)widgetParameters;
- (void)setWidgetParameters:(id)arg1;
- (id)m_liteGameLoadingParameters;
- (void)setM_liteGameLoadingParameters:(id)arg1;
- (void).cxx_destruct;
@end


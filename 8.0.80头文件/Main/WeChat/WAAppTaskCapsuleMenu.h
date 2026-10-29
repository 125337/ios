@interface WAAppTaskCapsuleMenu : MMObject <WACapsuleViewDelegate>
{
    BOOL _hidden; // +0x8
    BOOL _needAdaptIpad; // +0x9
    BOOL _enableDarkMode; // +0xa
    BOOL _freezesMenuType; // +0xb
    BOOL _isSecondaryCapsule; // +0xc
    BOOL _isGame; // +0xd
    BOOL _isMiniTool; // +0xe
    unsigned long long _menuType; // +0x10
    id <WACapsuleMenuDelegate> _delegate; // +0x18
    long long _menuStyle; // +0x20
    MMUIView * _view; // +0x28
    WAAppTaskCapsuleBannerInfo * _bannerInfo; // +0x30
    WAAppTaskCapsuleMenu * _secondaryCapsuleMenu; // +0x38
    WACapsuleView * _capsuleView; // +0x40
    WAAppTaskCapsuleButton * _singleCloseButton; // +0x48
    WAAppTaskCapsuleButton * _expandButton; // +0x50
    WAAppTaskCapsuleButton * _agentDetailCloseButton; // +0x58
    CGRect _frame; // +0x60
    CGRect _capsuleStyleFrame; // +0x80
}
- (id)initWithIsGame:(BOOL)arg1;
- (id)initWithIsGame:(BOOL)arg1 appServiceType:(unsigned int)arg2;
- (id)init;
- (void)initView;
- (void)initMenuView;
- (void)setFrame:(CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMenuState:(long long)arg1;
- (void)configMenuWithUIParameter:(id)arg1;
- (long long)menuState;
- (void)setMenuStyle:(long long)arg1;
- (void)showBanner;
- (BOOL)bannerExsist;
- (void)configWeAppSdkBrandTips;
- (void)configThirdBusiTipsText:(id)arg1 iconUrl:(id)arg2;
- (void)configLowScoreBanner:(BOOL)arg1;
- (void)configDishRecommendBanner:(id)arg1 iconUrl:(id)arg2 darkModeIconUrl:(id)arg3;
- (BOOL)configJSAPIBanner:(id)arg1 iconImage:(id)arg2 iconUrl:(id)arg3 darkModeIconUrl:(id)arg4 type:(unsigned long long)arg5 fallbackTexts:(id)arg6;
- (id)pickSingleLineText:(id)arg1 fallbackTexts:(id)arg2 hasIcon:(BOOL)arg3;
- (void)showMenuAgentButton;
- (void)showAgentBannerWithText:(id)arg1;
- (void)setAgentRedDotCount:(unsigned long long)arg1;
- (void)configAppServiceType:(unsigned int)arg1;
- (id)getCapsuleView;
- (double)capsuleWidth;
- (double)capsuleHeight;
- (id)menuTransButton;
- (id)menuAgentButton;
- (id)menuMoreButton;
- (id)menuExitButton;
- (id)menuSingleCloseButton;
- (id)menuExpandButton;
- (void)setNeedAdaptIpad:(BOOL)arg1;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (void)capsuleViewOnClickTranslate:(id)arg1;
- (void)capsuleViewOnClickTranslateDoing:(id)arg1;
- (void)capsuleViewOnClickMore:(id)arg1;
- (void)capsuleViewOnClickExit:(id)arg1;
- (void)capsuleViewOnLongPressMore:(id)arg1;
- (void)capsuleViewOnLongPressExit:(id)arg1;
- (void)capsuleViewOnClickExpand:(id)arg1;
- (void)capsuleViewOnMutationChange:(id)arg1 action:(unsigned long long)arg2;
- (void)capsuleViewOnMenuAgentTipsButtonAdded;
- (void)capsuleViewOnMenuAgentTipsButtonChanged:(BOOL)arg1;
- (void)capsuleViewOnClickAgentTips:(id)arg1;
- (BOOL)shouldShowAgentButton;
- (id)getCurrentWebView;
- (void)setMenuType:(unsigned long long)arg1;
- (void)menuTypeDidUpdate;
- (void)menuStyleDidUpdate;
- (void)updateSingleCloseButtonBackgroundColor;
- (void)updateExpandButtonBackgroundColor;
- (void)updateCapsuleButtonBackgroundColor:(id)arg1 svgName:(id)arg2;
- (id)borderColor;
- (id)capsuleBackgroundColor:(BOOL)arg1;
- (void)initSingleCloseButton;
- (void)initExpandButton;
- (void)onSingleCloseButton:(id)arg1;
- (void)onExpandButton:(id)arg1;
- (void)layoutSingleCloseButton;
- (void)layoutExpandButton;
- (void)initAgentDetailCloseButton;
- (void)layoutAgentDetailCloseButton;
- (void)updateAgentDetailCloseButtonIcon;
- (id)menuAgentDetailCloseButton;
- (unsigned long long)menuType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)menuStyle;
- (id)view;
- (void)setView:(id)arg1;
- (CGRect)frame;
- (BOOL)hidden;
- (BOOL)needAdaptIpad;
- (BOOL)enableDarkMode;
- (void)setEnableDarkMode:(BOOL)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)secondaryCapsuleMenu;
- (void)setSecondaryCapsuleMenu:(id)arg1;
- (BOOL)freezesMenuType;
- (void)setFreezesMenuType:(BOOL)arg1;
- (BOOL)isSecondaryCapsule;
- (void)setIsSecondaryCapsule:(BOOL)arg1;
- (CGRect)capsuleStyleFrame;
- (id)capsuleView;
- (void)setCapsuleView:(id)arg1;
- (id)singleCloseButton;
- (void)setSingleCloseButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)agentDetailCloseButton;
- (void)setAgentDetailCloseButton:(id)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (BOOL)isMiniTool;
- (void)setIsMiniTool:(BOOL)arg1;
- (void).cxx_destruct;
@end

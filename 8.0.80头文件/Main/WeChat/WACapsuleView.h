@interface WACapsuleView : MMUIView
{
    UILongPressGestureRecognizer * _longPressRecognizer; // +0x8
    UILongPressGestureRecognizer * _moreLongPressRecognizer; // +0x10
    BOOL _isTrigerMoreLongPress; // +0x18
    double _lastSystemNavigationBarHeight; // +0x20
    BOOL _needAdaptIpad; // +0x28
    BOOL _specializedAgentSheetActive; // +0x29
    BOOL _startShowingAgentButton; // +0x2a
    BOOL _currentIsInAgentPage; // +0x2b
    BOOL _agentBannerCreatedButton; // +0x2c
    BOOL _agentBannerShowing; // +0x2d
    unsigned int _appServiceType; // +0x30
    id <WACapsuleViewDelegate> _delegate; // +0x38
    long long _navMode; // +0x40
    long long _menuState; // +0x48
    double _scale; // +0x50
    long long _pageTranslateState; // +0x58
    long long _translateState; // +0x60
    unsigned long long _bannerStage; // +0x68
    NSMutableDictionary * _bannerInfoDic; // +0x70
    unsigned long long _currentBannerType; // +0x78
    WACapsuleButton * _menuTransButton; // +0x80
    WACapsuleButton * _menuMoreButton; // +0x88
    WACapsuleButton * _menuExitButton; // +0x90
    WACapsuleButton * _menuAgentButton; // +0x98
    NSString * _customIconUrl; // +0xa0
    NSString * _customDarkIconUrl; // +0xa8
    NSString * _customText; // +0xb0
    WAAppTaskCapsuleBannerInfo * _bannerInfo; // +0xb8
    WCSequentialActionRunner * _sequentialAction; // +0xc0
    MMUIView * _menuView; // +0xc8
    NSTimer * _capsuleTimer; // +0xd0
    PAGView * _minitoolPagView; // +0xd8
    UIView * _agentRedDotView; // +0xe0
    UILabel * _agentRedDotCountLabel; // +0xe8
    unsigned long long _agentRedDotCount; // +0xf0
}
+ (id)getBannerPriorityArray;
+ (id)genBannerPriorityArray;
+ (id)getTailBannerArray;
+ (id)genTailBannerArray;
+ (BOOL)shouldUseSmallMenu;
+ (CGSize)menuSize;
+ (double)bannerMaxWidth;
+ (double)bannerMaxWidthForContainerWidth:(double)arg1;
+ (double)bannerMaxWidthForView:(id)arg1;
+ (id)contentColor:(long long)arg1;
- (void)checkBannerData;
- (id)initWithNavMode:(long long)arg1;
- (void)dealloc;
- (void)setHidden:(BOOL)arg1;
- (void)updateMenuViewWitNavMode:(long long)arg1;
- (void)configMenuIconUrl:(id)arg1 iconUrlInDarkMode:(id)arg2 text:(id)arg3;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (id)webview;
- (void)setMenuState:(long long)arg1;
- (void)resetMenuState;
- (void)fsmenu_updateContent;
- (void)setExpendTouchInsets:(UIEdgeInsets)arg1;
- (void)resetMenuViewIcon;
- (double)getCapsuleWidth;
- (double)getCapsuleHeight;
- (double)capsuleButtonWidthWithScale:(double)arg1;
- (void)setPageTranslateState:(long long)arg1;
- (void)setTranslateState:(long long)arg1;
- (void)doTranslateBannerAnimation;
- (void)showTranslateButtonAnim;
- (void)hideTranslateButtonAnim;
- (void)delayToNextTranslateState:(long long)arg1 interval:(double)arg2;
- (void)cancelCapsuleTimer;
- (void)setTranslateButtonIcon:(id)arg1 size:(double)arg2 text:(id)arg3;
- (void)updateTranslateButtonBackground;
- (void)setTranslateButtonIconGray:(BOOL)arg1;
- (void)updateMenuTransButtonColor;
- (void)rollTranslateButton;
- (void)fastForwardAnimation;
- (void)startShowAgentButton;
- (BOOL)isMiniTool;
- (BOOL)useMiniToolVoiceBubbleEntry;
- (void)prepareAgentButtonHiddenForInAgentPage;
- (void)setAgentTipsButton;
- (void)applyMinitoolAgentIconOnlyLayout;
- (id)createMinitoolAgentIconView;
- (void)updateAgentRedDotCount:(unsigned long long)arg1;
- (void)updateAgentRedDot;
- (void)setupAgentRedDotView;
- (double)agentRedDotWidth;
- (id)agentRedDotCountText;
- (BOOL)hasAgentButton;
- (void)showAgentButtonIfNeed;
- (void)showAgentButton;
- (void)hideAgentButton;
- (void)collapseAgentButtonImmediately;
- (void)showAgentButtonAnim;
- (void)hideAgentButtonAnim;
- (void)showAgentBannerWithText:(id)arg1;
- (void)hideAgentBanner;
- (void)setupMinitoolAgentEntry;
- (void)setupMinitoolAgentEntryInternal;
- (void)setupAgentEntryImmediately;
- (void)startMinitoolAgentAnimation;
- (void)hideTranslateButtonAnimImmediately;
- (void)updateAgentButtonBackground;
- (void)changeMenuStateToNormal;
- (void)changeMenuStateToLocation;
- (void)changeMenuStateToBackgroundLocation;
- (void)changeMenuStateToRecordingVoice;
- (void)changeMenuStateToRecordingVideo;
- (void)changeMenuStateToCamera;
- (void)changeMenuStateToCommentScore;
- (void)changeMenuStateToLibsCustom;
- (void)changeMenuStateWithIcon:(id)arg1 AccessbilityLabel:(id)arg2;
- (void)changeMenuStateWithIconView:(id)arg1 iconSubtext:(id)arg2 accessbilityLabel:(id)arg3 flash:(BOOL)arg4;
- (void)flashMoreButton;
- (void)configTranslateTipsBannerInfo:(BOOL)arg1;
- (void)configBannerInfo:(id)arg1;
- (BOOL)configBannerInfoForJSAPI:(id)arg1;
- (void)clearBannerInfo;
- (id)currentBannerInfo;
- (void)showBanner;
- (void)updateBannerQueue;
- (void)onConfigBannerTimeout;
- (void)startBannerAnimation:(id)arg1;
- (void)hideBanner;
- (void)setAnimationShowed:(unsigned long long)arg1;
- (void)layoutMenuView:(id)arg1;
- (id)translateTipButtonIcon;
- (id)translateDoingButtonIcon;
- (id)translateDoneButtonIcon;
- (id)moreButtonIcon;
- (id)exitButtonIcon;
- (id)agentTipsButtonIcon;
- (void)setSpecializedAgentSheetActive:(BOOL)arg1;
- (id)videoRecordStateIconName;
- (id)POIStateIconName;
- (id)POIBackgroundStateIconName;
- (id)voiceRecordStateIconName;
- (id)getIconNameForCurrentNavMode:(id)arg1;
- (id)getIconNameForCurrentNavMode:(id)arg1 HighLight:(BOOL)arg2;
- (void)onTraslate;
- (void)onTraslateDoing;
- (void)onMore;
- (void)onExit;
- (void)onCapsuleViewMutationChange:(unsigned long long)arg1;
- (void)onMenuAgentTipsButtonAdded;
- (void)onMenuAgentTipsButtonChanged:(BOOL)arg1;
- (void)onClickAgentTips;
- (BOOL)shouldShowAgentButton;
- (void)updateMenuView:(BOOL)arg1;
- (BOOL)bannerExsist;
- (id)genMenuView:(BOOL)arg1;
- (id)getMenuTransButton;
- (id)getMenuAgentButton;
- (id)getMenuMoreButton;
- (id)getMenuExitButton;
- (id)capsuleBackgroundColor:(BOOL)arg1;
- (id)borderColor;
- (void)onLongPressExitItem:(id)arg1;
- (void)onLongPressMoreItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)navMode;
- (void)setNavMode:(long long)arg1;
- (long long)menuState;
- (BOOL)needAdaptIpad;
- (void)setNeedAdaptIpad:(BOOL)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (long long)pageTranslateState;
- (long long)translateState;
- (BOOL)specializedAgentSheetActive;
- (unsigned long long)bannerStage;
- (void)setBannerStage:(unsigned long long)arg1;
- (id)bannerInfoDic;
- (void)setBannerInfoDic:(id)arg1;
- (unsigned long long)currentBannerType;
- (void)setCurrentBannerType:(unsigned long long)arg1;
- (id)menuTransButton;
- (void)setMenuTransButton:(id)arg1;
- (id)menuMoreButton;
- (void)setMenuMoreButton:(id)arg1;
- (id)menuExitButton;
- (void)setMenuExitButton:(id)arg1;
- (id)menuAgentButton;
- (void)setMenuAgentButton:(id)arg1;
- (id)customIconUrl;
- (void)setCustomIconUrl:(id)arg1;
- (id)customDarkIconUrl;
- (void)setCustomDarkIconUrl:(id)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)sequentialAction;
- (void)setSequentialAction:(id)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)capsuleTimer;
- (void)setCapsuleTimer:(id)arg1;
- (BOOL)startShowingAgentButton;
- (void)setStartShowingAgentButton:(BOOL)arg1;
- (BOOL)currentIsInAgentPage;
- (void)setCurrentIsInAgentPage:(BOOL)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (id)minitoolPagView;
- (void)setMinitoolPagView:(id)arg1;
- (BOOL)agentBannerCreatedButton;
- (void)setAgentBannerCreatedButton:(BOOL)arg1;
- (BOOL)agentBannerShowing;
- (void)setAgentBannerShowing:(BOOL)arg1;
- (id)agentRedDotView;
- (void)setAgentRedDotView:(id)arg1;
- (id)agentRedDotCountLabel;
- (void)setAgentRedDotCountLabel:(id)arg1;
- (unsigned long long)agentRedDotCount;
- (void)setAgentRedDotCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

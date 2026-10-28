@interface WACapsuleView : MMUIView
{
    UILongPressGestureRecognizer * _longPressRecognizer; // +0x8
    UILongPressGestureRecognizer * _moreLongPressRecognizer; // +0x10
    BOOL _isTrigerMoreLongPress; // +0x18
    double _lastSystemNavigationBarHeight; // +0x20
    BOOL _needAdaptIpad; // +0x28
    id <WACapsuleViewDelegate> _delegate; // +0x30
    long long _navMode; // +0x38
    long long _menuState; // +0x40
    long long _pageTranslateState; // +0x48
    long long _translateState; // +0x50
    WACapsuleButton * _menuTransButton; // +0x58
    WACapsuleButton * _menuMoreButton; // +0x60
    WACapsuleButton * _menuExitButton; // +0x68
    NSString * _customIconUrl; // +0x70
    NSString * _customDarkIconUrl; // +0x78
    NSString * _customText; // +0x80
    WAAppTaskCapsuleBannerInfo * _waitingBannerInfo; // +0x88
    WAAppTaskCapsuleBannerInfo * _bannerInfo; // +0x90
    double _scale; // +0x98
    WCSequentialActionRunner * _sequentialAction; // +0xa0
    MMUIView * _menuView; // +0xa8
    NSTimer * _capsuleTimer; // +0xb0
}
+ (BOOL)shouldUseSmallMenu;
+ (CGSize)menuSize;
+ (double)bannerMaxWidth;
+ (id)contentColor:(long long)arg1;
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
- (void)showBanner:(id)arg1;
- (void)hideBanner;
- (id)translateTipButtonIcon;
- (id)translateDoingButtonIcon;
- (id)translateDoneButtonIcon;
- (id)moreButtonIcon;
- (id)exitButtonIcon;
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
- (void)updateMenuView:(BOOL)arg1;
- (BOOL)bannerExsist;
- (id)genMenuView:(BOOL)arg1;
- (id)getMenuTransButton;
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
- (long long)pageTranslateState;
- (long long)translateState;
- (id)menuTransButton;
- (void)setMenuTransButton:(id)arg1;
- (id)menuMoreButton;
- (void)setMenuMoreButton:(id)arg1;
- (id)menuExitButton;
- (void)setMenuExitButton:(id)arg1;
- (id)customIconUrl;
- (void)setCustomIconUrl:(id)arg1;
- (id)customDarkIconUrl;
- (void)setCustomDarkIconUrl:(id)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (id)waitingBannerInfo;
- (void)setWaitingBannerInfo:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)sequentialAction;
- (void)setSequentialAction:(id)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)capsuleTimer;
- (void)setCapsuleTimer:(id)arg1;
- (void).cxx_destruct;
@end

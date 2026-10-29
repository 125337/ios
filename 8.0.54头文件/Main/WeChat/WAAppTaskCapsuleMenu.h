@interface WAAppTaskCapsuleMenu : MMObject <WACapsuleViewDelegate>
{
    BOOL _hidden; // +0x8
    BOOL _needAdaptIpad; // +0x9
    BOOL _enableDarkMode; // +0xa
    BOOL _isGame; // +0xb
    unsigned long long _menuType; // +0x10
    id <WACapsuleMenuDelegate> _delegate; // +0x18
    long long _menuStyle; // +0x20
    MMUIView * _view; // +0x28
    WACapsuleView * _capsuleView; // +0x30
    WAAppTaskCapsuleButton * _singleCloseButton; // +0x38
    WAAppTaskCapsuleButton * _expandButton; // +0x40
    NSString * _bannerText; // +0x48
    CGRect _frame; // +0x50
}
- (id)initWithIsGame:(BOOL)arg1;
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
- (void)configThirdBusiTipsText:(id)arg1;
- (id)getCapsuleView;
- (double)capsuleWidth;
- (double)capsuleHeight;
- (id)menuTransButton;
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
- (id)getCurrentWebView;
- (void)setMenuType:(unsigned long long)arg1;
- (void)menuTypeDidUpdate;
- (void)menuStyleDidUpdate;
- (void)updateSingleCloseButtonBackgroundColor;
- (void)updateExpandButtonBackgroundColor;
- (void)updateCapsuleButtonBackgroundColor:(id)arg1 svgName:(id)arg2;
- (void)initSingleCloseButton;
- (void)initExpandButton;
- (void)onSingleCloseButton:(id)arg1;
- (void)onExpandButton:(id)arg1;
- (void)layoutSingleCloseButton;
- (void)layoutExpandButton;
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
- (id)capsuleView;
- (void)setCapsuleView:(id)arg1;
- (id)singleCloseButton;
- (void)setSingleCloseButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg1;
- (id)bannerText;
- (void)setBannerText:(id)arg1;
- (void).cxx_destruct;
@end


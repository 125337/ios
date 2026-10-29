@interface WCActionSheet : MMUIWindow <UIGestureRecognizerDelegate, IUiUtilExt>
{
    BOOL _shouldHide; // +0x8
    BOOL _shortIntervalLine; // +0x9
    BOOL _isDismiss; // +0xa
    BOOL _shouldRelease; // +0xb
    BOOL _hasSeplineButton; // +0xc
    NSString * _cancelButtonTitle; // +0x10
    NSMutableArray * _buttonTitleList; // +0x18
    UIView * _pannelView; // +0x20
    UIView * _titleView; // +0x28
    UIView * _customHeadView; // +0x30
    UIView * _backgroundView; // +0x38
    UIScrollView * _containerView; // +0x40
    id <WCActionSheetDelegate> _delegateEx; // +0x48
    NSString * _title; // +0x50
    long long _destructiveButtonIndex; // +0x58
    long long _firstOtherButtonIndex; // +0x60
    long long _cancelButtonIndex; // +0x68
    long long _m_lastOrientation; // +0x70
    UIColor * _cancelBtnTextColor; // +0x78
    unsigned long long _numberOfButtons; // +0x80
    UIView * _customView; // +0x88
    id _userInfo; // +0x90
    id /* block */ _cancelEventAction; // +0x98
    long long _titleNumberOfLines; // +0xa0
    unsigned long long _preferOrientationMask; // +0xa8
    UIView * _fixedHeaderView; // +0xb0
    double _currSceneWidth; // +0xb8
}
+ (id)getCurrentShowingActionSheet;
+ (long long)getActionSheetWidth;
+ (long long)getActionSheetWidthFor:(id)arg1;
- (id)getActionSheetName;
- (void)setActionSheetName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (double)getHeightOfItem:(id)arg1;
- (double)getHeightOfTitle:(id)arg1;
- (void)setupRootViewController;
- (void)onTopBarFrameChanged;
- (void)onMainWindowFrameChanged;
- (void)shouldHideOnRotate;
- (void)setFrame:(CGRect)arg1;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)onWindowSceneSizeChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (long long)addDestructiveButtonWithTitle:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1 eventAction:(id /* block */)arg2;
- (long long)addIconViewWithTitle:(id)arg1 iconImage:(id)arg2 eventAction:(id /* block */)arg3;
- (long long)addDestructiveButtonWithTitle:(id)arg1 eventAction:(id /* block */)arg2;
- (long long)setCancelButtonTitle:(id)arg1 eventAction:(id /* block */)arg2;
- (long long)addButtonWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)addButtonWithItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(UIEdgeInsets)arg3 TitleEdgeInsets:(UIEdgeInsets)arg4;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(UIEdgeInsets)arg3 TitleEdgeInsets:(UIEdgeInsets)arg4 ContentEdgeInsets:(UIEdgeInsets)arg5;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(UIEdgeInsets)arg3 TitleEdgeInsets:(UIEdgeInsets)arg4 AccessibilityTraits:(unsigned long long)arg5;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2;
- (void)removeSeplineButton;
- (unsigned long long)numberOfButtonsExcludingCancelButton;
- (unsigned long long)numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)firstOtherButtonIndex;
- (long long)cancelButtonIndex;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)destructiveButtonIndex;
- (void)setDestructiveButtonIndex:(long long)arg1;
- (void)setCancelButtonTextColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)showInView:(id)arg1;
- (void)appendButtonTitle:(id)arg1 atIndex:(int)arg2;
- (void)replaceOldTitle:(id)arg1 toNewTitle:(id)arg2 isCustom:(BOOL)arg3;
- (long long)addCustomViewWithTitle:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(double)arg5 descFontColor:(id)arg6 enable:(BOOL)arg7;
- (long long)addCustomViewWithItem:(id)arg1;
- (void)setPreferOrientationMask:(unsigned long long)arg1;
- (long long)actionSheetWidth;
- (double)maxHeightForTitleView;
- (double)heightOfWholeSheet;
- (double)heightOfWholeSheetExceptTitleView;
- (double)containerViewOriginXInIphone;
- (id)makeItemViewWithItem:(id)arg1;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (id)getCustomHeadView;
- (id)makeTitleViewWithTitle:(id)arg1;
- (id)makePannelViewWithButtonList:(id)arg1 withCancelButtonTitle:(id)arg2;
- (id)genGrayBarView;
- (id)containerViewBackgroundColor;
- (id)titleViewBackgroundColor;
- (id)sepBarBackgroundColor;
- (id)seperateLineBackgroundColor;
- (id)titleLabelTextColor;
- (id)buttonBackgroundColor;
- (id)buttonHighlightedBackgroundColor;
- (id)defaultButtonTitleColor;
- (id)cancelButtonTitleColor;
- (id)destructiveButtonTitleColor;
- (id)makeNormalView:(id)arg1;
- (id)makeCustomView:(id)arg1;
- (id)makeBadgeViewByRedDotInfo:(id)arg1;
- (void)placeBadgeView:(id)arg1 AfterTitle:(id)arg2;
- (void)reloadInnerView;
- (double)getCustomView:(double)arg1;
- (id)getFixedHeaderViewInWidth:(double)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)arg1;
- (void)tapOut:(id)arg1;
- (void)addTapRecognizer;
- (void)OnDefaultButtonTapped:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)addSubViewToContainerView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isContainButtonTitle:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)buttonTitleList;
- (void)setButtonTitleList:(id)arg1;
- (id)pannelView;
- (void)setPannelView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)customHeadView;
- (void)setCustomHeadView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)delegateEx;
- (void)setDelegateEx:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setFirstOtherButtonIndex:(long long)arg1;
- (long long)m_lastOrientation;
- (void)setM_lastOrientation:(long long)arg1;
- (BOOL)shouldHide;
- (void)setShouldHide:(BOOL)arg1;
- (id)cancelBtnTextColor;
- (void)setCancelBtnTextColor:(id)arg1;
- (void)setNumberOfButtons:(unsigned long long)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)shortIntervalLine;
- (void)setShortIntervalLine:(BOOL)arg1;
- (id /* block */)cancelEventAction;
- (void)setCancelEventAction:(id /* block */)arg1;
- (long long)titleNumberOfLines;
- (void)setTitleNumberOfLines:(long long)arg1;
- (unsigned long long)preferOrientationMask;
- (BOOL)isDismiss;
- (void)setIsDismiss:(BOOL)arg1;
- (id)fixedHeaderView;
- (void)setFixedHeaderView:(id)arg1;
- (BOOL)shouldRelease;
- (void)setShouldRelease:(BOOL)arg1;
- (BOOL)hasSeplineButton;
- (void)setHasSeplineButton:(BOOL)arg1;
- (double)currSceneWidth;
- (void)setCurrSceneWidth:(double)arg1;
- (void).cxx_destruct;
@end


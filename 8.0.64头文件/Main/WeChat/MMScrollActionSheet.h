@interface MMScrollActionSheet : UIView <RecentForwardScrollViewDelegate, MMScrollActionSheetItemViewDelegate, IUiUtilExt, MMSceneDelegateExt, UIScrollViewDelegate, UIPopoverPresentationControllerDelegate, MMActionSheetScrollViewDelegate, IWCRichTextLabelDelegate, MiniTaskUIMgrExt, MMScrollActionSheetContainerViewDelegate>
{
    BOOL _moveRight; // +0x8
    double _moveRightHeightItv; // +0x10
    BOOL _landscapeValid; // +0x18
    double _topRowOffsetY; // +0x20
    double _layoutOffsetY; // +0x28
    double _layoutWidth; // +0x30
    UIViewController * _popoverControllerNew; // +0x38
    BOOL _isConstraintByParent; // +0x40
    BOOL _landscapeMoveRight; // +0x41
    BOOL _dismissSelfAtClickItem; // +0x42
    BOOL _isShowed; // +0x43
    BOOL _displayTopRightArrow; // +0x44
    BOOL _isChangeFooterView; // +0x45
    unsigned int _landscapeStyle; // +0x48
    NSArray * _itemArray; // +0x50
    NSString * _descriptionTitle; // +0x58
    NSString * _descriptionSub; // +0x60
    NSString * _cancelTitle; // +0x68
    NSArray * _bottomDataAry; // +0x70
    UIImage * _topIconDefault; // +0x78
    NSString * _topIconUrl; // +0x80
    NSString * _topTitle; // +0x88
    NSString * _topTitleSub; // +0x90
    NSString * _topTitleDesc; // +0x98
    NSNumber * _topTitleLabelAlpha; // +0xa0
    NSString * _centerTopTitle; // +0xa8
    UIImage * _topRightImage; // +0xb0
    NSString * _topRightWording; // +0xb8
    UIColor * _topRightBgColor; // +0xc0
    id <MMScrollActionSheetDelegate> _delegate; // +0xc8
    NSArray * _tagsArray; // +0xd0
    id _userInfo; // +0xd8
    UIFont * _topTitleFont; // +0xe0
    UIView * _displayDragBarView; // +0xe8
    UIView * _recentForwardScrollView; // +0xf0
    UIView * _transparentView; // +0xf8
    MMScrollActionSheetContainerView * _containerView; // +0x100
    UIView * _bottomPaddingView; // +0x108
    MMUILabel * _titleLabel; // +0x110
    MMUILabel<IWCRichTextLabelProtocol> * _subtitleLabel; // +0x118
    id <IWCUIKitRichTextProxyService> _richTextProxy; // +0x120
    UIButton * _cancelButton; // +0x128
    MMWebImageView * _topIconView; // +0x130
    MMUILabel * _topTitleLabel; // +0x138
    MMUILabel * _topTitleSubLabel; // +0x140
    MMUILabel * _topTitleDescLabel; // +0x148
    MMUILabel * _centerTopTitleLabel; // +0x150
    UIImageView * _topArrowView; // +0x158
    MMUIButton * _topButton; // +0x160
    UIView * _topSeperatorView; // +0x168
    UIView * _topPrivacyView; // +0x170
    WCTagsView * _tagsView; // +0x178
    UIView * _topRightView; // +0x180
    NSMutableArray * _rowScrollViewArray; // +0x188
    NSMutableArray * _seperatorViewArray; // +0x190
    NSMutableArray * _bottomButtonArray; // +0x198
    NSMutableArray * _bottomSeperatorArray; // +0x1a0
    UIView * _bodyFooterViewSeperatorView; // +0x1a8
    UIView * _bodyFooterView2SeperatorView; // +0x1b0
    id _rotationNotification; // +0x1b8
    UIView * _fromView; // +0x1c0
}
+ (double)containerWidth;
+ (double)itemDisplayWidth;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setHeaderView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)relayoutView;
- (void)setBodyFooterView:(id)arg1;
- (void)setBodyFooterView2:(id)arg1;
- (void)setTopRowOffsetWhenNonTitle:(double)arg1;
- (id)transparentView;
- (id)containerView;
- (id)bottomPaddingView;
- (id)titleLabel;
- (id)tagsView;
- (id)subtitleLabel;
- (id)richTextProxy;
- (id)cancelButton;
- (id)rowScrollViewArray;
- (id)seperatorViewArray;
- (id)bottomButtonArray;
- (id)bottomSeperatorArray;
- (BOOL)hasSubtitleLinks;
- (id)getItemViewForItem:(id)arg1;
- (id)getAllItemView;
- (void)setItemArray:(id)arg1;
- (void)setupTransparentViewIfNeeded;
- (void)setupContainerRoundCorner;
- (void)setupContainerViewBlurBackgroundColor;
- (void)setupContainerViewIfNeeded;
- (void)setupMaskView;
- (void)setupHeaderViewWithLandScape:(BOOL)arg1;
- (void)setupFooterViewWithLandScape:(BOOL)arg1;
- (void)setupBodyFooterViewWithLandScape:(BOOL)arg1;
- (void)setupBodyFooterView2WithLandScape:(BOOL)arg1;
- (double)getMaxHeight;
- (double)customIconMargin;
- (void)adjustContainerViewSize;
- (void)setupCenterTopTitle:(BOOL)arg1;
- (void)setupTopIconText:(BOOL)arg1;
- (void)onTopTaped;
- (void)onPrivacyTaped;
- (void)setupTitleIfNeeded:(BOOL)arg1;
- (void)setDisplayDragBarView:(id)arg1;
- (void)setRecentForwardScrollView:(id)arg1;
- (void)highLightIconViewWithTitle:(id)arg1;
- (void)addRedpointForViewWithTitle:(id)arg1;
- (void)setupTopDragBar;
- (void)setupScrollViews:(BOOL)arg1;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
- (void)setupBottomButtonsIfNeeded:(BOOL)arg1;
- (void)setupCancelButtonIfNeeded:(BOOL)arg1;
- (void)fixLayoutWithSafeArea;
- (void)fixContainerPosition;
- (id)customViewForItem:(id)arg1;
- (void)onCreateItemView:(id)arg1 forItem:(id)arg2;
- (double)extraItemViewSpacingForScrollView:(id)arg1;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)onActionSheetIconView:(id)arg1 didTapedWithDisableItem:(id)arg2;
- (void)onCancelBtnClicked;
- (void)onCustomBtnClicked:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)_internalTapClose;
- (void)onMainWindowFrameChanged;
- (void)onTabBarRootViewControllerDidAppear;
- (void)onOpenMiniTaskList;
- (void)onSubSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)showInView:(id)arg1;
- (void)showInView:(id)arg1 isConstraintByParent:(BOOL)arg2;
- (void)_calculateContainerCenter:(CGPoint *)arg1 to:(CGPoint *)arg2 constraintWidth:(double)arg3 parentView:(id)arg4;
- (BOOL)isIpadCase;
- (BOOL)useCornerCancelButton;
- (void)onContainerWidthChanged:(double)arg1;
- (void)onClickContainerVoiceOverExitButton;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)customItems;
- (void)reloadActionSheet:(BOOL)arg1;
- (void)reloadActionSheet:(BOOL)arg1 withAnimationDuration:(double)arg2;
- (void)preferredActionInReloadAnimation;
- (void)relayoutElements:(BOOL)arg1;
- (void)relayoutElements:(BOOL)arg1 fixedWidth:(double)arg2;
- (void)relayoutElements:(BOOL)arg1 fixedWidth:(double)arg2 duration:(double)arg3;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)disableScrollSheetItem:(long long)arg1;
- (BOOL)isItemValidWithTitle:(id)arg1;
- (void)onRichTextViewLinkClicked:(id)arg1 rect:(CGRect)arg2;
- (BOOL)accessibilityPerformEscape;
- (id)itemArray;
- (id)descriptionTitle;
- (void)setDescriptionTitle:(id)arg1;
- (id)descriptionSub;
- (void)setDescriptionSub:(id)arg1;
- (id)cancelTitle;
- (void)setCancelTitle:(id)arg1;
- (id)bottomDataAry;
- (void)setBottomDataAry:(id)arg1;
- (BOOL)landscapeMoveRight;
- (void)setLandscapeMoveRight:(BOOL)arg1;
- (unsigned int)landscapeStyle;
- (void)setLandscapeStyle:(unsigned int)arg1;
- (id)topIconDefault;
- (void)setTopIconDefault:(id)arg1;
- (id)topIconUrl;
- (void)setTopIconUrl:(id)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)topTitleSub;
- (void)setTopTitleSub:(id)arg1;
- (id)topTitleDesc;
- (void)setTopTitleDesc:(id)arg1;
- (id)topTitleLabelAlpha;
- (void)setTopTitleLabelAlpha:(id)arg1;
- (id)centerTopTitle;
- (void)setCenterTopTitle:(id)arg1;
- (id)topRightImage;
- (void)setTopRightImage:(id)arg1;
- (id)topRightWording;
- (void)setTopRightWording:(id)arg1;
- (id)topRightBgColor;
- (void)setTopRightBgColor:(id)arg1;
- (BOOL)dismissSelfAtClickItem;
- (void)setDismissSelfAtClickItem:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagsArray;
- (void)setTagsArray:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isShowed;
- (void)setIsShowed:(BOOL)arg1;
- (BOOL)displayTopRightArrow;
- (void)setDisplayTopRightArrow:(BOOL)arg1;
- (id)topTitleFont;
- (void)setTopTitleFont:(id)arg1;
- (id)displayDragBarView;
- (id)recentForwardScrollView;
- (void)setTransparentView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setBottomPaddingView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setRichTextProxy:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (id)topIconView;
- (void)setTopIconView:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)topTitleSubLabel;
- (void)setTopTitleSubLabel:(id)arg1;
- (id)topTitleDescLabel;
- (void)setTopTitleDescLabel:(id)arg1;
- (id)centerTopTitleLabel;
- (void)setCenterTopTitleLabel:(id)arg1;
- (id)topArrowView;
- (void)setTopArrowView:(id)arg1;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (id)topSeperatorView;
- (void)setTopSeperatorView:(id)arg1;
- (id)topPrivacyView;
- (void)setTopPrivacyView:(id)arg1;
- (void)setTagsView:(id)arg1;
- (id)topRightView;
- (void)setTopRightView:(id)arg1;
- (void)setRowScrollViewArray:(id)arg1;
- (void)setSeperatorViewArray:(id)arg1;
- (void)setBottomButtonArray:(id)arg1;
- (void)setBottomSeperatorArray:(id)arg1;
- (id)bodyFooterViewSeperatorView;
- (void)setBodyFooterViewSeperatorView:(id)arg1;
- (id)bodyFooterView2SeperatorView;
- (void)setBodyFooterView2SeperatorView:(id)arg1;
- (id)rotationNotification;
- (void)setRotationNotification:(id)arg1;
- (BOOL)isChangeFooterView;
- (void)setIsChangeFooterView:(BOOL)arg1;
- (id)fromView;
- (void)setFromView:(id)arg1;
- (void).cxx_destruct;
@end

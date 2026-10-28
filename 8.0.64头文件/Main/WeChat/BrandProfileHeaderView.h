@interface BrandProfileHeaderView : UIView <BrandProfileReserveFinderLiveCardViewDelegate, BrandProfileRichTextTagViewDelegate, _TtP6WeChat39BrandProfileRecommendFollowViewDelegate_, _TtP6WeChat33BrandProfileMenuViewModelDelegate_>
{
    CContact * _brandContact; // +0x8
    BOOL _isForceButtonHidden; // +0x10
    BOOL _isBrandLiving; // +0x11
    BOOL _bNameInteractive; // +0x12
    BOOL _shouldShowFriendSubscribeBtn; // +0x13
    BOOL _showBrandManagerMode; // +0x14
    BOOL _unvisibleInScrollView; // +0x15
    BOOL _canShowWriteArticle; // +0x16
    BOOL _shouldShowRecommendFollowView; // +0x17
    BOOL _waitToShowRecommendFollowView; // +0x18
    BOOL _lastHasStar; // +0x19
    id <BrandProfileHeaderViewDelegate> _delegate; // +0x20
    BizProfileV2Resp * _cacheItem; // +0x28
    MMBrandHeadImageView * _brandAvatarView; // +0x30
    BrandProfileRichTextTagView * _nameLabel; // +0x38
    BTRichTextTagView * _descButton; // +0x40
    WCFinderMaskButton * _focusButton; // +0x48
    WCFinderMaskButton * _enterButton; // +0x50
    WCFinderMaskButton * _unfocusButton; // +0x58
    WCFinderMaskButton * _publishArticleButton; // +0x60
    WCFinderMaskButton * _publishImageButton; // +0x68
    WCFinderMaskButton * _singleLinePublishImageButton; // +0x70
    UIImageView * _unfocusButtonDownArrow; // +0x78
    UIImageView * _unfocusButtonStar; // +0x80
    UIImageView * _startImageView; // +0x88
    MMUILabel * _overviewLabel; // +0x90
    MMUILabel * _ipInfoLabel; // +0x98
    MMUIButton * _finderButton; // +0xa0
    BrandLiveStatusButton * _liveButton; // +0xa8
    BrandProfileReserveFinderLiveCardView * _reserveLiveCard; // +0xb0
    BrandShopWindowButton * _shopWindowButton; // +0xb8
    UIImageView * _shopWindowButtonTailIcon; // +0xc0
    _TtC6WeChat36BrandProfileRecommendFollowViewModel * _recommendFollowViewModel; // +0xc8
    UIView * _recommendFollowView; // +0xd0
    _TtC6WeChat25BrandProfileMenuViewModel * _menuViewModel; // +0xd8
    UIView * _menuView; // +0xe0
    MMUIButton * _friendSubscribeButton; // +0xe8
    MMUILabel * _certificationStr; // +0xf0
    MMUIImageView * _certificationIcon; // +0xf8
    MMUIButton * _searchView; // +0x100
    MMUIButton * _moreView; // +0x108
    NSString * _nameLabelStr; // +0x110
    double _nicknameLabelWidth; // +0x118
    NSString * _lastSignatureStr; // +0x120
    BrandProfileShopEntranceView * _shopView; // +0x128
}
- (id)initWithContact:(id)arg1;
- (void)setupSubviews;
- (void)configureLayout;
- (void)configureAvatarLayout:(id)arg1;
- (void)configureIntroduceLayout:(id)arg1;
- (void)configureFocusLayout:(id)arg1;
- (void)configureWidgetLayout:(id)arg1;
- (void)configureMenuLayout:(id)arg1;
- (void)layoutSubviews;
- (void)layoutOtherViews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)updateHeaderView;
- (void)updateAvatarLayout;
- (void)updateIntroduceLayout;
- (id)unfocusTitleString;
- (id)focusTitleString;
- (void)updatePublishLayout;
- (void)updateFocusLayout;
- (void)updateRecommendFollowLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)showNewShopEntrance;
- (void)updateNewShopEntranceLayout;
- (void)updateShopWindowLayout;
- (id)resizeBrandIconImage:(id)arg1 toTargetSize:(CGSize)arg2 withColor:(id)arg3;
- (void)updateShopWindowButtonInsets:(BOOL)arg1;
- (CGSize)calculateTailIconDisplaySize:(CGSize)arg1;
- (void)updateMenuLayout;
- (void)updateWidgetLayout;
- (void)showRecommendFollowViewAnimated;
- (void)scrollView:(id)arg1 onHeaderViewVisibilityChanged:(BOOL)arg2;
- (void)setBrandContact:(id)arg1;
- (void)setCacheItem:(id)arg1;
- (void)setIsForceButtonHidden:(BOOL)arg1;
- (void)setFinderLiveReserved:(BOOL)arg1;
- (id)getFocusButton;
- (void)focusButtonTitleUsingBindDevice;
- (void)focusButtonTitleUsingFocus;
- (void)livingStatusUpdate;
- (BOOL)hasReserveLiveCard;
- (void)clearNameInfoCache;
- (id)getOverviewStringWithSeparator:(id)arg1;
- (void)onMenuItemClick:(id)arg1;
- (void)onReserveFinderLiveButtonClicked:(BOOL)arg1;
- (void)onShowMoreNoticeButtonClicked;
- (void)onExpandButtonClicked:(BOOL)arg1;
- (void)onTextTagViewTap:(id)arg1;
- (void)onBrandAvatarClicked;
- (void)onPersonalVerifiedLabelClicked:(id)arg1;
- (BOOL)isPointInsideDescTextRegion:(CGPoint)arg1;
- (void)onIPInfoClicked;
- (void)onFocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onUnfocusButtonClicked;
- (void)onPublishArticleButtonClicked;
- (void)onPublishImageButtonClicked;
- (void)onSetDescLabelExposed;
- (void)onSetDescLabelClicked:(id)arg1;
- (void)onFoldButtonClicked;
- (void)onShopWindowButtonClicked;
- (void)openProfileShopEntrance:(id)arg1;
- (void)onFriendSubscribeBtnClicked;
- (void)onFinderButtonClicked;
- (void)onNameAreaClicked;
- (void)onLiveStatusBtnClicked;
- (void)onHalfScreenSearchClick;
- (void)onHalfScreenMoreClick;
- (void)onRecommendFollowDataUpdated:(id)arg1;
- (void)onMoreRecommendFollowClicked:(id)arg1 sessionId:(id)arg2;
- (void)onRecommendFollowCellClicked:(id)arg1 sessionId:(id)arg2 reportJsonStr:(id)arg3;
- (void)onRecommendFollowCellExposed:(id)arg1;
- (id)brandAvatarView;
- (id)nameLabel;
- (id)searchView;
- (id)moreView;
- (id)certificationStr;
- (id)certificationIcon;
- (id)descButton;
- (id)finderButton;
- (id)overviewLabel;
- (id)ipInfoLabel;
- (id)friendSubscribeButton;
- (id)focusButton;
- (id)unfocusButton;
- (id)unfocusButtonDownArrow;
- (id)publishArticleButton;
- (id)publishImageButton;
- (id)singleLinePublishImageButton;
- (id)enterButton;
- (id)recommendFollowViewModel;
- (id)recommendFollowView;
- (id)menuViewModel;
- (id)menuView;
- (void)createShopWindowButtonIfNeeded;
- (void)createShopWindowButtonTailIconIfNeeded;
- (id)shopView;
- (id)reserveLiveCard;
- (id)startImageView;
- (id)getNameLabelAccessibilityLabel;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cacheItem;
- (BOOL)isForceButtonHidden;
- (BOOL)isBrandLiving;
- (void)setIsBrandLiving:(BOOL)arg1;
- (BOOL)bNameInteractive;
- (void)setBNameInteractive:(BOOL)arg1;
- (BOOL)shouldShowFriendSubscribeBtn;
- (void)setShouldShowFriendSubscribeBtn:(BOOL)arg1;
- (BOOL)showBrandManagerMode;
- (void)setShowBrandManagerMode:(BOOL)arg1;
- (void)setBrandAvatarView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDescButton:(id)arg1;
- (void)setFocusButton:(id)arg1;
- (void)setEnterButton:(id)arg1;
- (void)setUnfocusButton:(id)arg1;
- (void)setPublishArticleButton:(id)arg1;
- (void)setPublishImageButton:(id)arg1;
- (void)setSingleLinePublishImageButton:(id)arg1;
- (void)setUnfocusButtonDownArrow:(id)arg1;
- (id)unfocusButtonStar;
- (void)setUnfocusButtonStar:(id)arg1;
- (void)setStartImageView:(id)arg1;
- (void)setOverviewLabel:(id)arg1;
- (void)setIpInfoLabel:(id)arg1;
- (void)setFinderButton:(id)arg1;
- (id)liveButton;
- (void)setLiveButton:(id)arg1;
- (void)setReserveLiveCard:(id)arg1;
- (id)shopWindowButton;
- (void)setShopWindowButton:(id)arg1;
- (id)shopWindowButtonTailIcon;
- (void)setShopWindowButtonTailIcon:(id)arg1;
- (BOOL)unvisibleInScrollView;
- (void)setUnvisibleInScrollView:(BOOL)arg1;
- (BOOL)canShowWriteArticle;
- (void)setCanShowWriteArticle:(BOOL)arg1;
- (BOOL)shouldShowRecommendFollowView;
- (void)setShouldShowRecommendFollowView:(BOOL)arg1;
- (void)setRecommendFollowViewModel:(id)arg1;
- (void)setRecommendFollowView:(id)arg1;
- (BOOL)waitToShowRecommendFollowView;
- (void)setWaitToShowRecommendFollowView:(BOOL)arg1;
- (void)setMenuViewModel:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setFriendSubscribeButton:(id)arg1;
- (void)setCertificationStr:(id)arg1;
- (void)setCertificationIcon:(id)arg1;
- (void)setSearchView:(id)arg1;
- (void)setMoreView:(id)arg1;
- (id)nameLabelStr;
- (void)setNameLabelStr:(id)arg1;
- (double)nicknameLabelWidth;
- (void)setNicknameLabelWidth:(double)arg1;
- (BOOL)lastHasStar;
- (void)setLastHasStar:(BOOL)arg1;
- (id)lastSignatureStr;
- (void)setLastSignatureStr:(id)arg1;
- (void)setShopView:(id)arg1;
- (void).cxx_destruct;
@end

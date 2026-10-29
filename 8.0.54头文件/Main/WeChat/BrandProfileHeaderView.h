@interface BrandProfileHeaderView : UIView <BrandProfileReserveFinderLiveCardViewDelegate, BrandProfileRichTextTagViewDelegate, _TtP6WeChat39BrandProfileRecommendFollowViewDelegate_, _TtP6WeChat33BrandProfileMenuViewModelDelegate_>
{
    CContact * _brandContact; // +0x8
    BOOL _isForceButtonHidden; // +0x10
    BOOL _isBrandLiving; // +0x11
    BOOL _bNameInteractive; // +0x12
    BOOL _shouldShowFriendSubscribeBtn; // +0x13
    BOOL _unvisibleInScrollView; // +0x14
    BOOL _shouldShowRecommendFollowView; // +0x15
    BOOL _waitToShowRecommendFollowView; // +0x16
    BOOL _lastHasStar; // +0x17
    id <BrandProfileHeaderViewDelegate> _delegate; // +0x18
    BizProfileV2Resp * _cacheItem; // +0x20
    MMBrandHeadImageView * _brandAvatarView; // +0x28
    BrandProfileRichTextTagView * _nameLabel; // +0x30
    BTRichTextTagView * _descButton; // +0x38
    WCFinderMaskButton * _focusButton; // +0x40
    WCFinderMaskButton * _enterButton; // +0x48
    WCFinderMaskButton * _unfocusButton; // +0x50
    UIImageView * _unfocusButtonDownArrow; // +0x58
    UIImageView * _unfocusButtonStar; // +0x60
    UIImageView * _startImageView; // +0x68
    MMUILabel * _overviewLabel; // +0x70
    MMUILabel * _ipInfoLabel; // +0x78
    MMUIButton * _finderButton; // +0x80
    BrandLiveStatusButton * _liveButton; // +0x88
    BrandProfileReserveFinderLiveCardView * _reserveLiveCard; // +0x90
    BrandShopWindowButton * _shopWindowButton; // +0x98
    UIImageView * _shopWindowButtonTailIcon; // +0xa0
    _TtC6WeChat36BrandProfileRecommendFollowViewModel * _recommendFollowViewModel; // +0xa8
    UIView * _recommendFollowView; // +0xb0
    _TtC6WeChat25BrandProfileMenuViewModel * _menuViewModel; // +0xb8
    UIView * _menuView; // +0xc0
    MMUIButton * _friendSubscribeButton; // +0xc8
    MMUILabel * _certificationStr; // +0xd0
    MMUIImageView * _certificationIcon; // +0xd8
    MMUIButton * _searchView; // +0xe0
    MMUIButton * _moreView; // +0xe8
    NSString * _nameLabelStr; // +0xf0
    double _nicknameLabelWidth; // +0xf8
    NSString * _lastSignatureStr; // +0x100
}
- (id)init;
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
- (void)updateFocusLayout;
- (void)updateRecommendFollowLayout;
- (void)traitCollectionDidChange:(id)arg1;
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
- (void)onPersonalVerifiedLabelClicked;
- (void)onFocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onUnfocusButtonClicked;
- (void)onFoldButtonClicked;
- (void)onShopWindowButtonClicked;
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
- (id)enterButton;
- (id)recommendFollowViewModel;
- (id)recommendFollowView;
- (id)menuViewModel;
- (id)menuView;
- (void)createShopWindowButtonIfNeeded;
- (void)createShopWindowButtonTailIconIfNeeded;
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
- (void)setBrandAvatarView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDescButton:(id)arg1;
- (void)setFocusButton:(id)arg1;
- (void)setEnterButton:(id)arg1;
- (void)setUnfocusButton:(id)arg1;
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
- (void).cxx_destruct;
@end


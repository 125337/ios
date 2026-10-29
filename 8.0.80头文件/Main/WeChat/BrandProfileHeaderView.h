@interface BrandProfileHeaderView : UIView <BrandProfileReserveFinderLiveCardViewDelegate, BrandProfileRichTextTagViewDelegate, _TtP6WeChat39BrandProfileRecommendFollowViewDelegate_, BrandProfileFinderLiveInfoViewDelegate, _TtP6WeChat33BrandProfileMenuViewModelDelegate_, BrandProfilePhotoAccountGuideCardViewDelegate, UIGestureRecognizerDelegate>
{
    CContact * _brandContact; // +0x8
    BOOL _isForceButtonHidden; // +0x10
    BOOL _isFans; // +0x11
    BOOL _isBrandLiving; // +0x12
    BOOL _bNameInteractive; // +0x13
    BOOL _shouldShowFriendSubscribeBtn; // +0x14
    BOOL _showBrandManagerMode; // +0x15
    BOOL _shouldShowPhotoAccountGuideCard; // +0x16
    BOOL _unvisibleInScrollView; // +0x17
    BOOL _canShowWriteArticle; // +0x18
    BOOL _hasLoadAIInfoCache; // +0x19
    BOOL _canShowAIVoiceChat; // +0x1a
    BOOL _shouldShowRecommendFollowView; // +0x1b
    BOOL _waitToShowRecommendFollowView; // +0x1c
    BOOL _lastHasStar; // +0x1d
    BOOL _lastIsPhotoAccount; // +0x1e
    BOOL _isDescExpanded; // +0x1f
    unsigned int _urgePublishUserCount; // +0x20
    id <BrandProfileHeaderViewDelegate> _delegate; // +0x28
    BizProfileV2Resp * _cacheItem; // +0x30
    NSString * _photoAccountGuideText; // +0x38
    NSString * _photoAccountActionText; // +0x40
    MMBrandHeadImageView * _brandAvatarView; // +0x48
    BrandProfileRichTextTagView * _nameLabel; // +0x50
    MMUIImageView * _genderIconView; // +0x58
    MMUIImageView * _nameTagGenderIconView; // +0x60
    BTRichTextTagView * _descButton; // +0x68
    WCFinderMaskButton * _focusButton; // +0x70
    WCFinderMaskButton * _enterButton; // +0x78
    WCFinderMaskButton * _unfocusButton; // +0x80
    WCFinderMaskButton * _aiVoiceChatButton; // +0x88
    WCFinderMaskButton * _publishArticleButton; // +0x90
    WCFinderMaskButton * _publishImageButton; // +0x98
    WCFinderMaskButton * _managerAIVoiceChatButton; // +0xa0
    WCFinderMaskButton * _singleLinePublishImageButton; // +0xa8
    UIImageView * _unfocusButtonDownArrow; // +0xb0
    UIImageView * _unfocusButtonStar; // +0xb8
    UIImageView * _startImageView; // +0xc0
    UILabel * _photoAccountTag; // +0xc8
    UIImageView * _nameArrowView; // +0xd0
    UIView * _avatarContainerView; // +0xd8
    MMUILabel * _overviewLabel; // +0xe0
    UIView * _verifiedInfoContainer; // +0xe8
    MMUILabel * _ipInfoLabel; // +0xf0
    MMUIImageView * _bindPoiArrowView; // +0xf8
    MMUILabel * _genderLabel; // +0x100
    MMUIButton * _finderButton; // +0x108
    BrandLiveStatusButton * _liveButton; // +0x110
    BrandProfileReserveFinderLiveCardView * _reserveLiveCard; // +0x118
    BrandShopWindowButton * _shopWindowButton; // +0x120
    UIImageView * _shopWindowButtonTailIcon; // +0x128
    _TtC6WeChat36BrandProfileRecommendFollowViewModel * _recommendFollowViewModel; // +0x130
    UIView * _recommendFollowView; // +0x138
    _TtC6WeChat25BrandProfileMenuViewModel * _menuViewModel; // +0x140
    UIView * _menuView; // +0x148
    MMUIButton * _friendSubscribeButton; // +0x150
    MMUILabel * _certificationStr; // +0x158
    MMUIImageView * _certificationIcon; // +0x160
    UIView * _photoCertificationRow; // +0x168
    UIView * _photoTagWrapView; // +0x170
    MMUILabel * _photoCertificationStr; // +0x178
    MMUILabel * _photoSchoolStr; // +0x180
    MMUIImageView * _photoCertificationIcon; // +0x188
    UIView * _photoGainView; // +0x190
    MMUILabel * _photoGainPrefixLabel; // +0x198
    MMUIImageView * _photoGainLikeIcon; // +0x1a0
    MMUILabel * _photoGainLikeLabel; // +0x1a8
    MMUIImageView * _photoGainLoveIcon; // +0x1b0
    MMUILabel * _photoGainLoveLabel; // +0x1b8
    UIView * _subscribeHintView; // +0x1c0
    MMUILabel * _subscribeHintLabel; // +0x1c8
    MMUIImageView * _subscribeHintIconView; // +0x1d0
    MMUIButton * _searchView; // +0x1d8
    MMUIButton * _moreView; // +0x1e0
    NSString * _nameLabelStr; // +0x1e8
    double _nicknameLabelWidth; // +0x1f0
    NSString * _lastSignatureStr; // +0x1f8
    BrandProfileShopEntranceView * _shopView; // +0x200
    BrandProfileFinderLiveInfoView * _liveInfoView; // +0x208
    NSMutableDictionary * _introAtBizURLToUsername; // +0x210
    BrandProfilePhotoAccountGuideCardView * _photoAccountGuideCard; // +0x218
    BrandProfileUrgePublishEntryView * _urgePublishEntryView; // +0x220
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
- (void)updateUrgePublishEntryLayout;
- (void)updateUrgePublishUserCount:(unsigned int)arg1 userList:(id)arg2;
- (void)updateAvatarLayout;
- (void)updateIntroduceLayout;
- (id)unfocusTitleString;
- (id)simplifiedUnfocusTitleString;
- (id)focusTitleString;
- (void)updatePublishLayout;
- (BOOL)allowSendMsgWhenUnfocus;
- (void)updateFocusLayout;
- (void)updateRecommendFollowLayout;
- (void)setShouldShowPhotoAccountGuideCard:(BOOL)arg1;
- (void)setPhotoAccountGuideText:(id)arg1;
- (void)setPhotoAccountActionText:(id)arg1;
- (void)updatePhotoAccountGuideCardLayout;
- (void)onPhotoAccountGuideCardActionClicked;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)showNewShopEntrance;
- (void)updateNewShopEntranceLayout;
- (void)updateShopWindowLayout;
- (id)resizeBrandIconImage:(id)arg1 toTargetSize:(CGSize)arg2 withColor:(id)arg3;
- (void)updateShopWindowButtonInsets:(BOOL)arg1;
- (void)refreshShopWindowButtonLayoutWithTailIcon:(BOOL)arg1;
- (CGSize)calculateTailIconDisplaySize:(CGSize)arg1;
- (void)updateMenuLayout;
- (BOOL)showNewFinderLiveInfo;
- (void)updateFinderLiveInfoLayout;
- (void)updateWidgetLayout;
- (void)showRecommendFollowViewAnimated;
- (void)scrollView:(id)arg1 onHeaderViewVisibilityChanged:(BOOL)arg2;
- (void)setBrandContact:(id)arg1;
- (void)setCacheItem:(id)arg1;
- (void)setIsForceButtonHidden:(BOOL)arg1;
- (void)setFinderLiveReserved:(BOOL)arg1;
- (id)getFocusButton;
- (id)getMoreButton;
- (void)focusButtonTitleUsingBindDevice;
- (void)focusButtonTitleUsingFocus;
- (void)livingStatusUpdate;
- (BOOL)hasReserveLiveCard;
- (void)clearNameInfoCache;
- (id)photoTagMainColor;
- (id)photoTagColorFromHexString:(id)arg1;
- (id)photoTagColorWithLight:(id)arg1 dark:(id)arg2 fallback:(id)arg3;
- (id)photoTagTextColor;
- (id)photoStatDisplayTextWithNumber:(unsigned long long)arg1;
- (BOOL)hasValidIntroText:(id)arg1;
- (id)plainTextFromIntroRichContent:(id)arg1;
- (id)richTextContentFromIntroRichContent:(id)arg1;
- (id)introAtBizURLWithUsername:(id)arg1;
- (id)xmlEscapedString:(id)arg1;
- (void)onIntroRichDescClicked:(id)arg1;
- (void)onIntroAtBizUsernameClicked:(id)arg1;
- (id)getOverviewStringWithSeparator:(id)arg1;
- (BOOL)isPhotoAccounts;
- (BOOL)shouldShowSchoolWording;
- (BOOL)shouldShowPhotoStyleCertificationRow;
- (BOOL)shouldShowGenderIcon;
- (BOOL)shouldShowBizStat;
- (BOOL)shouldShowSchoolVerifyIcon;
- (id)headerCertificationDisplayText;
- (void)onMenuItemClick:(id)arg1;
- (void)onReserveFinderLiveButtonClicked:(BOOL)arg1;
- (void)onShowMoreNoticeButtonClicked;
- (void)onExpandButtonClicked:(BOOL)arg1;
- (id)getReserveLiveFromViewController;
- (void)onTextTagViewTap:(id)arg1;
- (void)onNameArrowViewTap;
- (void)onTextTagViewLongPressCopy:(id)arg1;
- (void)onCopyNickname;
- (void)onBrandAvatarClicked;
- (void)onAvatarContainerClicked;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onPersonalVerifiedLabelClicked:(id)arg1;
- (BOOL)isPointInsideDescTextRegion:(CGPoint)arg1;
- (void)onVerifiedInfoClicked;
- (void)onFocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onUnfocusButtonClicked;
- (void)onPublishArticleButtonClicked;
- (void)onPublishImageButtonClicked;
- (void)onUrgePublishUserEntryClicked;
- (void)onAIChatButtonClicked;
- (void)onSetDescLabelExposed;
- (void)onSetDescLabelClicked:(id)arg1;
- (void)onDescExpandButtonClicked:(id)arg1;
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
- (id)avatarContainerView;
- (id)nameLabel;
- (id)searchView;
- (id)moreView;
- (id)certificationStr;
- (id)certificationIcon;
- (id)subscribeHintView;
- (id)subscribeHintLabel;
- (id)subscribeHintIconView;
- (id)descButton;
- (id)finderButton;
- (id)overviewLabel;
- (id)verifiedInfoContainer;
- (id)ipInfoLabel;
- (void)onBindPoiEntranceClicked;
- (id)genderLabel;
- (id)friendSubscribeButton;
- (id)focusButton;
- (id)unfocusButton;
- (id)unfocusButtonDownArrow;
- (id)publishArticleButton;
- (id)publishImageButton;
- (id)createAIVoiceButton;
- (id)aiVoiceChatButton;
- (id)managerAIVoiceChatButton;
- (id)singleLinePublishImageButton;
- (id)enterButton;
- (void)updateEnterButtonLayout;
- (id)recommendFollowViewModel;
- (id)recommendFollowView;
- (id)menuViewModel;
- (id)menuView;
- (void)createShopWindowButtonIfNeeded;
- (void)createShopWindowButtonTailIconIfNeeded;
- (id)shopView;
- (id)reserveLiveCard;
- (id)photoAccountGuideCard;
- (id)liveInfoView;
- (id)startImageView;
- (id)nameArrowView;
- (id)photoAccountTag;
- (id)getNameLabelAccessibilityLabel;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cacheItem;
- (BOOL)isForceButtonHidden;
- (BOOL)isFans;
- (void)setIsFans:(BOOL)arg1;
- (BOOL)isBrandLiving;
- (void)setIsBrandLiving:(BOOL)arg1;
- (BOOL)bNameInteractive;
- (void)setBNameInteractive:(BOOL)arg1;
- (BOOL)shouldShowFriendSubscribeBtn;
- (void)setShouldShowFriendSubscribeBtn:(BOOL)arg1;
- (BOOL)showBrandManagerMode;
- (void)setShowBrandManagerMode:(BOOL)arg1;
- (BOOL)shouldShowPhotoAccountGuideCard;
- (id)photoAccountGuideText;
- (id)photoAccountActionText;
- (void)setBrandAvatarView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (id)genderIconView;
- (void)setGenderIconView:(id)arg1;
- (id)nameTagGenderIconView;
- (void)setNameTagGenderIconView:(id)arg1;
- (void)setDescButton:(id)arg1;
- (void)setFocusButton:(id)arg1;
- (void)setEnterButton:(id)arg1;
- (void)setUnfocusButton:(id)arg1;
- (void)setAiVoiceChatButton:(id)arg1;
- (void)setPublishArticleButton:(id)arg1;
- (void)setPublishImageButton:(id)arg1;
- (void)setManagerAIVoiceChatButton:(id)arg1;
- (void)setSingleLinePublishImageButton:(id)arg1;
- (void)setUnfocusButtonDownArrow:(id)arg1;
- (id)unfocusButtonStar;
- (void)setUnfocusButtonStar:(id)arg1;
- (void)setStartImageView:(id)arg1;
- (void)setPhotoAccountTag:(id)arg1;
- (void)setNameArrowView:(id)arg1;
- (void)setAvatarContainerView:(id)arg1;
- (void)setOverviewLabel:(id)arg1;
- (void)setVerifiedInfoContainer:(id)arg1;
- (void)setIpInfoLabel:(id)arg1;
- (id)bindPoiArrowView;
- (void)setBindPoiArrowView:(id)arg1;
- (void)setGenderLabel:(id)arg1;
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
- (BOOL)hasLoadAIInfoCache;
- (void)setHasLoadAIInfoCache:(BOOL)arg1;
- (BOOL)canShowAIVoiceChat;
- (void)setCanShowAIVoiceChat:(BOOL)arg1;
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
- (id)photoCertificationRow;
- (void)setPhotoCertificationRow:(id)arg1;
- (id)photoTagWrapView;
- (void)setPhotoTagWrapView:(id)arg1;
- (id)photoCertificationStr;
- (void)setPhotoCertificationStr:(id)arg1;
- (id)photoSchoolStr;
- (void)setPhotoSchoolStr:(id)arg1;
- (id)photoCertificationIcon;
- (void)setPhotoCertificationIcon:(id)arg1;
- (id)photoGainView;
- (void)setPhotoGainView:(id)arg1;
- (id)photoGainPrefixLabel;
- (void)setPhotoGainPrefixLabel:(id)arg1;
- (id)photoGainLikeIcon;
- (void)setPhotoGainLikeIcon:(id)arg1;
- (id)photoGainLikeLabel;
- (void)setPhotoGainLikeLabel:(id)arg1;
- (id)photoGainLoveIcon;
- (void)setPhotoGainLoveIcon:(id)arg1;
- (id)photoGainLoveLabel;
- (void)setPhotoGainLoveLabel:(id)arg1;
- (void)setSubscribeHintView:(id)arg1;
- (void)setSubscribeHintLabel:(id)arg1;
- (void)setSubscribeHintIconView:(id)arg1;
- (void)setSearchView:(id)arg1;
- (void)setMoreView:(id)arg1;
- (id)nameLabelStr;
- (void)setNameLabelStr:(id)arg1;
- (double)nicknameLabelWidth;
- (void)setNicknameLabelWidth:(double)arg1;
- (BOOL)lastHasStar;
- (void)setLastHasStar:(BOOL)arg1;
- (BOOL)lastIsPhotoAccount;
- (void)setLastIsPhotoAccount:(BOOL)arg1;
- (id)lastSignatureStr;
- (void)setLastSignatureStr:(id)arg1;
- (BOOL)isDescExpanded;
- (void)setIsDescExpanded:(BOOL)arg1;
- (void)setShopView:(id)arg1;
- (void)setLiveInfoView:(id)arg1;
- (id)introAtBizURLToUsername;
- (void)setIntroAtBizURLToUsername:(id)arg1;
- (void)setPhotoAccountGuideCard:(id)arg1;
- (id)urgePublishEntryView;
- (void)setUrgePublishEntryView:(id)arg1;
- (unsigned int)urgePublishUserCount;
- (void)setUrgePublishUserCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

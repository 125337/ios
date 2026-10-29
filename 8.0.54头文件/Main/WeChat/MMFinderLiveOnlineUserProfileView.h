@interface MMFinderLiveOnlineUserProfileView : MMPageSheetBaseView <WCActionSheetDelegate, MMScrollActionSheetDelegate, MMLiveScrollActionSheetItemViewDelegate>
{
    BOOL _isOpening; // +0x8
    BOOL _isFromOnlineStateView; // +0x9
    BOOL _isAccountBlackList; // +0xa
    BOOL _isCloseBtnClicked; // +0xb
    BOOL _ignoreActionSheetCancleCallback; // +0xc
    BOOL _hasFetchCompleteContact; // +0xd
    BOOL _clearCallbacksAfterDismiss; // +0xe
    unsigned int _visibleBadgeCount; // +0x10
    id _extraInfo; // +0x18
    NSString * _userName; // +0x20
    UIView * _contentView; // +0x28
    UIView * _profileDetailView; // +0x30
    UIView * _maskView; // +0x38
    CAShapeLayer * _shapeLayer; // +0x40
    UIVisualEffectView * _visualEfView; // +0x48
    MMHeadImageView * _headImageView; // +0x50
    MMUILabel * _signLabel; // +0x58
    UIView * _locationAndGenderContainerView; // +0x60
    MMUILabel * _locationLabel; // +0x68
    MMUILabel * _genderLabel; // +0x70
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x78
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x80
    MMFinderLiveNormalTextSignView * _buySignView; // +0x88
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x90
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x98
    RichTextView * _displayNameLabel; // +0xa0
    WCFinderProfileAuthView * _authInfoView; // +0xa8
    UIImageView * _finderIconImageView; // +0xb0
    UIImageView * _chevronView; // +0xb8
    RichTextView * _signatureLabel; // +0xc0
    MMLiveActionSheetScrollView * _actionButtonScrollView; // +0xc8
    MMUIButton * _singleActionButton; // +0xd0
    MMUIButton * _followButton; // +0xd8
    MMUIButton * _sendGiftButton; // +0xe0
    MMUIButton * _switchLiveRoomButton; // +0xe8
    MMLoadingIndicatorView * _loadingIndicatorView; // +0xf0
    NSArray * _profileInfoViewList; // +0xf8
    NSMutableArray * _bottomButtonList; // +0x100
    WCLiveActionSheet * _actionSheet; // +0x108
    CContact * _contact; // +0x110
    FinderAudienceLiveInfo * _audienceLiveInfo; // +0x118
    UIView * _micSeatInfoView; // +0x120
    UILabel * _micSeatNameLabel; // +0x128
    UIImageView * _editMicSeatNameIcon; // +0x130
    UIButton * _stopConnectMicButton; // +0x138
    MMUIActivityIndicatorView * _stopConnectMicIndicatorView; // +0x140
    FinderLiveContact * _fetchedLiveContact; // +0x148
    MMFinderLiveOnlineUserProfileOpenParameter * _openParameter; // +0x150
    WCFinderContact * _fetchedFinderContact; // +0x158
    NSArray * _badgeInfos; // +0x160
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (id)genBigStrongButton;
- (BOOL)enableSendMsg;
- (BOOL)enableConnectMicUserSendMsg;
- (BOOL)enableConnectMicUserSendGift;
- (BOOL)enableDisplayFollowButton;
- (BOOL)enableProfileLiveInfoView;
- (void)layoutUI;
- (void)layoutLocationAndGenderViewsWithOrigin:(CGPoint)arg1 andMaxWidth:(double)arg2;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (CGRect)contentViewFrame;
- (unsigned int)getVisibleButtonCount;
- (void)refreshForDisplayNameLabel:(double)arg1;
- (void)updateHeadImageConerRadius:(double)arg1;
- (void)updateAuthInfoView;
- (void)checkAndCreateMicSeatInfoView;
- (void)onTapMicSeatInfoView:(id)arg1;
- (id)makeStopConnectMicButton;
- (void)onTapStopConnectMicButton;
- (id)makeStopConnectMicIndicatorView;
- (void)openWithParameter:(id)arg1 animation:(BOOL)arg2;
- (void)reloadPageSheetTopBar;
- (void)reloadDataWithParameter;
- (void)reloadWithFinderContact:(id)arg1;
- (void)reloadWithFinderContact:(id)arg1 hasFetchCompleteContact:(BOOL)arg2;
- (void)reloadWithDisableCommentDef:(unsigned long long)arg1;
- (void)reloadWithIsSendPrivateMsgEnable:(BOOL)arg1 liveContactExtInfo:(id)arg2;
- (void)reloadProfileInfoViewsWithAudienceLiveInfo:(id)arg1;
- (void)updateWithBadgeInfos:(id)arg1;
- (void)handleMicUsersInfoChanged:(id)arg1;
- (void)updateViewColorInDarkMode:(BOOL)arg1;
- (void)tapMask;
- (void)closeDirectly;
- (void)close;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)closeWithAnimation:(BOOL)arg1 clearCallbacks:(BOOL)arg2;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)displayUsrProfileViewWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1 refreshContact:(BOOL)arg2;
- (unsigned long long)getCommentDef;
- (BOOL)isCommentEnable;
- (void)clearMaskHighlightRect;
- (id)finderContact;
- (id)userName;
- (BOOL)isAnchor;
- (BOOL)isAssistant;
- (void)onComplaintButtonClicked;
- (void)onKickoutButtonClicked;
- (void)onNoSenseBanCommentButtonClicked;
- (BOOL)isNoSenseCommentEnable;
- (void)onBanCommentButtonClicked;
- (void)onAddOrRemoveCommentAssistantButtonClicked;
- (void)onSendMsgButtonClicked;
- (void)onFollowButtonClicked;
- (void)onActionsheetCancelButtonClicked;
- (void)showCancelFollowSheetForAnchor;
- (id)addTransparencyViewWith:(id)arg1 targetView:(id)arg2;
- (void)onTapGotoStreamProfile:(id)arg1;
- (void)onSendGiftButtonClicked;
- (void)onSingleActionButtonClicked;
- (void)onSwitchLiveRoomButtonClicked;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportProfileActionWithType:(unsigned long long)arg1;
- (unsigned long long)getLiveReporterProfileScene;
- (unsigned long long)getLiveReporterUserIdentity;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (id)audienceLogReporter;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (void)setUserName:(id)arg1;
- (BOOL)isFromOnlineStateView;
- (void)setIsFromOnlineStateView:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)profileDetailView;
- (void)setProfileDetailView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)locationAndGenderContainerView;
- (void)setLocationAndGenderContainerView:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)genderLabel;
- (void)setGenderLabel:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)authInfoView;
- (void)setAuthInfoView:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)actionButtonScrollView;
- (void)setActionButtonScrollView:(id)arg1;
- (id)singleActionButton;
- (void)setSingleActionButton:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)sendGiftButton;
- (void)setSendGiftButton:(id)arg1;
- (id)switchLiveRoomButton;
- (void)setSwitchLiveRoomButton:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)profileInfoViewList;
- (void)setProfileInfoViewList:(id)arg1;
- (id)bottomButtonList;
- (void)setBottomButtonList:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)audienceLiveInfo;
- (void)setAudienceLiveInfo:(id)arg1;
- (id)micSeatInfoView;
- (void)setMicSeatInfoView:(id)arg1;
- (id)micSeatNameLabel;
- (void)setMicSeatNameLabel:(id)arg1;
- (id)editMicSeatNameIcon;
- (void)setEditMicSeatNameIcon:(id)arg1;
- (id)stopConnectMicButton;
- (void)setStopConnectMicButton:(id)arg1;
- (id)stopConnectMicIndicatorView;
- (void)setStopConnectMicIndicatorView:(id)arg1;
- (BOOL)isAccountBlackList;
- (void)setIsAccountBlackList:(BOOL)arg1;
- (BOOL)isCloseBtnClicked;
- (void)setIsCloseBtnClicked:(BOOL)arg1;
- (BOOL)ignoreActionSheetCancleCallback;
- (void)setIgnoreActionSheetCancleCallback:(BOOL)arg1;
- (BOOL)hasFetchCompleteContact;
- (void)setHasFetchCompleteContact:(BOOL)arg1;
- (id)fetchedLiveContact;
- (void)setFetchedLiveContact:(id)arg1;
- (BOOL)clearCallbacksAfterDismiss;
- (void)setClearCallbacksAfterDismiss:(BOOL)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)fetchedFinderContact;
- (void)setFetchedFinderContact:(id)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (unsigned int)visibleBadgeCount;
- (void)setVisibleBadgeCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end


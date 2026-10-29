@interface MMFinderLiveOnlineUserProfileView : MMPageSheetBaseView <WCActionSheetDelegate, MMScrollActionSheetDelegate, MMLiveScrollActionSheetItemViewDelegate, MMFinderLiveNoticeViewLogicDelegate, UIScrollViewDelegate>
{
    BOOL _isOpening; // +0x8
    BOOL _isFromOnlineStateView; // +0x9
    BOOL _isAccountBlackList; // +0xa
    BOOL _isCloseBtnClicked; // +0xb
    BOOL _ignoreActionSheetCancleCallback; // +0xc
    BOOL _hasFetchCompleteContact; // +0xd
    BOOL _clearCallbacksAfterDismiss; // +0xe
    BOOL _pendingInitialExposureScan; // +0xf
    BOOL _hasReportedIdentityCardExposure; // +0x10
    BOOL _waitingForIdentityCardPreview; // +0x11
    unsigned int _visibleBadgeCount; // +0x14
    id _extraInfo; // +0x18
    NSString * _userName; // +0x20
    UIView * _contentView; // +0x28
    UIView * _profileDetailView; // +0x30
    UIView * _maskingView; // +0x38
    CAShapeLayer * _shapeLayer; // +0x40
    UIVisualEffectView * _visualEfView; // +0x48
    MMHeadImageView * _headImageView; // +0x50
    MMUILabel * _signLabel; // +0x58
    UIView * _locationAndGenderContainerView; // +0x60
    MMUILabel * _locationLabel; // +0x68
    MMUILabel * _genderLabel; // +0x70
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x78
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x80
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x88
    MMFinderLiveNormalTextSignView * _buySignView; // +0x90
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x98
    MMFinderLiveNormalTextSignView * _followerSignView; // +0xa0
    RichTextView * _displayNameLabel; // +0xa8
    WCFinderProfileAuthView * _authInfoView; // +0xb0
    UIImageView * _finderIconImageView; // +0xb8
    UIImageView * _chevronView; // +0xc0
    RichTextView * _signatureLabel; // +0xc8
    UIView * _micSeatInfoView; // +0xd0
    UILabel * _micSeatNameLabel; // +0xd8
    UIImageView * _editMicSeatNameIcon; // +0xe0
    MMUIActivityIndicatorView * _stopConnectMicActionLoadingIndicator; // +0xe8
    WCTableViewManager * _tableViewManager; // +0xf0
    MMLiveActionSheetScrollView * _actionButtonScrollView; // +0xf8
    MMUIButton * _singleActionButton; // +0x100
    MMLiveScrollActionSheetItem * _currentSingleActionItem; // +0x108
    MMUIButton * _followButton; // +0x110
    MMUIButton * _sendGiftButton; // +0x118
    MMUIButton * _switchLiveRoomButton; // +0x120
    NSMutableArray * _bottomButtonList; // +0x128
    WCLiveActionSheet * _actionSheet; // +0x130
    MMLoadingIndicatorView * _loadingIndicatorView; // +0x138
    MMFinderLiveOnlineUserProfileOpenParameter * _openParameter; // +0x140
    WCFinderContact * _fetchedFinderContact; // +0x148
    NSArray * _badgeInfos; // +0x150
    CContact * _contact; // +0x158
    FinderAudienceLiveInfo * _audienceLiveInfo; // +0x160
    FinderLiveContact * _fetchedLiveContact; // +0x168
    WCFinderContactPreviewData * _previewData; // +0x170
    FinderLiveNoticeInfo * _noticeInfo; // +0x178
    FinderLiveNextLiveNotificationInfo * _nextLiveNotificationInfo; // +0x180
    MMFinderLiveNoticeViewLogic * _noticeLogic; // +0x188
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x190
    NSMutableSet * _reportedExposureElements; // +0x198
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)initContactInfoViews;
- (void)initSignViews;
- (void)initBottomButtons;
- (void)layoutUI;
- (void)layoutHeadImageAndMicSeat;
- (void)layoutDisplayName;
- (void)layoutFollowButton;
- (void)layoutSignAndBadgeViews;
- (double)layoutProfileExtInfo;
- (void)layoutTableViewWithBottomOffset:(double)arg1;
- (void)layoutBottomButtons:(double)arg1 profileDetailViewTopMargin:(double)arg2 bottomOffset:(double)arg3;
- (void)layoutHighlightMask;
- (void)layoutLocationAndGenderViewsWithOrigin:(CGPoint)arg1 andMaxWidth:(double)arg2;
- (void)layoutSubviews;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)openWithAnimation:(BOOL)arg1;
- (void)openWithParameter:(id)arg1 animation:(BOOL)arg2;
- (void)reloadPageSheetTopBar;
- (void)reloadWithFinderContact:(id)arg1;
- (void)reloadWithFinderContact:(id)arg1 hasFetchCompleteContact:(BOOL)arg2;
- (void)reloadWithDisableCommentDef:(unsigned long long)arg1;
- (void)reloadWithIsSendPrivateMsgEnable:(BOOL)arg1 liveContactExtInfo:(id)arg2;
- (void)updateWithBadgeInfos:(id)arg1;
- (void)handleMicUsersInfoChanged:(id)arg1;
- (void)closeDirectly;
- (void)close;
- (void)closeWithAnimation:(BOOL)arg1 clearCallbacks:(BOOL)arg2;
- (void)displayUsrProfileViewWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1 refreshContact:(BOOL)arg2;
- (void)fetchLiveContact;
- (void)fetchLiveContactWithTaskId:(id)arg1 completion:(id /* block */)arg2;
- (void)loadAudienceLiveInfo;
- (void)removeLoadingIndicator;
- (void)clearMaskHighlightRect;
- (unsigned long long)getCommentDef;
- (BOOL)isCommentEnable;
- (void)reloadData;
- (void)reloadMicSeatInfo;
- (void)reloadHeadImage;
- (void)reloadFollowButton;
- (void)reloadProfileExtInfo;
- (void)applyActionItems:(id)arg1;
- (void)reloadActionButtons;
- (id)makeSendGiftItem;
- (id)makeMuteOrUnmuteMicItem;
- (id)makeMaximizeOrMinimizeMicAudienceItem;
- (id)makeStopConnectMicItem;
- (void)reloadBadges;
- (void)reloadMaskAndAppearance;
- (void)reloadTableViewSection;
- (void)fetchPreviewData:(unsigned long long)arg1;
- (void)updateViewColorInDarkMode:(BOOL)arg1;
- (void)tapMask;
- (unsigned int)getVisibleButtonCount;
- (void)refreshForDisplayNameLabel:(double)arg1;
- (void)updateHeadImageConerRadius:(double)arg1;
- (void)updateAuthInfoView;
- (id)reportedExposureElements;
- (id)finderContact;
- (id)userName;
- (BOOL)isAnchor;
- (BOOL)isAssistant;
- (BOOL)isSyndicateParticipant;
- (BOOL)isAudienceAnonymous;
- (BOOL)isWechatIdentity;
- (BOOL)isFinderIdentity;
- (BOOL)enableSendMsg;
- (BOOL)enableConnectMicUserSendMsg;
- (BOOL)enableConnectMicUserSendGift;
- (BOOL)enableDisplayFollowButton;
- (BOOL)enableDisplayFollowButtonForAudience;
- (BOOL)enableProfileLiveInfoView;
- (BOOL)enableLiveNoticeInfoView;
- (BOOL)enableFinderPreview;
- (BOOL)enableDisplayProfileLiveInfoView;
- (double)contentViewHeight;
- (CGRect)contentViewFrame;
- (unsigned long long)previewScene;
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
- (void)reloadDataForTableView;
- (void)addFinderEntranceCellAtSection:(id)arg1 previewData:(id)arg2;
- (void)addProfileNoticeInfoCellAtSection:(id)arg1 noticeInfo:(id)arg2 nextLiveNotificationInfo:(id)arg3;
- (void)addAudienceLiveInfoCellAtSection:(id)arg1 audienceLiveInfo:(id)arg2;
- (void)showFinderProfile;
- (void)showNoticeInfo;
- (id)getFinderCellViewWithPreviewData:(id)arg1;
- (void)checkAndCreateMicSeatInfoView;
- (void)onTapMicSeatInfoView:(id)arg1;
- (id)makeStopConnectMicActionLoadingIndicator;
- (BOOL)isAnchorConnectMicScene;
- (void)reloadActionButtonsForAnchorConnectMic;
- (id)findStopConnectMicItemView;
- (void)syncStopConnectMicActionLoadingIndicatorWithItemView:(id)arg1;
- (id)makeMoreActionButton;
- (void)onTapMoreActionButton;
- (id)makeNormalMoreItemWithTitle:(id)arg1;
- (id)makeDisabledMoreItemWithTitle:(id)arg1;
- (id)buildMoreActionSheetItems;
- (void)showMoreActionSheetForAnchorConnectMic;
- (id)getViewController;
- (void)onFinderLiveNoticeReserved:(BOOL)arg1;
- (void)onFinderLiveNoticeInfoModified:(id)arg1;
- (void)onFinderLiveNoticeInfoDidRevoked:(id)arg1;
- (void)onFinderLiveNoticeTopStateDidChanged;
- (void)onNextLiveNoticeChanged:(id)arg1;
- (BOOL)dispatchProfileActionSheetCommonButtonTitle:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportOnlineHotRankIdentityCardWithType:(long long)arg1;
- (id)identityCardMicId;
- (long long)identityCardSource;
- (long long)identityCardUserType;
- (long long)identityCardIdentity;
- (long long)identityCardDisplayType;
- (long long)identityCardDisplayTypeForProfileAndElement;
- (long long)identityCardShowFinderProfile;
- (void)reportIdentityCardExpose;
- (void)reportIdentityCardProfileModuleExposeIfNeeded;
- (void)reportIdentityCardProfileModuleExpose;
- (void)reportIdentityCardProfileModuleExposeWithProfilePos:(unsigned long long)arg1;
- (void)reportIdentityCardProfileModuleClickWithProfilePos:(unsigned long long)arg1;
- (void)reportIdentityCardElement:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)reportIdentityCardElementExposureIfNeeded:(unsigned long long)arg1;
- (unsigned long long)elementForActionItemType:(unsigned long long)arg1;
- (unsigned long long)elementForMoreActionSheetButtonTitle:(id)arg1;
- (void)performInitialExposureScanIfNeeded;
- (void)scanAndReportItemExposure;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reportProfileActionWithType:(unsigned long long)arg1;
- (unsigned long long)getLiveReporterProfileScene;
- (unsigned long long)getLiveReporterUserIdentity;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)handleMaximizeOrMinimizeMicAudienceActionWithType:(unsigned long long)arg1;
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
- (id)maskingView;
- (void)setMaskingView:(id)arg1;
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
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
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
- (unsigned int)visibleBadgeCount;
- (void)setVisibleBadgeCount:(unsigned int)arg1;
- (id)micSeatInfoView;
- (void)setMicSeatInfoView:(id)arg1;
- (id)micSeatNameLabel;
- (void)setMicSeatNameLabel:(id)arg1;
- (id)editMicSeatNameIcon;
- (void)setEditMicSeatNameIcon:(id)arg1;
- (id)stopConnectMicActionLoadingIndicator;
- (void)setStopConnectMicActionLoadingIndicator:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)actionButtonScrollView;
- (void)setActionButtonScrollView:(id)arg1;
- (id)singleActionButton;
- (void)setSingleActionButton:(id)arg1;
- (id)currentSingleActionItem;
- (void)setCurrentSingleActionItem:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)sendGiftButton;
- (void)setSendGiftButton:(id)arg1;
- (id)switchLiveRoomButton;
- (void)setSwitchLiveRoomButton:(id)arg1;
- (id)bottomButtonList;
- (void)setBottomButtonList:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)fetchedFinderContact;
- (void)setFetchedFinderContact:(id)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)audienceLiveInfo;
- (void)setAudienceLiveInfo:(id)arg1;
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
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)nextLiveNotificationInfo;
- (void)setNextLiveNotificationInfo:(id)arg1;
- (id)noticeLogic;
- (void)setNoticeLogic:(id)arg1;
- (id)reserveNoticeLogic;
- (void)setReserveNoticeLogic:(id)arg1;
- (void)setReportedExposureElements:(id)arg1;
- (BOOL)pendingInitialExposureScan;
- (void)setPendingInitialExposureScan:(BOOL)arg1;
- (BOOL)hasReportedIdentityCardExposure;
- (void)setHasReportedIdentityCardExposure:(BOOL)arg1;
- (BOOL)waitingForIdentityCardPreview;
- (void)setWaitingForIdentityCardPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end

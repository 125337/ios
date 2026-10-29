@interface WCFinderStreamProfileHeaderView : UIView <WCFinderHeadImageViewDelegate, ILinkEventExt, WCFinderFittingWidthRichViewDelegate, WCFinderStreamProfileHeadDataDelegate, WCFinderProfileServiceViewDelegate, WCFinderSizingRichTextDelegate, WCFinderProfileCardContainerExposeDelegate, WCFinderRedDotExt>
{
    BOOL limitOne; // +0x8
    BOOL _headerRightContainerAlignTop; // +0x9
    WCFinderProfileReporter * _reporter; // +0x10
    WCFinderSteamProfileHeaderTheme * _theme; // +0x18
    id <WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate> _delegate; // +0x20
    WCFinderStreamProfileHeaderViewMeasure * _measure; // +0x28
    UIColor * _darkBtnBGColor; // +0x30
    WCFinderStreamProfileHeadData * _viewModel; // +0x38
    UIView * _headerImageContainer; // +0x40
    UIView * _headerRightContainer; // +0x48
    WCFinderHeadImageView * _headImageView; // +0x50
    NSString * _headerImageUrl; // +0x58
    WCFinderProfileWarningView * _warningView; // +0x60
    WCFinderImageRedDotBaseView * _moreActionButton; // +0x68
    UIButton * _followButton; // +0x70
    WCFinderLinearView * _userNameInfoContainer; // +0x78
    WCFinderLinearView * _nameAreaContainer; // +0x80
    WCFinderSizingRichTextLayout * _signatureLayout; // +0x88
    UIView * _infoContainer; // +0x90
    NSMutableDictionary * _customItemInsets; // +0x98
    NSMutableDictionary * _infoItemInsets; // +0xa0
    NSMutableDictionary * _specialPadding; // +0xa8
    NSMutableDictionary * _customLayoutFuncBlockMap; // +0xb0
    NSMutableDictionary * _redDotChangeNotifyBlocks; // +0xb8
}
+ (BOOL)supportDarkModel;
+ (id)makeSignatureTextView:(int)arg1;
+ (id)parseJumpInfoTailIcon:(id)arg1 key:(id)arg2 size:(CGSize *)arg3 padding:(double *)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (id)measure;
- (double)headerImageBottom;
- (double)headerImageTop;
- (id)createHeadImageViewContainer;
- (id)createHeadImageView;
- (id)createLabel:(id)arg1 color:(id)arg2 coveredColor:(id)arg3;
- (id)createColorIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createLinkIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createIconArrowField:(id)arg1;
- (id)createNormalIconArrowField:(id)arg1;
- (id)createMaskButtonWithHeight:(double)arg1 maskColor:(id)arg2;
- (void)updateActionButton:(id)arg1 color:(id)arg2;
- (void)updateWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setupWarningView;
- (void)_configWarningView:(id)arg1;
- (void)_configGuardNowView;
- (void)setupHeaderView;
- (void)setupNameLineViews;
- (void)_onShowNameCopyMenu:(id)arg1;
- (void)setupAuthViews;
- (id)displayAuthInfoText:(id)arg1;
- (void)setupThirdLines;
- (void)setupPrivateTips;
- (void)setupFollowWarningView;
- (void)setupHeaderRightButtons;
- (BOOL)setupSearchButton:(id)arg1;
- (BOOL)setupMoreMoreButton:(id)arg1;
- (BOOL)shouldShowPostButton;
- (BOOL)setupPostButton:(id)arg1;
- (id)createTagLabel;
- (void)setupGameAchievement;
- (void)setupSignatureGuide;
- (void)setupSignature;
- (void)onExpandableRichTextViewClickSuffixText:(id)arg1;
- (void)onExpandableRichTextView:(id)arg1 clickURL:(id)arg2;
- (void)onExpandableRichTextViewSizeChanged:(id)arg1;
- (void)onExpandableRichTextViewExpandChanged:(id)arg1;
- (id)signatureDisplayText;
- (void)setupIPMCN;
- (void)setupOriginalStatement;
- (void)setupMomentsCount;
- (id)userAccountInfo;
- (void)setupFriendFollowCount;
- (void)setupShowInWXProfile;
- (void)setupFans;
- (void)setupAuthorLikeCount;
- (void)setupPOIView;
- (void)setupBrandInfoView;
- (void)setupAddFriendView;
- (void)setupStoreView;
- (void)setupMiniApp;
- (void)setupWinterOlympicsView;
- (void)setupSuperTingRadioView;
- (void)setupCards;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)setupInspirationSquareHeaderView;
- (void)setupServiceView;
- (void)setupFollowRecommend:(id)arg1;
- (void)setupStoreActionButton:(id)arg1;
- (void)setupMusicInfo;
- (void)setupButtons;
- (void)setupPostTipsView;
- (void)setupFollowButton:(id)arg1;
- (CGRect)followButtonFrame;
- (void)setupMsgButton:(id)arg1;
- (void)setupMemberZoneButton:(id)arg1;
- (void)setupWecomKFButton:(id)arg1;
- (void)setupPostActionButton:(id)arg1;
- (void)setupLiveButton:(id)arg1;
- (void)setupNormalButtonBackground:(id)arg1;
- (void)setupButtonIconTextPadding:(id)arg1 padding:(double)arg2;
- (id)buttonTitleColor;
- (BOOL)showWecomKF;
- (BOOL)showServiceWecomKF;
- (id)serviceKFJumpInfo;
- (BOOL)hiddenMessageButton;
- (void)setupClubMember;
- (void)onClickServiceMenuItem:(id)arg1;
- (double)layoutElements;
- (double)layoutHeaderArea;
- (void)layoutHeaderRightView:(double *)arg1;
- (double)containerMaxWidth;
- (void)layoutUserNameInfoContainer:(double)arg1;
- (double)layoutInfoContainer;
- (void)onNameLineAreaHeightChange;
- (void)sizeToFit;
- (void)onHeaderViewModelChanged;
- (void)onHeaderViewCoverChanged:(long long)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onLongPressNickname:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyNickname:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (long long)currentMMUserInterfaceStyle;
- (void)onRichView:(id)arg1 expandChanged:(BOOL)arg2;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMeasure:(id)arg1;
- (id)darkBtnBGColor;
- (void)setDarkBtnBGColor:(id)arg1;
- (id)viewModel;
- (id)headerImageContainer;
- (void)setHeaderImageContainer:(id)arg1;
- (id)headerRightContainer;
- (void)setHeaderRightContainer:(id)arg1;
- (BOOL)headerRightContainerAlignTop;
- (void)setHeaderRightContainerAlignTop:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)headerImageUrl;
- (void)setHeaderImageUrl:(id)arg1;
- (id)warningView;
- (void)setWarningView:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)userNameInfoContainer;
- (void)setUserNameInfoContainer:(id)arg1;
- (id)nameAreaContainer;
- (void)setNameAreaContainer:(id)arg1;
- (id)signatureLayout;
- (void)setSignatureLayout:(id)arg1;
- (id)infoContainer;
- (void)setInfoContainer:(id)arg1;
- (id)customItemInsets;
- (void)setCustomItemInsets:(id)arg1;
- (id)infoItemInsets;
- (void)setInfoItemInsets:(id)arg1;
- (id)specialPadding;
- (void)setSpecialPadding:(id)arg1;
- (id)customLayoutFuncBlockMap;
- (void)setCustomLayoutFuncBlockMap:(id)arg1;
- (id)redDotChangeNotifyBlocks;
- (void)setRedDotChangeNotifyBlocks:(id)arg1;
- (void).cxx_destruct;
@end

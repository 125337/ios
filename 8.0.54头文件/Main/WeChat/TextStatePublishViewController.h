@interface TextStatePublishViewController : MMUIViewController <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCTimelinePOIPickerViewControllerDelegate, WCMomentsPrivacyViewControllerDelegate, WCFinderFeedPickerViewControllerDelegate, EmoticonSearchViewControllerDelegate, WCCommonInputViewDelegate, TextStatePublishCustomIconViewDelegate, InputControllerDelegate, IStoreEmotionSingleDownloadMgrExt, TextStateMgrExt, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _preserveLastPrivacy; // +0x68
    BOOL _isBeingLayout; // +0x69
    BOOL _showingToast; // +0x6a
    unsigned int _enterScene; // +0x6c
    unsigned int _publishScene; // +0x70
    unsigned int _nearbyExperiment; // +0x74
    id <TextStatePublishViewControllerDelegate> _delegate; // +0x78
    NSString * _sessionId; // +0x80
    TextStatePublishContentBuilder * _builder; // +0x88
    TextStatePublishConfiguration * _configuration; // +0x90
    NSDictionary * _attachInfo; // +0x98
    unsigned long long _emoticonSwitch; // +0xa0
    TextStatePublishTitleView * _customTitleView; // +0xa8
    UIBarButtonItem * _exitBarButton; // +0xb0
    UIView * _backgroundContainerView; // +0xb8
    UIView * _backgroundView; // +0xc0
    TextStatePublishMediaSwitchView * _mediaSwitchView; // +0xc8
    UIScrollView * _containerView; // +0xd0
    UIView * _headerView; // +0xd8
    TextStatePublishIconButton * _headerIconButton; // +0xe0
    TextStatePublishSourceView * _sourceView; // +0xe8
    UIView * _contentView; // +0xf0
    MMGrowTextView * _descriptionTextView; // +0xf8
    MMUILabel * _placeholderLabel; // +0x100
    MMUIButton * _topicTextButton; // +0x108
    MMUILabel * _positionLabel; // +0x110
    UIView * _bottomToolBar; // +0x118
    NSArray * _bottomToolButtonList; // +0x120
    MMUIButton * _bottomDoneButton; // +0x128
    TextStatePublishGuideView * _guideView; // +0x130
    TextStateTopicGuideBubbleView * _topicGuideBubbleView; // +0x138
    UIView<TextStatePublishIconPicker> * _iconCollectionView; // +0x140
    UIViewPropertyAnimator * _iconCollectionShowAnimator; // +0x148
    UIViewPropertyAnimator * _iconCollectionHideAnimator; // +0x150
    TextStatePublishIconList * _publishIconList; // +0x158
    NSString * _customIconDescription; // +0x160
    TextStateIcon * _iconWrap; // +0x168
    NSString * _defaultImageId; // +0x170
    WCLocationInfo * _positionInfo; // +0x178
    WCMomentsPrivacyParams * _privacyParams; // +0x180
    long long _privacy; // +0x188
    NSArray * _privacyContactNameList; // +0x190
    NSArray * _privacyLabelList; // +0x198
    NSArray * _privacyContactList; // +0x1a0
    TextStatePublishSourceInfo * _sourceInfo; // +0x1a8
    EmoticonBoardView * _emoticonBoardView; // +0x1b0
    TextStatePublishEmoticonView * _emoticonView; // +0x1b8
    CEmoticonWrap * _emoticonWrap; // +0x1c0
    WCInputController * _inputController; // +0x1c8
    TextStatePublishInputBar * _inputBar; // +0x1d0
    UIView * _inputBackgroundView; // +0x1d8
    UITapGestureRecognizer * _tapGesture; // +0x1e0
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0x1e8
    WCStatusPrivacySetting * _lastPostPrivacySetting; // +0x1f0
    TextStatePublishReportObject * _reportObject; // +0x1f8
    id /* block */ _postNewbieGuideHandler; // +0x200
    id /* block */ _postPositionAuthorizationAndAlertHandler; // +0x208
    PrivateInfo * _privateInfo; // +0x210
}
- (void)forceLayoutSubviewsAnimated;
- (void)setTransitionProgress:(double)arg1;
- (void)registerYReportSdk;
- (void)jumpToImagePickerController;
- (void)jumpToCameraController;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (BOOL)enableToSelectLive;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)dealImageJump:(id)arg1 source:(unsigned int)arg2 picker:(id)arg3;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)init;
- (void)initNavigationItem;
- (void)initView;
- (void)initInputController;
- (void)initGesture;
- (void)initData;
- (void)initReportObject;
- (void)dealloc;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
- (void)configureView;
- (void)refreshDescriptionTextView;
- (void)initCustomTitleView;
- (void)initBackgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)initContainerView;
- (void)initHeaderView;
- (void)initContentView;
- (void)initBottomView;
- (void)initIconCollectionView;
- (void)initGuideView;
- (void)initTopicGuideBubbleView;
- (id)emoticonBoardView;
- (id)emoticonView;
- (id)bottomButtonWithType:(long long)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsAnimated:(BOOL)arg1;
- (void)layoutContentView;
- (void)layoutContentViewForBeginY:(double)arg1 maxHeight:(double)arg2;
- (void)layoutHeaderView;
- (void)layoutIconCollectionView;
- (void)layoutBottomView;
- (void)layoutBackgroundView;
- (void)layoutTopicGuideBubbleView;
- (void)layoutInputView;
- (void)layoutToastViewIfNeeded;
- (void)checkNewbieGuide;
- (void)tryToShowTopicGuideBubble;
- (void)tryToHideTopicGuideBubble;
- (void)checkPositionAuthorization;
- (void)checkPrivacyChangeAlertWithForceShow:(BOOL)arg1;
- (void)showPrivacyChangeAlert;
- (void)showIconCollectionView;
- (void)hideIconCollectionView;
- (double)iconCollectionViewYForShowing:(BOOL)arg1;
- (double)iconCollectionViewY;
- (id)iconCollectionAnimatorForShowing:(BOOL)arg1;
- (void)authorizePositionWithCompletion:(id /* block */)arg1;
- (BOOL)showErrorToastWithText:(id)arg1;
- (void)updateRedDot;
- (void)buildContentIfNeeded;
- (void)clearMediaSourceInfoIfNeeded;
- (void)setSourceInfo:(id)arg1;
- (void)setPositionInfo:(id)arg1;
- (void)setIconWrap:(id)arg1;
- (void)setCustomIconDescription:(id)arg1;
- (BOOL)canSetEmoticon;
- (void)setEmoticonWrap:(id)arg1;
- (void)privatePrivacyChanged:(long long)arg1 tagNameList:(id)arg2 contactList:(id)arg3;
- (void)onDone;
- (void)onTapExitBarButtonItem;
- (void)onTapTopicTextButton;
- (void)onTapTopicIconButton;
- (void)onTapTakeSightButton:(id)arg1;
- (void)jumpToFinderFeedPickerController;
- (id)getFinderPickerExtInfo;
- (void)onTapPositionButton:(id)arg1;
- (void)jumpToPositionPickerController;
- (void)onTapPrivacyButton:(id)arg1;
- (void)initPrivateInfo;
- (void)onTapView:(id)arg1;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)endEditing;
- (void)onGetTextStateVideo:(id)arg1 reportInfo:(id)arg2;
- (void)onGetTextStateImage:(id)arg1 source:(unsigned int)arg2;
- (void)onGetTextStateLivePhoto:(id)arg1 source:(unsigned int)arg2;
- (long long)defaultPrivacy;
- (long long)nonExperimentPrivacy;
- (long long)wcPostPrivacy;
- (id)privacyButtonTitle;
- (BOOL)isFrom3rdParty;
- (id)positionNameFromLocationInfo:(id)arg1;
- (BOOL)isIconCollectionViewShowing;
- (BOOL)isGuideViewShowing;
- (double)inputViewHeight;
- (void)scrollContainerToCursorAnimated:(BOOL)arg1;
- (void)scrollContainerToBottomAnimated:(BOOL)arg1;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidExceedMaxLength;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)onInputModeChangingTo:(long long)arg1;
- (BOOL)canSelectEmoji:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)onEmoticonBoardStateDidChanged:(BOOL)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onTapNonexpandedView:(id)arg1;
- (void)onTextExceedMaxLength:(id)arg1;
- (id)autoReplacedIconWithDescription:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onTextStateIconUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)builder;
- (void)setBuilder:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (unsigned int)publishScene;
- (void)setPublishScene:(unsigned int)arg1;
- (unsigned long long)emoticonSwitch;
- (void)setEmoticonSwitch:(unsigned long long)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)exitBarButton;
- (void)setExitBarButton:(id)arg1;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:(id)arg1;
- (id)backgroundView;
- (id)mediaSwitchView;
- (void)setMediaSwitchView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerIconButton;
- (void)setHeaderIconButton:(id)arg1;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)descriptionTextView;
- (void)setDescriptionTextView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (id)topicTextButton;
- (void)setTopicTextButton:(id)arg1;
- (id)positionLabel;
- (void)setPositionLabel:(id)arg1;
- (id)bottomToolBar;
- (void)setBottomToolBar:(id)arg1;
- (id)bottomToolButtonList;
- (void)setBottomToolButtonList:(id)arg1;
- (id)bottomDoneButton;
- (void)setBottomDoneButton:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)topicGuideBubbleView;
- (void)setTopicGuideBubbleView:(id)arg1;
- (id)iconCollectionView;
- (void)setIconCollectionView:(id)arg1;
- (id)iconCollectionShowAnimator;
- (void)setIconCollectionShowAnimator:(id)arg1;
- (id)iconCollectionHideAnimator;
- (void)setIconCollectionHideAnimator:(id)arg1;
- (id)publishIconList;
- (void)setPublishIconList:(id)arg1;
- (id)customIconDescription;
- (id)iconWrap;
- (id)defaultImageId;
- (void)setDefaultImageId:(id)arg1;
- (id)positionInfo;
- (id)privacyParams;
- (void)setPrivacyParams:(id)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)privacyContactNameList;
- (void)setPrivacyContactNameList:(id)arg1;
- (id)privacyLabelList;
- (void)setPrivacyLabelList:(id)arg1;
- (id)privacyContactList;
- (void)setPrivacyContactList:(id)arg1;
- (BOOL)preserveLastPrivacy;
- (void)setPreserveLastPrivacy:(BOOL)arg1;
- (unsigned int)nearbyExperiment;
- (void)setNearbyExperiment:(unsigned int)arg1;
- (id)sourceInfo;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (id)emoticonWrap;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputBar;
- (void)setInputBar:(id)arg1;
- (id)inputBackgroundView;
- (void)setInputBackgroundView:(id)arg1;
- (BOOL)isBeingLayout;
- (void)setIsBeingLayout:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (BOOL)showingToast;
- (void)setShowingToast:(BOOL)arg1;
- (id)lastPostPrivacySetting;
- (void)setLastPostPrivacySetting:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (id /* block */)postNewbieGuideHandler;
- (void)setPostNewbieGuideHandler:(id /* block */)arg1;
- (id /* block */)postPositionAuthorizationAndAlertHandler;
- (void)setPostPositionAuthorizationAndAlertHandler:(id /* block */)arg1;
- (id)privateInfo;
- (void)setPrivateInfo:(id)arg1;
- (void).cxx_destruct;
@end


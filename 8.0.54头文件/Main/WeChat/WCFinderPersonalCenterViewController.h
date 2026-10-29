@interface WCFinderPersonalCenterViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderRedDotNotifyExt, WCFinderContactExt, WCFinderUserPrepareCgiDelegate, WCFinderCreateCoordinatorDelegate, WCFinderRedDotExt, WCFinderPersonalCenterCollectionViewCellDelegate, WCFinderPostViewControllerDelegate, WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate, WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate, WCActionSheetDelegate, MJShootComposingViewControllerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCVideoProducerViewControllerDelegate, MMImagePickerManagerDelegate, WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate, MMAcceptAgreementResultViewControllerDelegate, WCCoinGetIncomePageInfoCgiDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, MMFinderLivePurchasedFeedViewModelDelegate, WCFinderPersonalCenterSectionHeaderViewDelegate, WCFinderPersonalCenterLayoutDelegate, WCFinderPersonalCenterViewModelDelegate, WCFinderUserPrepareExt, WCActionSheetWithHeadAvatarDelegate, WCFinderMsgSessionMgrExt>
{
    BOOL _hasRedDotAtEnter; // +0x68
    BOOL _hasReportBrandIdentityTipsExpose; // +0x69
    BOOL _showIncomeEntrance; // +0x6a
    BOOL _clickIncomeEntranceCreateFinder; // +0x6b
    BOOL _hasOpenUserLogoutPage; // +0x6c
    BOOL _openPostActionDirectly; // +0x6d
    BOOL _isCompleCheck; // +0x6e
    BOOL _isClickStartLive; // +0x6f
    BOOL _historyExposed; // +0x70
    BOOL _settingExposed; // +0x71
    BOOL _personalCenterShowInteractiveTailText; // +0x72
    int _prepareRet; // +0x74
    UICollectionView * _collectionView; // +0x78
    UICollectionViewFlowLayout * _flowLayout; // +0x80
    WCFinderPersonalCenterWeixinContactCollectionViewCell * _weChatAcctCell; // +0x88
    WCFinderPersonalCenterCollectionViewCell * _finderAcctCell; // +0x90
    WCFinderPersonalCenterTakePhotoCollectionViewCell * _takePhotoCell; // +0x98
    FinderNewUserPrepareResponse * _prepareResponse; // +0xa0
    WCFinderCreateCoordinator * _createCoordinator; // +0xa8
    WCActionSheetWithHeadAvatar * _publishActionSheet; // +0xb0
    WCActionSheet * _liveActionSheet; // +0xb8
    UINavigationController * _imagePickerVC; // +0xc0
    WCFinderPersonalCenterViewModel * _viewModel; // +0xc8
    unsigned long long _enterTime; // +0xd0
    unsigned long long _exportBeginTime; // +0xd8
    double _bePushTime; // +0xe0
    WCFinderProcessTimeRecorder * _processTimeRecarder; // +0xe8
    WCFinderPostActionSheetConfigArray * _postSheetConfigArray; // +0xf0
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xf8
    unsigned long long _pendingOpenVC; // +0x100
    WCFinderWebViewOpener * _creatorWebVCOpener; // +0x108
    unsigned long long _fromScene; // +0x110
    MMFinderLivePurchasedFeedViewModel * _purchasedFeedViewModel; // +0x118
    NSString * _prepareErrorString; // +0x120
    NSString * _descriptionPromptWording; // +0x128
    NSMutableArray * _contactSessions; // +0x130
    MJPublisher * _mjPublisher; // +0x138
    WCFinderPersonalCenterContactData * _contactData; // +0x140
}
- (id)initWithInitModel:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupMenuItems;
- (void)checkSafeRedDotValid;
- (id)postSheetConfigArray;
- (id)contact;
- (BOOL)didNotCreateFinder;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reportProcessTime;
- (id)collectionView;
- (id)flowLayout;
- (void)setupSubviews;
- (void)getFinderContactReviewStatus;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)openCamera;
- (BOOL)_shouldShowIncomeEntry;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)loadContactData;
- (void)initFinderContactCell;
- (void)updateFinderContactCell;
- (void)_updateFinderContactCell;
- (void)resetPrivateMsgData;
- (void)resetCreatorCenterData;
- (long long)_historyEntranceStyle;
- (BOOL)shouldShowInteractiveGuardText;
- (BOOL)shouldShowOrder;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldShowBGCardForSection:(long long)arg2;
- (double)collectionViewSeparatorViewHorizontalPadding:(id)arg1;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickInteractive;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFollowingList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickLikeListList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFavList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickPaymentListList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickNotificationList;
- (void)reportWxNotifyActionEventType:(long long)arg1;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickPivateMsgList;
- (void)reportWXPrivateMsgActionEventType:(long long)arg1;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickOrderCenter;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickHistory;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickBlockManager;
- (void)_onClickSettingButton;
- (void)onFinderPrivateMsgRedDotNeedReload;
- (void)reloadFinderPrivateMsgCell;
- (void)onFinderCreatorCenterNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyFansCountNeedReload;
- (void)updateContactDataUnreadReddotInfo;
- (void)onFinderLiveRedDotChanged;
- (BOOL)enableShowLiveEntraceRedDot;
- (void)reportPersonCenterEvent;
- (void)reportBrandIdentityTipsWithEventType:(long long)arg1;
- (unsigned long long)likeCount;
- (unsigned long long)favCount;
- (BOOL)shouldDisplayPurchasedEntrance;
- (unsigned long long)purchasedCount;
- (unsigned long long)paidMicCount;
- (unsigned long long)joinedMembershipCount;
- (unsigned long long)paidCollectionCount;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)finderUserPrepareHistoryConfigChanged;
- (void)updateFinderUserPrepare:(id)arg1;
- (void)onPurchasedFeedViewModelUpdated:(BOOL)arg1 hasMoreData:(BOOL)arg2;
- (void)onFinderPostEntryNeedReload;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)personalCenterColloectionViewCellClickMemberMsgAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickMentionAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickPrivateMSGAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickCameraAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickLiveAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickCreatorCenter:(id)arg1;
- (void)openH5CreatorCenter;
- (void)preloadCreatorCenterH5;
- (id)creatorCenterUrl;
- (void)preloadCameraTemplateIfNeeded;
- (void)openNativeCreatorCenter;
- (void)showIncomVC;
- (void)_showIncomVCWithJumpInfo;
- (void)personalCenterColloectionViewBlockCellClickShowIncomeAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickTakePhotoAction:(id)arg1;
- (void)_openRealNameVerifyTips;
- (void)_openRealNameVerifyH5Page;
- (void)_afterRealNameVerity;
- (void)personalCenterColloectionViewCellClickRedPacketEvent:(id)arg1;
- (void)personalCenterColloectionViewCellClickShowIncomeAction:(id)arg1;
- (void)showPostEntrance;
- (unsigned long long)getReportPostScene;
- (void)onClickHeadAvatarActionSheet;
- (void)onClickHeadAvatarDismiss;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFinderCameraViewController;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(BOOL)arg1;
- (id)genPostEntranceExtraDict;
- (void)showFinderPublishView;
- (void)enterMiaoJianFinderMovieComposing;
- (void)showMiaoJianFinderComposingPublishView;
- (BOOL)showPrepareRequeestResult;
- (void)realStartLive;
- (void)showLiveCreate;
- (void)showLiveNoticeWithReporter:(id)arg1;
- (void)showLiveMemberNotice;
- (void)createLiveNoticeWithReporter:(id)arg1;
- (void)showLiveNoticeWithLiveInfo:(id)arg1 reporter:(id)arg2;
- (void)onCreateLiveNoticeWithInfo:(id)arg1 reporter:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)processWithSightDraft:(id)arg1;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)getIncomePageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)buildIncomeReddot;
- (void)identityHintButtonDidClick;
- (void)personalCenterClickAccountSelect:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)personalCenterViewModelOtherContactsChanged:(id)arg1;
- (void)rebuildContactsSession;
- (void)personalCenterViewModelChangeSelectedAccount;
- (void)personalCenterViewModelFinderPrivateMsgExposeMsgChanged;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (void)onFinderMsgSessionUpdated;
- (id)mjPublisher;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)startMovieComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)_triggerReportSetting:(BOOL)arg1;
- (void)_triggerReportHistory:(BOOL)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)weChatAcctCell;
- (void)setWeChatAcctCell:(id)arg1;
- (id)finderAcctCell;
- (void)setFinderAcctCell:(id)arg1;
- (id)takePhotoCell;
- (void)setTakePhotoCell:(id)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)publishActionSheet;
- (void)setPublishActionSheet:(id)arg1;
- (id)liveActionSheet;
- (void)setLiveActionSheet:(id)arg1;
- (id)imagePickerVC;
- (void)setImagePickerVC:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)hasRedDotAtEnter;
- (void)setHasRedDotAtEnter:(BOOL)arg1;
- (BOOL)hasReportBrandIdentityTipsExpose;
- (void)setHasReportBrandIdentityTipsExpose:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)exportBeginTime;
- (void)setExportBeginTime:(unsigned long long)arg1;
- (double)bePushTime;
- (void)setBePushTime:(double)arg1;
- (id)processTimeRecarder;
- (void)setProcessTimeRecarder:(id)arg1;
- (void)setPostSheetConfigArray:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (BOOL)showIncomeEntrance;
- (void)setShowIncomeEntrance:(BOOL)arg1;
- (BOOL)clickIncomeEntranceCreateFinder;
- (void)setClickIncomeEntranceCreateFinder:(BOOL)arg1;
- (BOOL)hasOpenUserLogoutPage;
- (void)setHasOpenUserLogoutPage:(BOOL)arg1;
- (unsigned long long)pendingOpenVC;
- (void)setPendingOpenVC:(unsigned long long)arg1;
- (id)creatorWebVCOpener;
- (void)setCreatorWebVCOpener:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (BOOL)openPostActionDirectly;
- (void)setOpenPostActionDirectly:(BOOL)arg1;
- (id)purchasedFeedViewModel;
- (void)setPurchasedFeedViewModel:(id)arg1;
- (int)prepareRet;
- (void)setPrepareRet:(int)arg1;
- (id)prepareErrorString;
- (void)setPrepareErrorString:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (BOOL)isCompleCheck;
- (void)setIsCompleCheck:(BOOL)arg1;
- (BOOL)isClickStartLive;
- (void)setIsClickStartLive:(BOOL)arg1;
- (BOOL)historyExposed;
- (void)setHistoryExposed:(BOOL)arg1;
- (BOOL)settingExposed;
- (void)setSettingExposed:(BOOL)arg1;
- (id)contactSessions;
- (void)setContactSessions:(id)arg1;
- (BOOL)personalCenterShowInteractiveTailText;
- (void)setPersonalCenterShowInteractiveTailText:(BOOL)arg1;
- (void)setMjPublisher:(id)arg1;
- (id)contactData;
- (void)setContactData:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderLivePersonalCenterViewController : MMCPUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate, WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate, WCFinderUserPrepareCgiDelegate, WCActionSheetDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, WCFinderUserPrepareExt, WCFinderContactExt, WCFinderFeedBaseViewControllerProtocol, WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate, WCFinderLiveStartLiveSectionCellDelegate, MMLiveAutoGenerateReplayGuidePanelDelegate, WCFinderLiveExt, WCFinderRedDotExt>
{
    BOOL _isCompleCheck; // +0x70
    BOOL _isClickStartLive; // +0x71
    int _prepareRet; // +0x74
    int _prepareRetNotice; // +0x78
    UICollectionView * _collectionView; // +0x80
    WCFinderPersonalCenterLayout * _flowLayout; // +0x88
    FinderNewUserPrepareResponse * _finderUserPrepare; // +0x90
    FinderLivePersonalCenterPrepareInfo * _userInfo; // +0x98
    WCFinderCreateCoordinator * _createCoordinator; // +0xa0
    WCActionSheet * _liveActionSheet; // +0xa8
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xb0
    NSString * _prepareErrorString; // +0xb8
    NSString * _prepareErrorStringNotice; // +0xc0
    NSString * _descriptionPromptWording; // +0xc8
    WCFinderLivePageStayReporter * _stayReporter; // +0xd0
    NSArray * _sectionInfos; // +0xd8
    NSMutableSet * _exposedFunctionIds; // +0xe0
}
+ (BOOL)isXShoppingRecordShowInMoreFunc;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)refreshLiveUserPrepare;
- (BOOL)hasPaymentRecordSection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)checkCeatorFunctionSectionCellHasRedDot:(id)arg1;
- (id)getViewController;
- (void)basicSettingCellDidClickMsg:(id)arg1;
- (void)basicSettingCellDidClickReward:(id)arg1;
- (void)basicSettingCellDidClickPrivacy:(id)arg1;
- (void)basicSettingCellDidClickSetting:(id)arg1;
- (void)basicSettingCellDidClickRecentWatch:(id)arg1;
- (void)basicSettingCellDidClickReservedRecord:(id)arg1;
- (void)basicSettingCellDidClickMention:(id)arg1;
- (void)paymentInfoCellDidSelectShoppingRecord:(id)arg1;
- (void)paymentInfoCellDidSelectPurchasedRecord:(id)arg1;
- (void)paymentInfoCellDidSelectLotteryRecord:(id)arg1;
- (unsigned long long)paidCollectionCount;
- (unsigned long long)joinedMembershipCount;
- (unsigned long long)purchasedCount;
- (unsigned long long)paidMicCount;
- (id)getPaymentCellConfig;
- (id)collectionView;
- (id)flowLayout;
- (id)exposedFunctionIds;
- (BOOL)enableStartLiveEnhance;
- (void)onStartLiveButtonClicked:(id)arg1;
- (BOOL)checkAccountLogout;
- (void)clickStartLive;
- (void)showLiveCreateWithoutNotice;
- (void)showStartLiveActionSheet;
- (void)showLiveCreate;
- (void)showLiveNoticeWithReporter:(id)arg1;
- (void)showLiveMemberNotice;
- (id)contact;
- (void)createLiveNoticeWithReporter:(id)arg1;
- (BOOL)showPrepareRequeestResult;
- (void)realStartLive;
- (void)showLiveNoticeWithLiveInfo:(id)arg1 reporter:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)onCreateLiveNoticeWithInfo:(id)arg1 reporter:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)creatorFunctionSectionCellDidSelect:(id)arg1 hasRedDot:(BOOL *)arg2;
- (void)pushToHistoryLiveWithJumpInfo:(id)arg1 fromNav:(id)arg2;
- (void)openReplaySettingSheet:(unsigned long long)arg1 objectId:(unsigned long long)arg2 finderUserName:(id)arg3 replayStatusDidChangedBlock:(id /* block */)arg4;
- (void)innerOpenReplaySettingSheet:(id)arg1 finderUserName:(id)arg2 getLiveInfoModel:(id)arg3 replayStatusDidChangedBlock:(id /* block */)arg4;
- (void)enableReplayWithSttings:(id)arg1 liveInfo:(id)arg2 finderUserName:(id)arg3 getLiveInfoModel:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)openLiveReplayPageWithObjectId:(unsigned long long)arg1;
- (void)openCancelReplayPageWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 replayStatusDidChangedBlock:(id /* block */)arg3;
- (void)showCancelReplayConfirmPanelWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 replayStatusDidChangedBlock:(id /* block */)arg3;
- (void)tryCancelReplayWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 replayStatusDidChangedBlock:(id /* block */)arg3;
- (void)onLiveAutoGenerateReplayGuidePanelConfirmedWithSettings:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelCancelled;
- (void)startLiveSectionCellClickLiveAction;
- (void)startLiveSectionCellClickNoticeAction;
- (void)onLiveRecentWatchEntranceUpdate:(BOOL)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)finderUserPrepare;
- (void)setFinderUserPrepare:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)liveActionSheet;
- (void)setLiveActionSheet:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (int)prepareRet;
- (void)setPrepareRet:(int)arg1;
- (id)prepareErrorString;
- (void)setPrepareErrorString:(id)arg1;
- (int)prepareRetNotice;
- (void)setPrepareRetNotice:(int)arg1;
- (id)prepareErrorStringNotice;
- (void)setPrepareErrorStringNotice:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (BOOL)isCompleCheck;
- (void)setIsCompleCheck:(BOOL)arg1;
- (BOOL)isClickStartLive;
- (void)setIsClickStartLive:(BOOL)arg1;
- (id)stayReporter;
- (void)setStayReporter:(id)arg1;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;
- (void)setExposedFunctionIds:(id)arg1;
- (void).cxx_destruct;
@end

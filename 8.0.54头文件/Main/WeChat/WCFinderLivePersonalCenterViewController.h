@interface WCFinderLivePersonalCenterViewController : MMCPUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate, WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate, WCFinderUserPrepareCgiDelegate, WCActionSheetDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, WCFinderUserPrepareExt, WCFinderContactExt, WCFinderFeedBaseViewControllerProtocol, WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate>
{
    BOOL _isCompleCheck; // +0x68
    BOOL _isClickStartLive; // +0x69
    int _prepareRet; // +0x6c
    UICollectionView * _collectionView; // +0x70
    WCFinderPersonalCenterLayout * _flowLayout; // +0x78
    FinderNewUserPrepareResponse * _finderUserPrepare; // +0x80
    FinderLivePersonalCenterPrepareInfo * _userInfo; // +0x88
    WCFinderCreateCoordinator * _createCoordinator; // +0x90
    WCActionSheet * _liveActionSheet; // +0x98
    WCFinderCreateLiveViewModel * _createLiveVM; // +0xa0
    NSString * _prepareErrorString; // +0xa8
    NSString * _descriptionPromptWording; // +0xb0
    WCFinderLivePageStayReporter * _stayReporter; // +0xb8
    NSArray * _sectionInfos; // +0xc0
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
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
- (id)getViewController;
- (void)basicSettingCellDidClickMsg:(id)arg1;
- (void)basicSettingCellDidClickReward:(id)arg1;
- (void)basicSettingCellDidClickPrivacy:(id)arg1;
- (void)basicSettingCellDidClickSetting:(id)arg1;
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
- (void)onStartLiveButtonClicked:(id)arg1;
- (void)clickStartLive;
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
- (void)creatorFunctionSectionCellDidSelect:(id)arg1;
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
- (void).cxx_destruct;
@end


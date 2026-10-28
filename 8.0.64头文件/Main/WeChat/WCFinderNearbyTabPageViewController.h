@interface WCFinderNearbyTabPageViewController : WCFinderTabPageViewController <WCFinderLocationServiceExt, SeePeopleNearbyViewControllerDelegate, WCFinderNearbyTabPageViewModelDelegate, WCFinderRedDotExt, MMLimitedModeEntryViewControllerExt, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _directlyOpenJumpInfoPage; // +0x70
    BOOL _isLocationServiceAuthrized; // +0x71
    id /* block */ _cacheModelUpdateBlock; // +0x78
    WCFinderRedDotCtrlInfo * _nearbyLiveEntryRedDotCtrlInfo; // +0x80
    id <WCFinderNearbyTabPageViewControllerDelegate> _delegate; // +0x88
    MMUIButton * _nearbyPeopleMoreButton; // +0x90
    UIView * _placeHolderView; // +0x98
    NSMutableArray * _childModelArray; // +0xa0
    WCFinderTabPageModel * _liveTabPageModel; // +0xa8
    WCFinderTabPageModel * _feedTabPageModel; // +0xb0
    WCFinderTabPageModel * _peopleTabPageModel; // +0xb8
    WCFinderCreateCoordinator * _createCoordinator; // +0xc0
    WCFinderLiveNearbyReporter * _reporter; // +0xc8
    unsigned long long _initSelectedType; // +0xd0
    unsigned long long _currentSelectedType; // +0xd8
    WCFinderNearbyTabPageCacheModel * _cacheModel; // +0xe0
    unsigned long long _selectedSubTabId; // +0xe8
    WCFinderNearbyTabPageViewModel * _viewModel; // +0xf0
}
- (id)initWithLiveCacheModel:(id)arg1 selectedType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (id)cacheViewModel;
- (void)switchToInitSeletedIndex;
- (int)getCurrenSelectCommentScene;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(BOOL)arg3;
- (unsigned int)getNearbyTabType;
- (void)updateLastestSelectedIndex:(unsigned long long)arg1;
- (void)setRightButtonItemWithPageModel:(id)arg1;
- (void)setRedDotModeObjectID:(id)arg1;
- (id)getNearbyPeopleViewController;
- (void)onBackButtonClicked:(id)arg1;
- (void)refreshTabPage;
- (void)_restoreTabPage;
- (void)genChildModelArray;
- (void)setLiveVCSelectSubTab:(id)arg1;
- (void)onClickMoreItem;
- (void)startLive;
- (long long)indexOfTabPageType:(unsigned long long)arg1;
- (void)updateFeedTabName;
- (void)updateLiveTabName;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)resetLiveTabBlock;
- (id)childModelArray;
- (id)liveTabPageModel;
- (id)feedTabPageModel;
- (id)peopleTabPageModel;
- (id)nearbyPeopleMoreButton;
- (id)placeHolderView;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)willDisappear;
- (BOOL)shouldInteractivePop;
- (BOOL)switchToLiveTab;
- (void)onPeopleNearbyWillGoBackToRootView;
- (void)onFinderGetLiveTabsInfoFinished;
- (void)checkAbnormalLiveIfNeeded;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id /* block */)cacheModelUpdateBlock;
- (void)setCacheModelUpdateBlock:(id /* block */)arg1;
- (id)nearbyLiveEntryRedDotCtrlInfo;
- (void)setNearbyLiveEntryRedDotCtrlInfo:(id)arg1;
- (BOOL)directlyOpenJumpInfoPage;
- (void)setDirectlyOpenJumpInfoPage:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setNearbyPeopleMoreButton:(id)arg1;
- (void)setPlaceHolderView:(id)arg1;
- (void)setChildModelArray:(id)arg1;
- (void)setLiveTabPageModel:(id)arg1;
- (void)setFeedTabPageModel:(id)arg1;
- (void)setPeopleTabPageModel:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (unsigned long long)initSelectedType;
- (void)setInitSelectedType:(unsigned long long)arg1;
- (unsigned long long)currentSelectedType;
- (void)setCurrentSelectedType:(unsigned long long)arg1;
- (id)cacheModel;
- (void)setCacheModel:(id)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (unsigned long long)selectedSubTabId;
- (void)setSelectedSubTabId:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

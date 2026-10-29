@interface WCFinderPrimarySettingViewController : MMUIViewController <WCFinderContactExt, WCFinderUserPrepareCgiDelegate, ForwardMessageLogicDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _hasExposeFinderToBrandSwitch; // +0x68
    BOOL _hasExposeCreatorCenter; // +0x69
    FinderNewUserPrepareResponse * _prepareResponse; // +0x70
    WCFinderPersonalSettingParams * _params; // +0x78
    WCFinderContact * _contact; // +0x80
    WCFinderPrimarySettingViewModel * _viewModel; // +0x88
    DataCenterConfig * _dataCenterConfig; // +0x90
    WCTableViewManager * _tableViewManager; // +0x98
    long long _fetchPrepareState; // +0xa0
    WCFinderProcessTimeRecorder * _creatorCenterProcessRecorder; // +0xa8
    ForwardMessageLogicController * _forwardController; // +0xb0
}
- (id)initWithContact:(id)arg1 params:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reportSettingExpose;
- (void)fetchUserPrepareForAuthorDataCenter;
- (void)fetchUserPrepareForUpdateContact;
- (void)pushDefaultOrAuthorDataCenterMiniAppWithUserName:(id)arg1 pagePath:(id)arg2;
- (void)setContact:(id)arg1;
- (void)configureTableView;
- (BOOL)enableShowOriginalEntry;
- (void)reloadTableView;
- (void)addCreatorCenterGroupSection:(id)arg1;
- (id)getCreatorCenterCell;
- (id)getCreateMilestoneCell;
- (void)reportCreatorCenter:(BOOL)arg1;
- (void)reportCreatorCenterExpose;
- (void)addShowMusicTabSection:(id)arg1;
- (void)onShowMuiscSwitchChanged:(id)arg1;
- (void)addHeaderSection:(id)arg1;
- (void)addShareSession:(id)arg1;
- (void)addPrivacySession:(id)arg1;
- (void)addChangeContactStatusSection:(id)arg1;
- (id)makeSectionSeparator;
- (void)makeHeadCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickHeadCell;
- (void)clickNameCard;
- (id)produceGuideUrl;
- (void)clickAuthorToolCell;
- (void)didTapShareAccountCell;
- (void)clickPrivacy;
- (void)clickPOI;
- (void)openAccountSettingVC;
- (void)finderToBrandSwitchCell:(id)arg1 willDisplayAtIndexPath:(id)arg2;
- (void)changeFinderToShowLiveInfoSwitch:(id)arg1;
- (void)changeFinderToBrandAccountSwitch;
- (void)selectedShowInWXProfileAction;
- (void)clickCreatorCenter;
- (void)clickCreateMilestone;
- (void)onCreatorPageExitTime:(unsigned long long)arg1 enterTime:(unsigned long long)arg2;
- (id)currentFinderPrepare;
- (id)creatorCenterURL:(id *)arg1;
- (id)appendReportArgumentToCreatorCenterUrl:(id)arg1 tailWording:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (id)getCurrentViewController;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)contact;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)dataCenterConfig;
- (void)setDataCenterConfig:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (BOOL)hasExposeFinderToBrandSwitch;
- (void)setHasExposeFinderToBrandSwitch:(BOOL)arg1;
- (BOOL)hasExposeCreatorCenter;
- (void)setHasExposeCreatorCenter:(BOOL)arg1;
- (long long)fetchPrepareState;
- (void)setFetchPrepareState:(long long)arg1;
- (id)creatorCenterProcessRecorder;
- (void)setCreatorCenterProcessRecorder:(id)arg1;
- (id)forwardController;
- (void)setForwardController:(id)arg1;
- (void).cxx_destruct;
@end


@interface SeePeopleNearbyViewController : MMUIViewController <ILocationMgrExt, SeePeopleNearByUIDelegate, settingMyAccountExtInfoDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, PeopleNearByListViewControllerDelegate>
{
    PeopleNearByListViewController * m_peopleListView; // +0x68
    SeePeopleNearByLogicController * m_logicController; // +0x70
    LBSErrorViewController * m_findNothingView; // +0x78
    MMTipsViewController * m_introView; // +0x80
    unsigned int m_uiScene; // +0x88
    unsigned long long enterTimeInMs; // +0x90
    BOOL _createFromFinderNearby; // +0x98
    BOOL _contentYIgnoreFromFinderNearbyFlag; // +0x99
    BOOL _isAdClicked; // +0x9a
    BOOL _enterBackground; // +0x9b
    BOOL _showAccuracyAuthorizationTip; // +0x9c
    int _currentAuthLogType; // +0xa0
    id <SeePeopleNearbyViewControllerDelegate> _delegate; // +0xa8
    NSString * _shownAdId; // +0xb0
    UIView * _authorizationTipContainerView; // +0xb8
    MMLocationAccuracyAuthorizationTipView * _accuracyAuthorizationTipView; // +0xc0
    WCUIAlertView * _currAlertView; // +0xc8
    SettingMyAccountExtInfoViewController * _extInfoVC; // +0xd0
    MMSystemAuthCancellableToken * _requestAuthToken; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)configShowInNearByLife:(double)arg1;
- (void)checkLocationAuthorization;
- (void)initNotifications;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)isProfileExtInfoOK;
- (void)promptForProfileExtInfo;
- (void)onClickNeverPromptForAgree:(id)arg1;
- (void)promptForLBSUsageWarnning;
- (void)showOperationMenu:(id)arg1;
- (void)setRightNavBtnNil;
- (void)setRightNavBtn;
- (void)setTitleNavView;
- (id)title;
- (void)viewDidLoad;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)initAccuracyAuthorizationTipView;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)checkLbs:(BOOL)arg1;
- (void)onClearMyLbsData;
- (void)onRefreshMyFriends;
- (void)showMessage:(id)arg1;
- (void)goBackToRootView;
- (void)onClearMyLbsDataFinishedWithResult:(BOOL)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onUpdateAdvertisement:(id)arg1;
- (void)onGetLBSRecommendPoiList:(id)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showPeopleInfoView:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)onGetCertificationFinish;
- (void)SettingMyAccountExtInfoExit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmClearMyLbsData:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)adjustSubviewRects;
- (void)onCloseAd:(id)arg1;
- (void)onSelectAd:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (void)onCancel;
- (BOOL)shouldInteractivePop;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)setShowAccuracyAuthorizationTip:(BOOL)arg1;
- (void)updateAccuracyAuthorizationTipHidden;
- (void)adjustTableViewInset;
- (double)getCurrentContentViewY;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)setCurrentAuthLogType:(int)arg1;
- (void)registerYReportSdk;
- (id)peopleListView;
- (void)setPeopleListView:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)findNothingView;
- (void)setFindNothingView:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (BOOL)createFromFinderNearby;
- (void)setCreateFromFinderNearby:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)contentYIgnoreFromFinderNearbyFlag;
- (void)setContentYIgnoreFromFinderNearbyFlag:(BOOL)arg1;
- (BOOL)isAdClicked;
- (void)setIsAdClicked:(BOOL)arg1;
- (id)shownAdId;
- (void)setShownAdId:(id)arg1;
- (id)authorizationTipContainerView;
- (void)setAuthorizationTipContainerView:(id)arg1;
- (id)accuracyAuthorizationTipView;
- (void)setAccuracyAuthorizationTipView:(id)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (BOOL)enterBackground;
- (void)setEnterBackground:(BOOL)arg1;
- (BOOL)showAccuracyAuthorizationTip;
- (int)currentAuthLogType;
- (id)extInfoVC;
- (void)setExtInfoVC:(id)arg1;
- (id)requestAuthToken;
- (void)setRequestAuthToken:(id)arg1;
- (void).cxx_destruct;
@end


@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate, WAAppAuthorizationDetailViewControllerDelegate, IMMTemplateMsgAuthServiceExt, IWADeviceVoipAuthServiceExt>
{
    NSString * m_appid; // +0x68
    NSMutableArray * m_authorationList; // +0x70
    BOOL m_isAuthInfoChanged; // +0x78
    BOOL m_isBluetoothInfoChanged; // +0x79
    UIView * m_emptyView; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    BOOL m_userChangedLocationOptionState; // +0x90
    unsigned int m_userSelectedLocationOptionState; // +0x94
    BOOL m_userChangedFuzzyLocationOptionState; // +0x98
    unsigned int m_userSelectedFuzzyLocationOptionState; // +0x9c
    BOOL m_userChangedBluetoothOptionState; // +0xa0
    unsigned int m_userSelectedBluetoothOptionState; // +0xa4
    BOOL _hasTemplateMsgAuthCell; // +0xa8
    NSArray * _deviceVoipAuthDeviceList; // +0xb0
    id <WAAppAuthorizationDelegate> _delegate; // +0xb8
    WAContact * _contact; // +0xc0
    WAAppAuthRespData * _authData; // +0xc8
}
+ (id)transferScopeCacheToSubscriptionModel:(id)arg1;
- (id)init;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initCustomNavigationBar;
- (void)onReturn;
- (void)initTableViewInfo;
- (void)reloadTableViewInfo;
- (id)getTemplateMsgAuthCellTips;
- (id)getDenyOptionItem;
- (id)getWhenInUseOptionItem;
- (id)getAlwaysAllowOptionItem;
- (id)getThreeStateAuthDisplayStringWithForegroundAllow:(BOOL)arg1 backgroundAllow:(BOOL)arg2;
- (id)getFuzzyLocationAuthDisplayStringWithAllow:(BOOL)arg1;
- (id)getLocationDisplayStringForUserSelectedOptionState:(unsigned int)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onPayCell:(id)arg1;
- (void)onLocationCell:(id)arg1;
- (void)onFuzzyLocationCell:(id)arg1;
- (void)onBluetoothCell:(id)arg1;
- (void)onSubscriptionMessageSettingsCell:(id)arg1;
- (void)onMangerAuthCell:(id)arg1;
- (void)onDeviceSyncAuthCell:(id)arg1;
- (void)onPrivacyUsageDetailCell:(id)arg1;
- (void)onDeviceVoipAuthCell:(id)arg1;
- (id)makeHeaderView;
- (void)initEmptyView;
- (double)cellLeftDetailMaxWidth;
- (void)requestAuthorazitionInfo;
- (void)onThreeStateAuthInfoChanged:(id)arg1 backgroundScope:(id)arg2;
- (void)onFuzzyLocationAuthInfoChanged;
- (void)onClickAccountCell:(id)arg1;
- (void)onAuthInfoChangeed:(id)arg1 CellInfo:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)syncSetAuthState:(id)arg1;
- (void)onAppAuthInfoListModifyEnd:(BOOL)arg1 AuthDataList:(id)arg2;
- (void)onAppAuthInfoListModifyFailedWithRiskControlInfo:(id)arg1;
- (void)onGetAppAuthInfo:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (BOOL)isAppRegisteredBackgroundModeForKey:(id)arg1;
- (id)getBluetoothPermissionString;
- (void)didSelectAuthorizationOptionItem:(id)arg1 forAuthType:(unsigned long long)arg2;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(BOOL)arg3;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)onFetchVoipDeviceList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)authData;
- (void)setAuthData:(id)arg1;
- (void).cxx_destruct;
@end


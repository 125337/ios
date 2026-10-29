@interface LoginDeviceInfoViewController : MMUIViewController <PBMessageObserverDelegate, LoginDeviceInfoLoadingViewDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL _needRequest; // +0x78
    SafeDeviceData * _m_info; // +0x80
    NSString * _deviceUUID; // +0x88
    WCTableViewNormalCellManager * _editNameCellInfo; // +0x90
    WCTableViewNormalCellManager * _delCellInfo; // +0x98
    WCTableViewNormalCellManager * _autoLoginSwitchCellInfo; // +0xa0
    LoginDeviceInfoLoadingView * _loadingView; // +0xa8
    double _lastLayoutWidth; // +0xb0
}
- (id)initWithDeviceIno:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)showQuitTip;
- (void)delCurrentDevice;
- (void)editName;
- (void)setDeviceName:(id)arg1;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)loadingView;
- (void)loadingViewOnTapReload;
- (void)requestData;
- (void)revertAutoLoginSwitch:(id)arg1 toValue:(BOOL)arg2;
- (BOOL)checkAutoLoginVailibel;
- (void)askChangeAutoLogin:(id)arg1;
- (void)changeAutoLogin:(id)arg1;
- (void)showAutoLoginError:(int)arg1 errorDesc:(id)arg2;
- (void)updateDatas;
- (id)reportInfoDict;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (id)m_info;
- (void)setM_info:(id)arg1;
- (id)deviceUUID;
- (void)setDeviceUUID:(id)arg1;
- (BOOL)needRequest;
- (void)setNeedRequest:(BOOL)arg1;
- (id)editNameCellInfo;
- (void)setEditNameCellInfo:(id)arg1;
- (id)delCellInfo;
- (void)setDelCellInfo:(id)arg1;
- (id)autoLoginSwitchCellInfo;
- (void)setAutoLoginSwitchCellInfo:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

@interface MMRegionPickerViewController : MMUIViewController <ILocationMgrExt, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate, MMRegionPickerReturnDelegate>
{
    MMTableView * m_tableView; // +0x70
    NSMutableDictionary * m_dataDict; // +0x78
    NSMutableArray * m_dataAry; // +0x80
    BOOL m_isInitRegionCode; // +0x88
    NSString * m_selectedRegionCode; // +0x90
    MMRegionCodeMgr * m_regionCodeMgr; // +0x98
    NSArray * arrCurRegionCodes; // +0xa0
    LocationRetriever * _locationRetriever; // +0xa8
    int m_iLocationRetrieveResult; // +0xb0
    NSMutableArray * m_arrServerReturnCode; // +0xb8
    BOOL m_bInCurrent; // +0xc0
    NSIndexPath * m_oCurrentIndexPath; // +0xc8
    BOOL _isTopLevel; // +0xd0
    int _regionType; // +0xd4
    UIViewController * topController; // +0xd8
    id <MMRegionPickerViewControllerDelegate> _delegate; // +0xe0
    id <MMRegionPickerReturnDelegate> _returnDelegate; // +0xe8
    NSMutableArray * _pickedRegionAry; // +0xf0
    unsigned long long _authScene; // +0xf8
}
- (id)initWithArray:(id)arg1 withAuthScene:(unsigned long long)arg2;
- (void)initData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)tryRetrieveLocation;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDataChange;
- (void)OnReturn;
- (void)OnDone;
- (void)scrollToRegion:(id)arg1;
- (BOOL)isLocationRetrieving;
- (BOOL)isLocationSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)headerLabelWithTitle:(id)arg1;
- (void)clarifyCurrentPickedRegionsWith:(id)arg1;
- (void)OnNeedReturn;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (id)topController;
- (void)setTopController:(id)arg1;
- (BOOL)isTopLevel;
- (void)setIsTopLevel:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedRegionCode;
- (void)setSelectedRegionCode:(id)arg1;
- (id)arrCurRegionCodes;
- (void)setArrCurRegionCodes:(id)arg1;
- (id)returnDelegate;
- (void)setReturnDelegate:(id)arg1;
- (id)pickedRegionAry;
- (void)setPickedRegionAry:(id)arg1;
- (int)regionType;
- (void)setRegionType:(int)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

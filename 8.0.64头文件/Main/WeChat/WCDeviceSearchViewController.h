@interface WCDeviceSearchViewController : MMUIViewController <WCDeviceSearchLogicDelegate, IWCDeviceBrandMgrExt, ILinkEventExt, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    UILabel * m_headerLbl; // +0x78
    MMLoadingView * m_loadingView; // +0x80
    NSMutableArray * m_deviceList; // +0x88
    unsigned long long m_scene; // +0x90
    WCDeviceSearchLogic * m_searchLogic; // +0x98
    WCDevice * m_fliterDevice; // +0xa0
    BOOL isViewFirstLoaded; // +0xa8
    unsigned long long _scene; // +0xb0
}
- (id)init;
- (id)initWithDevice:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithScene:(unsigned long long)arg1;
- (void)startScan;
- (BOOL)isWifiConnected;
- (BOOL)isBLEConnected;
- (void)reloadData;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)initLoadingView;
- (void)getLoadingCell:(id)arg1;
- (id)getFooterSettingRichTextView;
- (void)onBack:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)jumpToDeviceBrandContactProfile:(id)arg1;
- (void)onDeviceFound:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onHelpBtnClicked:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

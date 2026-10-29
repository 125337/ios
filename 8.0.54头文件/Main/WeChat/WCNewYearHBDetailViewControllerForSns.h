@interface WCNewYearHBDetailViewControllerForSns : MMUIViewController <WCFacadeExt, UITableViewDelegate, UITableViewDataSource>
{
    WCMediaItem * _mediaItem; // +0x68
    MMUIWindow * _fullScreenWindow; // +0x70
    UIView * _bgView; // +0x78
    UIView * _coverFrameView; // +0x80
    MMWebImageView * _coverImgView; // +0x88
    double _curProgress; // +0x90
    UILabel * _moneyLabel; // +0x98
    UILabel * _tipsLabel; // +0xa0
    MMTableView * m_tableView; // +0xa8
    UIView * m_oHeaderView; // +0xb0
    WCNewYearHBDetailDataForSns * _detailData; // +0xb8
    UILabel * _rmbUnitLabel; // +0xc0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)onClose;
- (BOOL)useTransparentNavibar;
- (void)initTableView;
- (void)setBorder:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupSubviews;
- (void)updateWithDetailData:(id)arg1;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end


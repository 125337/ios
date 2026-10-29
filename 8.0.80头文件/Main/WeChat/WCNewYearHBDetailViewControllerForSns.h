@interface WCNewYearHBDetailViewControllerForSns : MMUIViewController <WCFacadeExt, UITableViewDelegate, UITableViewDataSource>
{
    WCMediaItem * _mediaItem; // +0x70
    MMUIWindow * _fullScreenWindow; // +0x78
    UIView * _bgView; // +0x80
    UIView * _coverFrameView; // +0x88
    MMWebImageView * _coverImgView; // +0x90
    double _curProgress; // +0x98
    UILabel * _moneyLabel; // +0xa0
    UILabel * _tipsLabel; // +0xa8
    MMTableView * m_tableView; // +0xb0
    UIView * m_oHeaderView; // +0xb8
    WCNewYearHBDetailDataForSns * _detailData; // +0xc0
    UILabel * _rmbUnitLabel; // +0xc8
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

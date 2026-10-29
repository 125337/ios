@interface WCFinderHistoryLiveListViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderHistoryLiveInfoCellDelegate>
{
    BOOL _isSelfAnchor; // +0x68
    NSMutableArray * _historyLiveInfoList; // +0x70
    MMTableView * _historyLiveListTableView; // +0x78
    MMUILabel * _tipsDescriptionLabel; // +0x80
    MMUIView * _descriptionLeftLine; // +0x88
    MMUIView * _descriptionRightLine; // +0x90
    WCTimeLineFooterView * _footerView; // +0x98
    NSString * _anchorFinderUserName; // +0xa0
    NSData * _lastBuffer; // +0xa8
}
- (id)initWithAnchor:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)layoutUI;
- (void)layoutHistoryLiveListTableView;
- (void)layoutTipsDescriptionLabel;
- (id)tipsDescriptionLabel;
- (id)descriptionLeftLine;
- (id)descriptionRightLine;
- (void)fetchHistoryLiveList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)historyLiveInfoList;
- (void)setHistoryLiveInfoList:(id)arg1;
- (id)historyLiveListTableView;
- (void)setHistoryLiveListTableView:(id)arg1;
- (void)setTipsDescriptionLabel:(id)arg1;
- (void)setDescriptionLeftLine:(id)arg1;
- (void)setDescriptionRightLine:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)anchorFinderUserName;
- (void)setAnchorFinderUserName:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isSelfAnchor;
- (void)setIsSelfAnchor:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface BizTLPersonalCenterMainViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, BrandTimelineSettingViewControllerDelegate>
{
    int _sessionId; // +0x68
    int _personalizedOpt; // +0x6c
    id <BizTLPersonalCenterMainViewControllerDelegate> _m_delegate; // +0x70
    MMTableView * _mainMenuTableView; // +0x78
    NSMutableDictionary * _cellDict; // +0x80
    NSMutableArray * _groupCellList; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initTableView;
- (void)initDynamicData;
- (void)filterDataSource:(id)arg1;
- (BOOL)checkCellInfoAvaliable:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)jumpToMyBizList;
- (void)jumpToRecentReading;
- (void)jumpToNotify;
- (void)jumpToSetting;
- (void)jumpToWeb:(id)arg1;
- (void)jumpToWxa:(id)arg1;
- (void)decorateCell:(id)arg1 index:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)triggerRedline:(id)arg1;
- (id)getNewDynamicList;
- (BOOL)isEndSectionCell:(id)arg1;
- (BOOL)isStartSectionCell:(id)arg1;
- (CGSize)getCellSize;
- (void)setCornerRadius:(id)arg1 top:(BOOL)arg2 bottom:(BOOL)arg3;
- (void)report27213:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)onPersonalizedOperated:(int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)sessionId;
- (void)setSessionId:(int)arg1;
- (id)mainMenuTableView;
- (void)setMainMenuTableView:(id)arg1;
- (id)cellDict;
- (void)setCellDict:(id)arg1;
- (id)groupCellList;
- (void)setGroupCellList:(id)arg1;
- (int)personalizedOpt;
- (void)setPersonalizedOpt:(int)arg1;
- (void).cxx_destruct;
@end


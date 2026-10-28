@interface PeopleNearByListViewController : UIView <PeopleNearByAdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    LbsContactInfoList * m_lbsContactList; // +0x8
    MMTableView * m_tableView; // +0x10
    SeePeopleNearByLogicController * m_logicController; // +0x18
    NSMutableDictionary * m_userHeaderImageCache; // +0x20
    id <PeopleNearByListViewControllerDelegate> m_delegate; // +0x28
    NSArray * m_lbsPoiList; // +0x30
    unsigned long long m_abtestResult; // +0x38
    long long m_iRoomMemberCount; // +0x40
    MMLbsAdvertismentInfo * _adInfo; // +0x48
    long long _maxIndexOfUsersExposed; // +0x50
    NSMutableArray * _tableModels; // +0x58
    UILabel * _sexTipsLabel; // +0x60
}
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)getCachedHeaderImageForUsername:(id)arg1 headImgUrl:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 poiItem:(id)arg2;
- (id)genLBSPeopleCell:(id)arg1 contactInfo:(id)arg2;
- (id)genAdInfoCell:(id)arg1 adInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)reloadWithAdInfo:(id)arg1;
- (void)reloadTableModels;
- (void)updateSexTipsAtTop;
- (void)adjustSubviewRects;
- (void)viewDidLayoutSubviews;
- (void)didSelectCloseAtCell:(id)arg1;
- (id)lbsContactList;
- (void)setLbsContactList:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)userHeaderImageCache;
- (void)setUserHeaderImageCache:(id)arg1;
- (long long)iRoomMemberCount;
- (void)setIRoomMemberCount:(long long)arg1;
- (id)lbsPoiList;
- (void)setLbsPoiList:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (long long)maxIndexOfUsersExposed;
- (void)setMaxIndexOfUsersExposed:(long long)arg1;
- (id)tableModels;
- (void)setTableModels:(id)arg1;
- (id)sexTipsLabel;
- (void)setSexTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

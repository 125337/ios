@interface BrandSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IWCDeviceBrandMgrExt, BrandSessionMgrExt>
{
    MMTableView * m_tableView; // +0x68
    unsigned int m_stayTimeStart; // +0x70
    NSMutableDictionary * m_brandExposed; // +0x78
    unsigned int _sessionId; // +0x80
    unsigned long long _source; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)updateTopSessionCellBackgroundColor:(id)arg1 withCellData:(id)arg2;
- (void)updateTopSessionCellStarMark:(id)arg1 withCellData:(id)arg2;
- (void)deleteSessionOnTableView:(id)arg1 indexPath:(id)arg2;
- (void)handleDeleteSession:(id)arg1;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)reportUnfollowSubscribe:(id)arg1 andUnread:(unsigned int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)onBrandSessionsChanged;
- (void)handleAllBrandSessionDeletedStep2;
- (void)handleAllBrandSessionDeleted;
- (void)onBrandSessionAllDeleted;
- (void)initSearchBar;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)startRecordSessionListStayTime;
- (void)abortRecordSessionListStayTime;
- (void)endRecordSessionListStayTime;
- (void)reportBrandExpose;
- (id)getMidFromMessage:(id)arg1;
- (id)getIdxFromMessage:(id)arg1;
- (id)queryOfUrl:(id)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


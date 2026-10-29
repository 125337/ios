@interface BrandNotificationListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMRefreshTableFooterDelegate, BrandTimelineMsgMgrExt, IContactMgrExt>
{
    UIView * m_topNavView; // +0x70
    MMTableView * m_tableView; // +0x78
    WCTimeLineFooterView * m_footerView; // +0x80
    MMUILabel * m_noMsgTipsLabel; // +0x88
    NSMutableArray * m_arrViewModel; // +0x90
    BOOL m_bLoadingData; // +0x98
    NSMutableArray * m_sessionData; // +0xa0
    unsigned int _brandTimelineSessionId; // +0xa8
    unsigned int _scene; // +0xac
    unsigned int _enterId; // +0xb0
    unsigned long long _state; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)updateVisibleCellTime;
- (void)initData;
- (id)insertViewModelWithMsg:(id)arg1 index:(unsigned long long)arg2 hasBottomLine:(BOOL)arg3;
- (void)setState:(unsigned long long)arg1;
- (void)updateSectionData;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)updateNoMsgTipsLabel;
- (void)initNavigationBar;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)onNavBackBarButtonClicked;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)fetchMoreCell;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldDownMoreLoading;
- (void)updateLoadingState;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)fetchMoreHistoryMessage;
- (void)tryLoadDownMoreMessage;
- (void)onAddNotification:(id)arg1;
- (void)onDelNotification:(id)arg1;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onSetNotificationDelFlag:(id)arg1;
- (void)checkListState;
- (void)onNewBrandContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (BOOL)containContact:(id)arg1 isFollow:(BOOL)arg2;
- (void)onModifyContact:(id)arg1;
- (BOOL)isContactNeedProcess:(id)arg1;
- (void)reportNotificationAction:(unsigned int)arg1 viewModel:(id)arg2 indexPathRow:(long long)arg3;
- (void)openBrandAttributedNotifyMsgWithViewModel:(id)arg1;
- (unsigned int)brandTimelineSessionId;
- (void)setBrandTimelineSessionId:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)state;
- (unsigned int)enterId;
- (void)setEnterId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface WAStarLinearListViewController : MMUIViewController <WCActionSheetDelegate, WAAppItemManagerExtension, WAMainListStarLogicDelegate, WAContactMgrExtension, UITableViewDelegate, UITableViewDataSource>
{
    NSString * m_showSessionId; // +0x70
    NSMutableArray * m_menuArray; // +0x78
    NSMutableDictionary * m_contactViewCache; // +0x80
    WAAppItemData * m_starItemToUnstar; // +0x88
    WAPackageSweeperLogic * m_sweepLogic; // +0x90
    BOOL hasEdited; // +0x98
    NSMutableArray * m_sessionData; // +0xa0
    BOOL _isViewHasLayout; // +0xa8
    BOOL _editMode; // +0xa9
    unsigned long long _scene; // +0xb0
    WAMainListStarLogic * _starLogic; // +0xb8
    MMTableView * _tableView; // +0xc0
    WeToast * _toastView; // +0xc8
    UIView * _emptyView; // +0xd0
    UILabel * _emptyLabel; // +0xd8
    UIImageView * _emptyLogo; // +0xe0
    WAStarMoveContext * _moveContext; // +0xe8
    NSMutableArray * _toDeleteItemDatas; // +0xf0
}
- (id)init;
- (void)updateSectionData;
- (long long)indexOfSessionId:(id)arg1;
- (void)updateEmptyViewState;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reportStarListViewShowAction;
- (void)fetchRemoteStarData;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setEditMode:(BOOL)arg1;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)onReturn;
- (void)onEdit;
- (void)onEditCancel;
- (void)onEditDone;
- (void)initTableView;
- (void)initRefreshControl;
- (void)initEmptyView;
- (void)updateViewStates;
- (void)updateFooterNoMoreDataState;
- (void)updateRefreshFooterHiddenState;
- (void)viewDidLayoutSubviews;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned int)stateFlagForAppItem:(id)arg1 withIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)starDataDidUpdated;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onDeleteStaredItem:(id)arg1 atIndexPath:(id)arg2;
- (void)unstarAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteStarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)processDeletions;
- (void)showToast:(id)arg1;
- (void)showTipsViewController:(id)arg1;
- (void)reloadTableView;
- (void)reloadTableViewNonAnimated;
- (id)getContactByUserName:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)starLogic;
- (void)setStarLogic:(id)arg1;
- (BOOL)editMode;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)emptyLogo;
- (void)setEmptyLogo:(id)arg1;
- (id)moveContext;
- (void)setMoveContext:(id)arg1;
- (id)toDeleteItemDatas;
- (void)setToDeleteItemDatas:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderRefuseLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefuseLikeListModelDelegate, MultiSelectContactsViewControllerDelegate, WCStoryDismissInteractiveTransitionDelegate>
{
    int _scene; // +0x68
    id <WCFinderRefuseLikeListViewControllerDelegate> _delegate; // +0x70
    NSString * _objectId; // +0x78
    UITableView * _tableView; // +0x80
    WCFinderRefuseLikeListModel * _viewModel; // +0x88
    UILabel * _stateTipsLabel; // +0x90
    UITapGestureRecognizer * _stateRetryGesture; // +0x98
    NSMutableArray * _deleteUsernameArray; // +0xa0
    RichTextView * _richTextView; // +0xa8
    WCStoryDismissInteractiveTransition * _transition; // +0xb0
    WCStoryFriendsCollectionDismissTransition * _dismissAnimateTransition; // +0xb8
}
- (id)initWithObjectId:(id)arg1 commentScene:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupNavBar;
- (id)getTitleViewText;
- (void)updateNavTitle;
- (void)configureRightButton;
- (void)clickRightAddButton;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)configureTableView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateMenuItemCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderRefuseLikeListFetchSuccess;
- (void)finderRefuseLikeListCGISuc;
- (void)finderRefuseLikeListFetchFailWithErrorCode:(int)arg1;
- (id)richTextView;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)deleteUsernameArray;
- (void)setDeleteUsernameArray:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)dismissAnimateTransition;
- (void)setDismissAnimateTransition:(id)arg1;
- (void).cxx_destruct;
@end


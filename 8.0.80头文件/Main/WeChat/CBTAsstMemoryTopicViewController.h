@interface CBTAsstMemoryTopicViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, CBTAsstMemoryDetailViewControllerDelegate, MMMenuControllerExt>
{
    id <CBTAsstMemoryTopicViewControllerDelegate> _delegate; // +0x70
    NSString * _topicName; // +0x78
    NSString * _userPostfix; // +0x80
    FetchDispalyTopicMemoryResp_TopicItem * _topicItem; // +0x88
    MMUIButton * _backButton; // +0x90
    UILabel * _titleLabel; // +0x98
    UIView * _titleSeparatorView; // +0xa0
    MMTableView * _tableView; // +0xa8
    UILongPressGestureRecognizer * _longPressGesture; // +0xb0
    NSArray * _memoryMenuItems; // +0xb8
    NSIndexPath * _menuIndexPath; // +0xc0
}
- (id)initWithTopicItem:(id)arg1 userPostfix:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)buildSubviews;
- (void)viewDidLayoutSubviews;
- (void)onBack;
- (void)fetchTopicMemory;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)memoryMenuItems;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onTableViewLongPress:(id)arg1;
- (void)showMemoryMenuAtIndexPath:(id)arg1;
- (void)dismissMemoryMenuIfNeeded;
- (void)clearMenuSelection;
- (id)selectedMenuMemoryItem;
- (void)onCopyMemory:(id)arg1;
- (void)onAdjustMemory:(id)arg1;
- (void)onDeleteMemory:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)memoryDetailViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicName;
- (void)setTopicName:(id)arg1;
- (id)userPostfix;
- (void)setUserPostfix:(id)arg1;
- (id)topicItem;
- (void)setTopicItem:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleSeparatorView;
- (void)setTitleSeparatorView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void)setMemoryMenuItems:(id)arg1;
- (id)menuIndexPath;
- (void)setMenuIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

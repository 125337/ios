@interface CBTAsstAllMemoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, CBTAsstMemoryTopicViewControllerDelegate>
{
    id <CBTAsstAllMemoryViewControllerDelegate> _delegate; // +0x70
    MMUIButton * _backButton; // +0x78
    UILabel * _titleLabel; // +0x80
    MMTableView * _tableView; // +0x88
    NSArray * _topicList; // +0x90
    NSString * _userPostfix; // +0x98
}
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)buildSubviews;
- (void)viewDidLayoutSubviews;
- (void)onBack;
- (id)previewTitlesForTopic:(id)arg1;
- (void)fetchTopicMemory;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)memoryTopicViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)topicList;
- (void)setTopicList:(id)arg1;
- (id)userPostfix;
- (void)setUserPostfix:(id)arg1;
- (void).cxx_destruct;
@end

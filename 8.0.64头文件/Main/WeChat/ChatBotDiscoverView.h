@interface ChatBotDiscoverView : UIView <UITableViewDelegate, UITableViewDataSource, ChatBotDiscoverDataLogicDelegate>
{
    BOOL _isDisplayed; // +0x8
    id <ChatBotDiscoverDelegate> _delegate; // +0x10
    UILabel * _titleView; // +0x18
    double _displayedOffsetY; // +0x20
    MMTableView * _tableView; // +0x28
    ChatBotDiscoverDataLogic * _dataLogic; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 curRoom:(id)arg2;
- (void)initViews;
- (void)layoutTableView;
- (void)layoutTitleView;
- (void)displayWithOffsetY:(double)arg1;
- (void)exitDisplayStatus;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)startNewVoIPWithContact:(id)arg1;
- (void)makeCell:(id)arg1 WithIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadDataWithIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (BOOL)isDisplayed;
- (void)setIsDisplayed:(BOOL)arg1;
- (double)displayedOffsetY;
- (void)setDisplayedOffsetY:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (void).cxx_destruct;
@end

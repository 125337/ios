@interface LanguageSelectPageView : MMPageSheetBaseViewController <UITableViewDelegate, UITableViewDataSource, MMPageSheetGestureRecognizerDelegate>
{
    BOOL _tableViewExpanded; // +0x70
    BOOL _useShrinkPageSheet; // +0x71
    id <LanguageSelectPageViewDelegate> _delegate; // +0x78
    MMTableView * _m_tableView; // +0x80
    UIView * _m_tableViewContainer; // +0x88
    NSArray * _models; // +0x90
    WorldTranslateManager * _manager; // +0x98
    NSString * _currentlanguage; // +0xa0
    NSString * _selectedlanguage; // +0xa8
}
- (id)initWithManager:(id)arg1;
- (void)viewDidLoad;
- (double)expandedTableViewHeight;
- (void)initViews;
- (void)initSheetConfig;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)currentPageSheetExpand;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_tableViewContainer;
- (void)setM_tableViewContainer:(id)arg1;
- (id)models;
- (void)setModels:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)currentlanguage;
- (void)setCurrentlanguage:(id)arg1;
- (id)selectedlanguage;
- (void)setSelectedlanguage:(id)arg1;
- (BOOL)tableViewExpanded;
- (void)setTableViewExpanded:(BOOL)arg1;
- (BOOL)useShrinkPageSheet;
- (void)setUseShrinkPageSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end

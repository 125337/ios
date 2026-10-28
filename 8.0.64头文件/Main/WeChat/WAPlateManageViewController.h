@interface WAPlateManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, WAPlateEditViewControllerDelegate>
{
    BOOL _firstIn; // +0x70
    NSObject<WAPlateManageViewControllerDelegate> * _delegate; // +0x78
    WAReportPlateManageActionItem * _reportAction; // +0x80
    NSString * _createSubDesc; // +0x88
    NSMutableArray * _plateList; // +0x90
    UITableView * _listView; // +0x98
    MMUILabel * _defaultLabel; // +0xa0
    MMUIButton * _defaultAddBtn; // +0xa8
    MMUIButton * _addButton; // +0xb0
    MMUILabel * _addInfoLabel; // +0xb8
    long long _currentEditIdx; // +0xc0
    long long _currentDeleteIdx; // +0xc8
}
- (id)initWithPlateList:(id)arg1;
- (id)init;
- (void)updatePlateList:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initViews;
- (id)navigationBarBackgroundColor;
- (void)layoutSubViews;
- (double)tableViewHeight;
- (id)getPlateEditVCWithStyle:(unsigned long long)arg1;
- (void)onDefaultAddBtnClicked:(id)arg1;
- (void)_pushNewPageViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onPlateEditViewControllerFinished:(id)arg1;
- (void)issueGetPlateRequest;
- (void)issueCreatePlateRequest:(id)arg1;
- (void)issueDeletePlateRequest:(id)arg1;
- (void)issueUpdatePlateRequestWithOld:(id)arg1 andNew:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleCreatePlateInfo:(id)arg1;
- (void)handleUpdatePlateInfo:(id)arg1;
- (void)handleDeleteUserPlateInfo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)onPlateManagerDelete;
- (id)plateFormatString:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportAction;
- (void)setReportAction:(id)arg1;
- (id)createSubDesc;
- (void)setCreateSubDesc:(id)arg1;
- (id)plateList;
- (void)setPlateList:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)defaultLabel;
- (void)setDefaultLabel:(id)arg1;
- (id)defaultAddBtn;
- (void)setDefaultAddBtn:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)addInfoLabel;
- (void)setAddInfoLabel:(id)arg1;
- (long long)currentEditIdx;
- (void)setCurrentEditIdx:(long long)arg1;
- (long long)currentDeleteIdx;
- (void)setCurrentDeleteIdx:(long long)arg1;
- (BOOL)firstIn;
- (void)setFirstIn:(BOOL)arg1;
- (void).cxx_destruct;
@end

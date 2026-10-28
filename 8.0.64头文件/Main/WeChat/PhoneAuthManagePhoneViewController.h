@interface PhoneAuthManagePhoneViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, PhoneAuthManagePhoneLogicDelegate>
{
    BOOL _editMode; // +0x70
    id <PhoneAuthManagePhoneViewControllerDataSource> _dataSource; // +0x78
    id <PhoneAuthManagePhoneviewControllerDelegate> _delegate; // +0x80
    WAReportPhoneAuthActionItem * _actionItem; // +0x88
    UITableView * _tableView; // +0x90
    UIView * _tableFooterView; // +0x98
    UILabel * _phoneCountLimitationLabel; // +0xa0
    UIView * _footerView; // +0xa8
    RichTextView * _compliantTextView; // +0xb0
    NSString * _compliantString; // +0xb8
    PhoneAuthManagePhoneLogic * _logic; // +0xc0
}
- (void)viewDidLoad;
- (void)initSubViews;
- (id)genTableFooterView;
- (void)initCustomNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationItems;
- (void)viewDidLayoutSubviews;
- (void)refreshFooterViewHiddenState;
- (id)getDisplayPhoneArray;
- (BOOL)isReachMaxPhoneCount;
- (BOOL)shouldShowAddNewPhoneEntry;
- (BOOL)isAddNewPhoneEntryIndexPath:(id)arg1;
- (id)getComplaintString;
- (id)getComplaintUrl;
- (id)getCurrentAppid;
- (id)getCurrentUrlString;
- (id)getPhoneInfoForIndexPath:(id)arg1;
- (BOOL)isWxPhoneIndexPath:(id)arg1;
- (BOOL)isLastPhoneIndexPath:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setEditMode:(BOOL)arg1;
- (void)onReturn;
- (void)onEdit;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)didAddNewPhoneInfo:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionItem;
- (void)setActionItem:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)phoneCountLimitationLabel;
- (void)setPhoneCountLimitationLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)compliantTextView;
- (void)setCompliantTextView:(id)arg1;
- (id)compliantString;
- (void)setCompliantString:(id)arg1;
- (BOOL)editMode;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

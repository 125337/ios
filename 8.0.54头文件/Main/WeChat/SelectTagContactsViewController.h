@interface SelectTagContactsViewController : MMUIViewController <ContactTagDetailViewControllerDelegate, ContactsAllSelectPanelViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x68
    NSMutableDictionary * m_dicMultiSelect; // +0x70
    id <SelectTagContactsViewControllerDelegate> m_delegate; // +0x78
    UIView * m_viewLabel; // +0x80
    UILabel * m_countLabel; // +0x88
    BOOL _bNeedReload; // +0x90
    BOOL _bNeedDismiss; // +0x91
    unsigned long long m_existContactCountInTag; // +0x98
    unsigned long long m_currentSelectTimes; // +0xa0
    ContactsAllSelectPanelView * m_allSelectPanel; // +0xa8
    int m_FromWhichScene; // +0xb0
    NSString * tagName; // +0xb8
    NSArray * m_arrTagContacts; // +0xc0
    NSDictionary * m_dicExistContact; // +0xc8
    ContactTagData * m_contactTagData; // +0xd0
    unsigned long long _m_memberCountLimit; // +0xd8
    NSString * _m_rightBarButtonTitle; // +0xe0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)sortTagContacts;
- (void)initData;
- (void)calculateExistCount;
- (void)initView;
- (void)initTitleArea;
- (void)tryInitAllSelectPanel;
- (void)initAllSelectPanel;
- (void)updateRightBarBtn;
- (void)onManageTag:(id)arg1;
- (void)onDismiss:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)initTableView;
- (void)makeEmptyTipsView;
- (BOOL)isExisted:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getCellImage:(id)arg1;
- (void)addSelect:(id)arg1;
- (void)removeSelect:(id)arg1;
- (BOOL)updateMultiSelect:(id)arg1 contact:(id)arg2 tableView:(id)arg3 allSelectMode:(BOOL)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onDeleteContactTagSuccess:(id)arg1;
- (BOOL)checkIfAllMemberSelected;
- (void)onSelectAll;
- (void)onDeselectAll;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)m_arrTagContacts;
- (void)setM_arrTagContacts:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (int)m_FromWhichScene;
- (void)setM_FromWhichScene:(int)arg1;
- (id)m_contactTagData;
- (void)setM_contactTagData:(id)arg1;
- (unsigned long long)m_memberCountLimit;
- (void)setM_memberCountLimit:(unsigned long long)arg1;
- (id)m_rightBarButtonTitle;
- (void)setM_rightBarButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end


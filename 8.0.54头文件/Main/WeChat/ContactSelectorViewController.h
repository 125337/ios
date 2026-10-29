@interface ContactSelectorViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _isMultiplyMode; // +0x68
    NSArray * _contacts; // +0x70
    OrderedDictionary * _selectedContacts; // +0x78
    id <ContactSelectorViewControllerDelegate> _delegate; // +0x80
    long long _userInterfaceStyle; // +0x88
    UIColor * _brandColor; // +0x90
    NSString * _blankTips; // +0x98
    MMTableView * _tableView; // +0xa0
    UIView * _blankView; // +0xa8
    MMUILabel * _blankTipsLabel; // +0xb0
}
- (id)initWithContacts:(id)arg1 selectedContacts:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)updateSelectorViews;
- (void)layoutSelectorViews;
- (void)loadBarItems;
- (void)doneBarButtonItemClicked:(id)arg1;
- (void)cancelBarButtonItemClicked:(id)arg1;
- (id)headerTitleInSection:(long long)arg1;
- (void)setBlankTips:(id)arg1;
- (void)onCancel;
- (BOOL)isContactSelected:(id)arg1;
- (BOOL)selectContact:(id)arg1;
- (BOOL)deselectContact:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSelectionCell:(id)arg1 withContact:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMultiplyMode;
- (void)setIsMultiplyMode:(BOOL)arg1;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (id)blankTips;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)blankView;
- (void)setBlankView:(id)arg1;
- (id)blankTipsLabel;
- (void)setBlankTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end


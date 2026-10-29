@interface SelectSubContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    BOOL _isMultiSelect; // +0x70
    BOOL _showsChatroomMembers; // +0x71
    BOOL _isInPageSheetMode; // +0x72
    id <SelectSubContactViewControllerDelegate> _delegate; // +0x78
    MMTableView * _tableView; // +0x80
    NSMutableArray * _selectedContacts; // +0x88
    NSString * _currentChatName; // +0x90
    long long _userInterfaceStyle; // +0x98
    UIColor * _brandColor; // +0xa0
    unsigned long long _overrideOrientationMask; // +0xa8
    NSMutableSet * _selectedUsernames; // +0xb0
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)arg1;
- (id)initWithSelectedUsernames:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initUI;
- (id)navigationBarBackgroundColor;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)arg1;
- (void)onSelectedContactsChange;
- (void)onCancel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isSessionSelected:(id)arg1;
- (void)selectSessionContact:(id)arg1;
- (void)deselectSessionContact:(id)arg1;
- (BOOL)shouldShowChatroomMembers:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)currentChatName;
- (void)setCurrentChatName:(id)arg1;
- (BOOL)isMultiSelect;
- (void)setIsMultiSelect:(BOOL)arg1;
- (BOOL)showsChatroomMembers;
- (void)setShowsChatroomMembers:(BOOL)arg1;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)selectedUsernames;
- (void)setSelectedUsernames:(id)arg1;
- (void).cxx_destruct;
@end

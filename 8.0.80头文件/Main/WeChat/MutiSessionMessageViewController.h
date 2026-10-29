@interface MutiSessionMessageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMUIViewControllerOverrideOrientationMaskProtocol>
{
    BOOL _saveButtonEnable; // +0x70
    id <MutiSessionMessageViewControllerDelegate> _delegate; // +0x78
    MMTableView * _tableView; // +0x80
    NSArray * _contacts; // +0x88
    long long _userInterfaceStyle; // +0x90
    UIColor * _brandColor; // +0x98
    unsigned long long _overrideOrientationMask; // +0xa0
    NSMutableDictionary * _m_selectDict; // +0xa8
    NSMutableDictionary * _m_selectDictExtraData; // +0xb0
    NSMutableDictionary * _m_msgCountDict; // +0xb8
    UIBarButtonItem * _saveButton; // +0xc0
}
+ (id)getStaticSelectedUserNames;
+ (id)getStaticSelectDict;
+ (id)getStaticSelectDictExtraData;
+ (void)setStaticSelectedUserNames:(id)arg1;
+ (void)setStaticSelectDict:(id)arg1;
+ (void)setStaticSelectDictExtraData:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (void)clearSelectDict;
- (id)initWithSelectedContacts:(id)arg1 SelectedDict:(id)arg2 SelectedDictExtraData:(id)arg3;
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
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSelectButtonClickForContact:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3;
- (BOOL)isSessionSelected:(id)arg1;
- (void)selectSessionContact:(id)arg1;
- (void)deselectSessionContact:(id)arg1;
- (id)getNumberArrayFromString:(id)arg1;
- (void)presentMultiSelectLogicControllerByContactComplete:(id)arg1 chatName:(id)arg2 logicController:(id)arg3 msgLocalIDList:(id)arg4;
- (void)enterMutiSelectLogic:(id)arg1;
- (void)updateView;
- (id)getTitle;
- (void)onDoneClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)contacts;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (unsigned long long)overrideOrientationMask;
- (void)setOverrideOrientationMask:(unsigned long long)arg1;
- (id)m_selectDict;
- (void)setM_selectDict:(id)arg1;
- (id)m_selectDictExtraData;
- (void)setM_selectDictExtraData:(id)arg1;
- (id)m_msgCountDict;
- (void)setM_msgCountDict:(id)arg1;
- (id)saveButton;
- (void)setSaveButton:(id)arg1;
- (BOOL)saveButtonEnable;
- (void)setSaveButtonEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

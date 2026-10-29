@interface WCFinderSelectPostIdentifierView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderCreateUserViewControllerDelegate, WCFinderUserPrepareExt>
{
    BOOL _showOnlyOptionalUsernames; // +0x8
    int _refreshPrepareState; // +0xc
    WCFinderCustomPanelSheet * _sheet; // +0x10
    id /* block */ _selectBlock; // +0x18
    id /* block */ _cancelBlock; // +0x20
    UITableView * _tableView; // +0x28
    UIButton * _cancelButton; // +0x30
    NSArray * _items; // +0x38
    NSArray * _optionalUsernames; // +0x40
    id /* block */ _updateFrameBlock; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 optionalUsernames:(id)arg2;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)createTableView;
- (void)loadItems;
- (void)_loadOnlyOptionUserContacts;
- (void)_loadAllSelfContact;
- (void)setSelectedUsername:(id)arg1;
- (id)selectedUsername;
- (BOOL)canCreateFinderContact;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)itemHeight;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelectedItem:(id)arg1;
- (void)seletContatWithItem:(id)arg1 complection:(id /* block */)arg2;
- (void)onClickCreateIdentify;
- (void)closeSheet;
- (void)didMoveToWindow;
- (void)refetchUserPrepare;
- (void)createUserFinished:(id)arg1;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)finderUserPrepareUpdate:(id)arg1;
- (id)sheet;
- (void)setSheet:(id)arg1;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)optionalUsernames;
- (void)setOptionalUsernames:(id)arg1;
- (int)refreshPrepareState;
- (void)setRefreshPrepareState:(int)arg1;
- (BOOL)showOnlyOptionalUsernames;
- (void)setShowOnlyOptionalUsernames:(BOOL)arg1;
- (id /* block */)updateFrameBlock;
- (void)setUpdateFrameBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

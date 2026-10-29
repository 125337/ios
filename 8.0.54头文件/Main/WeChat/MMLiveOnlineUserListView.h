@interface MMLiveOnlineUserListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _contactTableView; // +0x8
    id <MMLiveContactTableViewCellDelegate> _cellDelegate; // +0x10
    NSArray * _userList; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setFrame:(CGRect)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)updateWithUserList:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)contactTableView;
- (void)setContactTableView:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (void).cxx_destruct;
@end


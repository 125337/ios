@interface PendantPreviewSelectView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    long long _selectedIndex; // +0x8
    id <PendantPreviewSelectViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSArray * _buttonTitles; // +0x20
    UITableView * _tableView; // +0x28
    UIView * _bgView; // +0x30
}
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 selected:(long long)arg3 delegate:(id)arg4;
- (void)showInViewController:(id)arg1;
- (void)dismiss;
- (void)setSelectedIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)selectedIndex;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)buttonTitles;
- (void)setButtonTitles:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (void).cxx_destruct;
@end


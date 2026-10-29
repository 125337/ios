@interface InviteFriendViewController : MMUIViewController <MMTableViewInfoDelegate, InviteFriendLogicDelegate>
{
    MMTableViewInfo * _tableViewInfo; // +0x68
    InviteFriendLogic * _inviteLogic; // +0x70
}
- (void)setupInviteLogic:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)initTableView;
- (void)initTableCells;
- (void)makeHeaderView:(id)arg1;
- (void)makeInviteSourceCell:(id)arg1 cellInfo:(id)arg2;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)inviteLogic;
- (void)setInviteLogic:(id)arg1;
- (void).cxx_destruct;
@end


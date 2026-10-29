@interface WeixinOpenServiceViewController : MMUIViewController <ServiceAuthExt, ILinkEventExt>
{
    map<unsigned long, OpenServiceRowType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, OpenServiceRowType>>> m_mapRowToRowType; // +0x70
    NSMutableDictionary * m_dictToLink; // +0x88
    UISwitch * m_searchSwitch; // +0x90
    MMTableViewInfo * _tableViewInfo; // +0x98
    UIView * _tableHeaderView; // +0xa0
    UIView * _tableFooterView; // +0xa8
    UIView * _confirmView; // +0xb0
    unsigned long long _userType; // +0xb8
}
- (id)init;
- (id)initWithUserType:(unsigned long long)arg1;
- (void)initDict;
- (void)initRowType;
- (void)initTableHeaderView;
- (void)initTableFooterView;
- (void)initConfirmView;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)makeSwitchCellWithRow:(unsigned long long)arg1;
- (BOOL)getSwitchStatus:(unsigned long long)arg1;
- (void)onSwitchChanged_1:(id)arg1;
- (void)onSwitchChanged_2:(id)arg1;
- (void)onSwitchChanged_3:(id)arg1;
- (void)onSwitchChanged_4:(id)arg1;
- (void)onSwitchChanged_5:(id)arg1;
- (void)onSwitchChanged_6:(id)arg1;
- (void)onSwitchChanged:(id)arg1 rowType:(long long)arg2;
- (void)onCloseBtnClick;
- (void)onFinishBtnClick;
- (void)sendCloseAllRequest;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)navigationBarBackgroundColor;
- (unsigned long long)convertFromOpenServiceType:(unsigned long long)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)confirmView;
- (void)setConfirmView:(id)arg1;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

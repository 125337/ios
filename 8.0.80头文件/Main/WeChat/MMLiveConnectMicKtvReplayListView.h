@interface MMLiveConnectMicKtvReplayListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMLiveConnectMicKtvReplayListViewDelegate> _actionDelegate; // +0x8
    KtvReplayInfo * _ktvReplayInfo; // +0x10
    unsigned long long _headerType; // +0x18
    UITableView * _tableView; // +0x20
    UIView * _footerView; // +0x28
    double _safeBottomInset; // +0x30
}
- (id)initWithHeaderType:(unsigned long long)arg1 frame:(CGRect)arg2;
- (void)layoutSubviews;
- (void)configTableView;
- (void)layoutTableView;
- (void)updateViewWithKtvReplayInfo:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)ktvReplayInfo;
- (void)setKtvReplayInfo:(id)arg1;
- (unsigned long long)headerType;
- (void)setHeaderType:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (double)safeBottomInset;
- (void)setSafeBottomInset:(double)arg1;
- (void).cxx_destruct;
@end

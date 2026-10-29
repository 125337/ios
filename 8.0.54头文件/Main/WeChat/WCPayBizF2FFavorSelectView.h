@interface WCPayBizF2FFavorSelectView : WCPayNavigationView <WCPayFavorSelectCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIButton * _m_rightButton; // +0x8
    UIView * _m_lineView; // +0x10
    MMTableView * _m_tableView; // +0x18
    BusiF2FFavorCommResp * _m_favorResp; // +0x20
    id <WCPayBizF2FFavorSelectViewDelegate> _m_delegate; // +0x28
    NSMutableArray * _m_selectedArray; // +0x30
}
- (void)layoutSubviews;
- (void)updateView;
- (void)updateTableView;
- (void)updateRightButton;
- (void)updateLineView;
- (void)onClickRightButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)arg1;
- (void)reportWithScene:(unsigned long long)arg1;
- (id)m_rightButton;
- (void)setM_rightButton:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_favorResp;
- (void)setM_favorResp:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_selectedArray;
- (void)setM_selectedArray:(id)arg1;
- (void).cxx_destruct;
@end


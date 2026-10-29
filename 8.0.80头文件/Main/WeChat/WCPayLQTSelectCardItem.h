@interface WCPayLQTSelectCardItem : WCBaseInfoItem <UITableViewDelegate, UITableViewDataSource>
{
    MMUIViewController * currentViewController; // +0x40
    id <WCPayLQTSelectCardItemDelegate> delegate; // +0x48
    NSArray * _displayCardArray; // +0x50
    UIView * _backgroundView; // +0x58
    UIView * _contentView; // +0x60
    MMTableView * _cardsTableView; // +0x68
    CgiBindQueryRecord * _selectedRecord; // +0x70
    CgiBindQueryRecord * _resultRecord; // +0x78
    UIButton * _confirmButton; // +0x80
    UIView * _m_titleArea; // +0x88
}
- (void)setItemDelegate:(id)arg1;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (id)getValue;
- (void)setCurrentCardBindSerial:(id)arg1;
- (void)setDisplayCardDataSource:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (void)onTapConfirm;
- (BOOL)paymentSelectRemoveConfirmButton;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2;
- (void)makeAddNewCardCell:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelBtnPress;
- (void)hide;
- (void)handleTap;
- (void)becomeFirstResponder;
- (void)dismiss;
- (void)setCurrentViewController:(id)arg1;
- (id)displayCardArray;
- (void)setDisplayCardArray:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)cardsTableView;
- (void)setCardsTableView:(id)arg1;
- (id)selectedRecord;
- (void)setSelectedRecord:(id)arg1;
- (id)resultRecord;
- (void)setResultRecord:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)m_titleArea;
- (void)setM_titleArea:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCPayECardSelectCardTypeViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayECardSelectCardTypeViewControllerDelegate> _delegate; // +0x90
    WCPayCardTypeItem * _cardTypeItem; // +0x98
    UIButton * _footerButton; // +0xa0
    WCPayCardBinInfo * _selectedCardType; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (id)makeCellTitleLabel;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)tableFooterView;
- (void)clickInfoCell:(id)arg1;
- (void)onNext;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (id)cardTypeItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCardTypeItem:(id)arg1;
- (id)footerButton;
- (void)setFooterButton:(id)arg1;
- (id)selectedCardType;
- (void)setSelectedCardType:(id)arg1;
- (void).cxx_destruct;
@end


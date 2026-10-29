@interface WCPayOfflinePaySelectPayCardView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>
{
    BOOL _bHasPostScreenChangeAccessibilityNotification; // +0x8
    id <WCPayOfflinePaySelectPayCardViewDelegate> _delegate; // +0x10
    long long _fromScene; // +0x18
    WCPayControlData * _controlData; // +0x20
    NSString * _curSelectCardSerial; // +0x28
    MMUIView * _backgroundView; // +0x30
    MMUIView * _contentView; // +0x38
    NSArray * _displayCardArray; // +0x40
    WCPayBindCardInfo * _selectedCardInfo; // +0x48
    NSMutableDictionary * _cellHeightCache; // +0x50
    double _totalCellHeight; // +0x58
    NSMutableDictionary * _cellTitleHalfYCache; // +0x60
    UIView * _m_titleArea; // +0x68
}
- (id)initSelectPayCardViewWithControlData:(id)arg1 delegate:(id)arg2 fromScene:(long long)arg3;
- (void)setCurSelectCardBindSerial:(id)arg1;
- (void)setupDisplayCardDataSource;
- (id)backgroundView;
- (id)contentView;
- (BOOL)paymentSelectRemoveConfirmButton;
- (void)confirmBtnClick;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)dismissWithShouCallDelegate:(BOOL)arg1;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)calcTableViewContentHeight;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2 cellHeight:(double)arg3 isFirstCell:(BOOL)arg4 isLastCell:(BOOL)arg5;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)calcCellHeightWithCardInfo:(id)arg1 index:(long long)arg2;
- (id)getBankLogoUrlWithBankType:(id)arg1;
- (BOOL)isBalanceCardInfo:(id)arg1;
- (BOOL)isLQTCardinfo:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)yhtBankDescContent:(id)arg1;
- (id)minimchBankDescContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)fromScene;
- (void)setFromScene:(long long)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (id)curSelectCardSerial;
- (void)setCurSelectCardSerial:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)displayCardArray;
- (void)setDisplayCardArray:(id)arg1;
- (id)selectedCardInfo;
- (void)setSelectedCardInfo:(id)arg1;
- (id)cellHeightCache;
- (void)setCellHeightCache:(id)arg1;
- (double)totalCellHeight;
- (void)setTotalCellHeight:(double)arg1;
- (id)cellTitleHalfYCache;
- (void)setCellTitleHalfYCache:(id)arg1;
- (id)m_titleArea;
- (void)setM_titleArea:(id)arg1;
- (BOOL)bHasPostScreenChangeAccessibilityNotification;
- (void)setBHasPostScreenChangeAccessibilityNotification:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WCPayBankListPanelView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>
{
    id <WCPayBankListPanelViewDelegate> _delegate; // +0x8
    WCPayControlData * _controlData; // +0x10
    NSArray * _bankList; // +0x18
    NSString * _curSelectCardSerial; // +0x20
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
    double _contentViewHeight; // +0x38
    double _contentCellHeight; // +0x40
    NSString * _addNewCardCellTitle; // +0x48
    MMUIView * _backgroundView; // +0x50
    MMUIView * _contentView; // +0x58
    NSMutableDictionary * _cellHeightCache; // +0x60
    double _totalCellHeight; // +0x68
    NSMutableDictionary * _cellTitleHalfYCache; // +0x70
    UIView * _m_titleArea; // +0x78
}
- (id)initBankListPanelViewWithDelegate:(id)arg1 controlData:(id)arg2;
- (void)setBankListArray:(id)arg1;
- (void)setSelectedCardSerial:(id)arg1;
- (void)setPanelViewTitle:(id)arg1;
- (void)setPanellViewDesc:(id)arg1;
- (void)setAddNewCardCellTitle:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (void)confirmBtnClick;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)dismissWithShouCallDelegate:(BOOL)arg1;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)calcTableViewContentHeight;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)paymentSelectRemoveConfirmButton;
- (double)calcCellHeightWithCardInfo:(id)arg1 index:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2 cellHeight:(double)arg3 isFirstCell:(BOOL)arg4 isLastCell:(BOOL)arg5;
- (void)makeAddNewCardCell:(id)arg1 cellHeight:(double)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)isBalanceCardInfo:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (BOOL)isCellIndexLargeThanDataCount:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)controlData;
- (void)setControlData:(id)arg1;
- (id)bankList;
- (void)setBankList:(id)arg1;
- (id)curSelectCardSerial;
- (void)setCurSelectCardSerial:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (double)contentViewHeight;
- (void)setContentViewHeight:(double)arg1;
- (double)contentCellHeight;
- (void)setContentCellHeight:(double)arg1;
- (id)addNewCardCellTitle;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)cellHeightCache;
- (void)setCellHeightCache:(id)arg1;
- (double)totalCellHeight;
- (void)setTotalCellHeight:(double)arg1;
- (id)cellTitleHalfYCache;
- (void)setCellTitleHalfYCache:(id)arg1;
- (id)m_titleArea;
- (void)setM_titleArea:(id)arg1;
- (void).cxx_destruct;
@end


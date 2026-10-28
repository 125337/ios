@interface WCPayBalanceSelectCardView : UIView <ILinkEventExt>
{
    id <WCPayBalanceSelectCardViewDelegate> _delegate; // +0x8
    WCPayControlData * _data; // +0x10
    WCPayBindCardInfo * _selectedCard; // +0x18
    NSMutableArray * _availableCards; // +0x20
    NSArray * _serialArray; // +0x28
    MMUIView * _backgroundView; // +0x30
    MMUIView * _contentView; // +0x38
    MMTableViewInfo * _tableViewInfo; // +0x40
    UIView * _m_titleArea; // +0x48
}
- (id)initWithData:(id)arg1 selectedCard:(id)arg2 delegate:(id)arg3;
- (id)initWithData:(id)arg1 selectedCard:(id)arg2 serialArray:(id)arg3 delegate:(id)arg4;
- (void)show;
- (void)dismiss;
- (BOOL)paymentSelectRemoveConfirmButton;
- (void)reloadTableView;
- (double)calcTitleHalfHeightAndmakeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSelectNewCardCell:(id)arg1;
- (void)clickCardCell:(id)arg1;
- (void)onClickConfirm;
- (void)selectVerifyNewCard;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isCardForbid:(id)arg1;
- (id)getAvailableCards:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (double)calculateTableViewHeightWithMarginTop:(double)arg1 marginBottom:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)selectedCard;
- (void)setSelectedCard:(id)arg1;
- (id)availableCards;
- (void)setAvailableCards:(id)arg1;
- (id)serialArray;
- (void)setSerialArray:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)m_titleArea;
- (void)setM_titleArea:(id)arg1;
- (void).cxx_destruct;
@end

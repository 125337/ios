@interface WCPaySelectPayWayView : UIView <ILinkEventExt>
{
    BOOL _showAddNewCard; // +0x8
    id <WCPaySelectPayWayViewDelegate> _delegate; // +0x10
    WCPayControlData * _data; // +0x18
    NSArray * _infos; // +0x20
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
    NSString * _selectedCardSerial; // +0x38
    MMUIView * _backgroundView; // +0x40
    MMUIView * _contentView; // +0x48
    MMTableViewInfo * _tableViewInfo; // +0x50
    UIView * _titleArea; // +0x58
}
- (id)initWithCards:(id)arg1 data:(id)arg2 delegate:(id)arg3;
- (void)show;
- (void)dismiss;
- (void)reloadTableView;
- (void)makeCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSelectNewCardCell:(id)arg1;
- (void)clickCardCell:(id)arg1;
- (void)selectAddNewCard;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isCardForbid:(id)arg1;
- (id)cardName:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)infos;
- (void)setInfos:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)showAddNewCard;
- (void)setShowAddNewCard:(BOOL)arg1;
- (id)selectedCardSerial;
- (void)setSelectedCardSerial:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)titleArea;
- (void)setTitleArea:(id)arg1;
- (void).cxx_destruct;
@end

@interface HoneyPayPayerCardDetailViewController : HoneyPayBaseViewController <ILinkEventExt, WCPaySelectPayWayViewDelegate, JSEventHandler>
{
    KindaJSEvent * _kindaJSEvent; // +0x90
    unsigned long long _entrance; // +0x98
    id <HoneyPayPayerCardDetailViewControllerDelegate> _delegate; // +0xa0
    QryHoneyPayerDetailResp * _detail; // +0xa8
    UISwitch * _modifyNotificationSwitch; // +0xb0
    UIButton * _doneButton; // +0xb8
    WCPayNoticeItemView * _noticeItemView; // +0xc0
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)arg1;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (void)addDoneButton;
- (id)headerCell;
- (void)makeHeaderCell:(id)arg1 cellInfo:(id)arg2;
- (id)createdStatusCell;
- (void)makeCreatedStatusCell:(id)arg1 cellInfo:(id)arg2;
- (id)inuseStatusCell;
- (void)makeInuseStatusCell:(id)arg1;
- (void)makeInuseRecords:(id)arg1;
- (id)separatorCell;
- (void)makeSeparatorCell:(id)arg1;
- (void)makeRecordCell:(id)arg1 cellInfo:(id)arg2;
- (id)moreRecordCell;
- (void)makeMoreRecordCell:(id)arg1;
- (id)footerCell;
- (void)makeFooterCell:(id)arg1;
- (id)noRecordCell;
- (void)makeNoRecordCell:(id)arg1;
- (id)modifySeparatorCell;
- (void)makeModifySeparatorCell:(id)arg1;
- (id)modifyCell;
- (void)makeModifyCell:(id)arg1;
- (id)expiredCell;
- (void)makeExpiredStatusCell:(id)arg1;
- (id)expiredDetailCell;
- (void)makeExpiredDetailCell:(id)arg1;
- (id)canceledStatusCell;
- (void)makeCanceledStatusCell:(id)arg1;
- (id)canceledDetailCell;
- (void)makeCanceledDetailCell:(id)arg1;
- (id)detailCellContentWithInfos:(id)arg1 cellWidth:(double)arg2;
- (void)clickDoneButton;
- (void)onRightBarButtonClick;
- (void)didClickUnbind;
- (void)modifyNotification:(id)arg1;
- (void)modifyPayWay;
- (void)clickRecordCell:(id)arg1;
- (void)clickMoreRecordCell:(id)arg1;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)selectPayWayView:(id)arg1 didSelectCard:(id)arg2;
- (id)doneButton;
- (unsigned long long)entrance;
- (void)setEntrance:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)modifyNotificationSwitch;
- (void)setModifyNotificationSwitch:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end


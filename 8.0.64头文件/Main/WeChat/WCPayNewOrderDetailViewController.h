@interface WCPayNewOrderDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    BOOL _expandDiscount; // +0x70
    BOOL _expandProducts; // +0x71
    long long _payScene; // +0x78
    BOOL _bNotShowedFeedbackBrandContact; // +0x80
    NSString * _transId; // +0x88
    NSNumber * _payType; // +0x90
    NSString * _billId; // +0x98
    MMTableView * _tableView; // +0xa0
    NSDictionary * _response; // +0xa8
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupViews;
- (id)tableHeaderViewFromResponse:(id)arg1;
- (id)sellerTopViewFromResponse:(id)arg1;
- (id)detailViewFromResponse:(id)arg1;
- (id)reportBottomViewFromResponse:(id)arg1;
- (void)setupDynamicButtonInView:(id)arg1;
- (id)parseForDetailFromResponse:(id)arg1;
- (void)reloadViewWithResponse:(id)arg1;
- (void)sellerAction:(id)arg1;
- (void)goToSellerProfile:(id)arg1;
- (void)reportOrFeedbackAction:(id)arg1;
- (void)complain;
- (void)contact;
- (void)goToReceiver:(id)arg1;
- (void)goToPayer:(id)arg1;
- (void)resendRemindReceivedMoneyMessage:(id)arg1;
- (void)expandDiscount:(id)arg1;
- (void)expandProduct:(id)arg1;
- (BOOL)isTradeResponse:(id)arg1;
- (BOOL)isOfflinePayResponse:(id)arg1;
- (BOOL)isTransferResponse:(id)arg1;
- (BOOL)isFaceToFaceTransferResponse:(id)arg1;
- (BOOL)isIncomeResponse:(id)arg1;
- (id)getFeeNameFromResponse:(id)arg1;
- (id)getGoodsNameNameFromResponse:(id)arg1;
- (id)dateStringFromTimestamp:(long long)arg1;
- (id)displayNameWithUsername:(id)arg1 trueName:(id)arg2;
- (void)goToProfileWithUsername:(id)arg1;
- (id)generateBarView:(id)arg1;
- (BOOL)isOpenComplain:(id)arg1;
- (BOOL)isBusinessPay;
- (id)complainTitle;
- (id)complainUrl;
- (id)helpCenterDic;
- (id)contactTitle;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)simpleHandleError:(id)arg1;
- (void)hackForIAP;
- (id)transId;
- (void)setTransId:(id)arg1;
- (id)payType;
- (void)setPayType:(id)arg1;
- (id)billId;
- (void)setBillId:(id)arg1;
- (BOOL)bNotShowedFeedbackBrandContact;
- (void)setBNotShowedFeedbackBrandContact:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void).cxx_destruct;
@end

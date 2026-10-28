@interface WCOutAccountViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCOutInviteFriendLogicDelegate, IWCOutFacadeExt, ILinkEventExt>
{
    unsigned int _clickDetailCount; // +0x70
    unsigned int _clickFeedbackCount; // +0x74
    unsigned int _clickReadmeCount; // +0x78
    UIImageView * _recordRedDot; // +0x80
    UILabel * _remainingTime; // +0x88
    UILabel * _invalidDate; // +0x90
    MMUILabel * _discountLabel; // +0x98
    UIImageView * _chargeRedDot; // +0xa0
    UIImageView * _msgRedDot; // +0xa8
    NSString * _enterTs; // +0xb0
    NSString * _outTs; // +0xb8
    MMTableView * _tableView; // +0xc0
    WCOutInviteFriendLogic * _inviteFriendLogic; // +0xc8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)configModel;
- (void)configTableView;
- (id)configCloseFuntionFooterView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)clickFAQButton;
- (void)clickAgreementButton;
- (void)didReceiveCouponResponse;
- (void)finishShowAnimation;
- (long long)getRealSectionIndex:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeAccountCell:(id)arg1;
- (void)makeChargeCell:(id)arg1;
- (void)refreshDisCountLabel;
- (void)makeRecordCell:(id)arg1;
- (void)makeMsgCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)updateNewxmlInfo;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configRightBarButtonItem;
- (void)onClickMoreBtn;
- (void)onClickActionSheetWebRecharge;
- (void)onClickActionSheetShareRecord;
- (id)getPackageArr;
- (double)getAccountCellHeight;
- (void)onCheckFeeClicked;
- (id)recordRedDot;
- (void)setRecordRedDot:(id)arg1;
- (id)remainingTime;
- (void)setRemainingTime:(id)arg1;
- (id)invalidDate;
- (void)setInvalidDate:(id)arg1;
- (id)discountLabel;
- (void)setDiscountLabel:(id)arg1;
- (id)chargeRedDot;
- (void)setChargeRedDot:(id)arg1;
- (id)msgRedDot;
- (void)setMsgRedDot:(id)arg1;
- (id)enterTs;
- (void)setEnterTs:(id)arg1;
- (id)outTs;
- (void)setOutTs:(id)arg1;
- (unsigned int)clickDetailCount;
- (void)setClickDetailCount:(unsigned int)arg1;
- (unsigned int)clickFeedbackCount;
- (void)setClickFeedbackCount:(unsigned int)arg1;
- (unsigned int)clickReadmeCount;
- (void)setClickReadmeCount:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)inviteFriendLogic;
- (void)setInviteFriendLogic:(id)arg1;
- (void).cxx_destruct;
@end

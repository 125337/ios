@interface WCCoinDetailViewController : MMUIViewController <ILinkEventExt, WCCoinGetWecoinPageInfoCgiDelegate, WCCoinBuyCoinLogicDelegate, WCCoinFetchMoneyViewControllerDelegate, ServiceAuthExt>
{
    BOOL _directlyJumpDetailPage; // +0x68
    BOOL _didBuyCoin; // +0x69
    KindaUIScrollView * _scrollView; // +0x70
    UIView * _contentView; // +0x78
    GetWecoinPageInfoResponse * _pageInfoResponse; // +0x80
    WCCoinNewUserTipsView * _tipsView; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)refresh;
- (void)layoutContentView;
- (void)layoutBannerView;
- (void)layoutTopView;
- (void)layoutProfitView;
- (void)layoutSubscriptionListEntrance;
- (void)layoutBottomView;
- (void)buyCoin;
- (void)clickProfit;
- (void)onClickRightItem;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)clickCoinBalance;
- (void)clickBanner;
- (void)clickSubscriptionListEntrance;
- (void)getPageInfo;
- (void)showNewUserTips;
- (void)didFetchMoneySuccess:(id)arg1;
- (void)getWecoinPageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getWecoinPageInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (BOOL)directlyJumpDetailPage;
- (void)setDirectlyJumpDetailPage:(BOOL)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)pageInfoResponse;
- (void)setPageInfoResponse:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (BOOL)didBuyCoin;
- (void)setDidBuyCoin:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WCPayWalletEntryHeaderView : UIView <WCPayNoticeBannerDelegate>
{
    BOOL _showBalanceValue; // +0x8
    BOOL _hideBalanceValue; // +0x9
    id <WCPayWalletEntryHeaderViewDelegate> _delegate; // +0x10
    WCPayControlData * _data; // +0x18
    NoticeItem * _bannerData; // +0x20
    unsigned long long _walletEntranceBalanceSwitchState; // +0x28
    unsigned long long _wallet_balance; // +0x30
    WCPayNoticeItemView * _bannerView; // +0x38
    UIView * _brandbkgView; // +0x40
    UIView * _offlinePayEntryView; // +0x48
    UIImageView * _offlinePayIconImgView; // +0x50
    MMUILabel * _offlinePayNameLabel; // +0x58
    UIButton * _offlinePayHintBtn; // +0x60
    UIView * _balanceEntryView; // +0x68
    UIImageView * _balanceIconImgView; // +0x70
    MMUILabel * _balanceNameLabel; // +0x78
    UIButton * _balanceHintBtn; // +0x80
    TimeoutNumber * _timeoutNumber; // +0x88
    MMUILabel * _balanceMoneyLabel; // +0x90
    UIImageView * _reddotForOfflinePay; // +0x98
    UIImageView * _reddotForBalance; // +0xa0
    double _lastLayoutWidth; // +0xa8
}
+ (double)getHeaderViewHeightWithBannerData:(id)arg1;
+ (double)getHeaderContentHeight;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)refreshControlData:(id)arg1;
- (id)getControlData;
- (void)refreshBannerData:(id)arg1;
- (void)setupTimeoutNumberNoAnimationDelay;
- (void)startTimeoutNumberTimeout;
- (void)updateBalanceAndRefreshView;
- (void)refreshView;
- (void)updateBannerView;
- (void)updateBrandBkgView:(double)arg1;
- (void)updateOfflinePayEntryView;
- (void)updateBalanceEntryView;
- (void)setupTimeoutNumber;
- (void)setupBalanceMoneyLabel;
- (void)handleUpdateWalletBalance;
- (double)caculateHeaderEntryItemWidth;
- (double)headerEntryItemHeight;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)offlinePayEntryBtnClick;
- (void)balanceEntryBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)bannerData;
- (void)setBannerData:(id)arg1;
- (BOOL)showBalanceValue;
- (void)setShowBalanceValue:(BOOL)arg1;
- (BOOL)hideBalanceValue;
- (void)setHideBalanceValue:(BOOL)arg1;
- (unsigned long long)walletEntranceBalanceSwitchState;
- (void)setWalletEntranceBalanceSwitchState:(unsigned long long)arg1;
- (unsigned long long)wallet_balance;
- (void)setWallet_balance:(unsigned long long)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)brandbkgView;
- (void)setBrandbkgView:(id)arg1;
- (id)offlinePayEntryView;
- (void)setOfflinePayEntryView:(id)arg1;
- (id)offlinePayIconImgView;
- (void)setOfflinePayIconImgView:(id)arg1;
- (id)offlinePayNameLabel;
- (void)setOfflinePayNameLabel:(id)arg1;
- (id)offlinePayHintBtn;
- (void)setOfflinePayHintBtn:(id)arg1;
- (id)balanceEntryView;
- (void)setBalanceEntryView:(id)arg1;
- (id)balanceIconImgView;
- (void)setBalanceIconImgView:(id)arg1;
- (id)balanceNameLabel;
- (void)setBalanceNameLabel:(id)arg1;
- (id)balanceHintBtn;
- (void)setBalanceHintBtn:(id)arg1;
- (id)timeoutNumber;
- (void)setTimeoutNumber:(id)arg1;
- (id)balanceMoneyLabel;
- (void)setBalanceMoneyLabel:(id)arg1;
- (id)reddotForOfflinePay;
- (void)setReddotForOfflinePay:(id)arg1;
- (id)reddotForBalance;
- (void)setReddotForBalance:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

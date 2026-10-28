@interface WCCoinFetchMoneySuccessViewController : WCPayPaidSuccessStatusViewController
{
    BOOL _fetchFromLiveStyle; // +0x98
    unsigned long long _fetchAmount; // +0xa0
    LiveRewardIncomeBizInfo * _liveIncomeBizInfo; // +0xa8
    EncashResultPageInfo * _pageInfo; // +0xb0
}
- (void)viewDidLoad;
- (id)dateStringFromTimestamp:(long long)arg1;
- (id)detailModel;
- (BOOL)isFetchFromLivePersonal;
- (BOOL)isFetchFromLiveStudio;
- (unsigned long long)fetchAmount;
- (void)setFetchAmount:(unsigned long long)arg1;
- (BOOL)fetchFromLiveStyle;
- (void)setFetchFromLiveStyle:(BOOL)arg1;
- (id)liveIncomeBizInfo;
- (void)setLiveIncomeBizInfo:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (void).cxx_destruct;
@end

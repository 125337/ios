@interface WCCoinFetchMoneySuccessViewController : WCPayPaidSuccessStatusViewController
{
    BOOL _fetchFromLiveStyle; // +0x90
    unsigned long long _fetchAmount; // +0x98
    LiveRewardIncomeBizInfo * _liveIncomeBizInfo; // +0xa0
    EncashResultPageInfo * _pageInfo; // +0xa8
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


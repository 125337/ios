@interface LbsAdvertismentsMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _adInfos; // +0x8
    NSMutableDictionary * _adActionInfos; // +0x10
}
- (void)appendAdInfo:(id)arg1;
- (void)showAd:(id)arg1;
- (void)closeAd:(id)arg1;
- (BOOL)isAdvertismentCanShow:(id)arg1;
- (BOOL)isAdvertismentCanClose:(id)arg1;
- (long long)logFeatureActionForAd:(id)arg1 isAdClicked:(BOOL)arg2;
- (void)onServiceInit;
- (id)adInfos;
- (void)setAdInfos:(id)arg1;
- (id)adActionInfos;
- (void)setAdActionInfos:(id)arg1;
- (void).cxx_destruct;
@end

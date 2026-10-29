@interface EcsOrderService : MMUserService <MMServiceProtocol>
{
    BOOL _meTabClickExposePending; // +0x8
    WCFinderECRedDotsCenter * _ecRedDotsCenter; // +0x10
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x18
    EcsCardHolderEntranceInfo * _entranceInfo; // +0x20
}
- (id)init;
- (void)onServiceInit;
- (id)getCardHolderEntranceConfig;
- (void)resetRedDotWordingCalStoreValue;
- (void)updateOrderEntranceInfo:(id)arg1 withScene:(unsigned int)arg2;
- (void)jumpOrderAndCardCenterFromVc:(id)arg1 clickSessionId:(id)arg2;
- (BOOL)useEcsNewLogic;
- (id)getFinderOrderAndCardEntranceInfo;
- (void)jumpOrderAndCardCenterWithFinderLogic:(id)arg1;
- (void)preLoadData;
- (BOOL)nativeDataManagerSwitchOn;
- (id)getRedDotDigestFromBuffer:(id)arg1;
- (void)onAccountInitialized;
- (void)reportWeShopPoiSwitch:(BOOL)arg1;
- (void)preloadOrderAndCard:(int)arg1;
- (BOOL)meClickPreloadSwitchOn;
- (void)tryMeClickPreload;
- (void)setMeTabClickExposePending:(BOOL)arg1;
- (BOOL)consumeMeTabClickExposePending;
- (void)onPageAppear;
- (id)getTitle;
- (id)getTitleWithType:(unsigned int)arg1;
- (id)ecRedDotsCenter;
- (void)setEcRedDotsCenter:(id)arg1;
- (id)serialQueue;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (BOOL)meTabClickExposePending;
- (void).cxx_destruct;
@end

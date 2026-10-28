@interface EcsOrderService : MMUserService <MMServiceProtocol>
{
    EcsCardHolderEntranceInfo * _entranceInfo; // +0x8
}
- (id)init;
- (id)getCardHolderEntranceConfig;
- (void)updateOrderEntranceInfo:(id)arg1;
- (void)jumpOrderAndCardCenterFromVc:(id)arg1;
- (BOOL)useEcsNewLogic;
- (id)getFinderOrderAndCardEntranceInfo;
- (void)jumpOrderAndCardCenterWithFinderLogic:(id)arg1;
- (void)preLoadData;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (void).cxx_destruct;
@end

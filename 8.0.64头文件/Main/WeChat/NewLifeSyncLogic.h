@interface NewLifeSyncLogic : FinderCommonReddotSyncBaseLogic
{
    NewLifeMMKVKeyModel * _kvModel; // +0x8
}
- (id)initWithKVModel:(id)arg1;
- (void)setSyncBuffer:(id)arg1;
- (void)setLastBuffer:(id)arg1;
- (id)otherRelatedKeyPathList;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncWithSwitchToFinderUsername:(id)arg1;
- (void)syncWithEnterScene;
- (void)syncWithScene:(unsigned int)arg1;
- (void)addSyncTask:(id)arg1;
- (void)onEndWithContinueFlag;
- (void)triggerEnterForForegroundSync;
- (void)triggerGlobalSearchSync;
- (void)triggerEnterDiscoverySync;
- (void)triggerEnterDiscoveryFinderSync;
- (void)triggerEnterDiscoveryTimeLineSync;
- (id)generateClientInfo;
- (BOOL)enableAffSyncLogic;
- (id)kvModel;
- (void)setKvModel:(id)arg1;
- (void).cxx_destruct;
@end

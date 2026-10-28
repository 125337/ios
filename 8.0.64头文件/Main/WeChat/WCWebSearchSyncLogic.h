@interface WCWebSearchSyncLogic : FinderCommonReddotSyncBaseLogic
- (id)init;
- (void)setSyncBuffer:(id)arg1;
- (void)setLastBuffer:(id)arg1;
- (id)otherRelatedKeyPathList;
- (void)syncWithScene:(unsigned int)arg1;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)addSyncTask:(id)arg1;
- (void)onEndWithContinueFlag;
- (void)triggerEnterForForegroundSync;
- (void)triggerEnterDiscoverySync;
@end

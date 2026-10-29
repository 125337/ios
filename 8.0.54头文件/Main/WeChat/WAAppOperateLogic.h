@interface WAAppOperateLogic : MMObject
{
    NSMutableDictionary * m_operationInfo; // +0x8
    NSMutableArray * m_starOperations; // +0x10
    id <WAAppOperateLogicDelegate> _delegate; // +0x18
}
- (void)fetchData;
- (void)saveData;
- (void)saveStarData;
- (void)addAppOperationInRetryQueue:(id)arg1;
- (void)runAllOperation;
- (void)excuteOpration:(id)arg1;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 withCommonUse:(BOOL)arg2 requestInfo:(id)arg3 inScene:(unsigned int)arg4;
- (void)getLatestUsageAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getCommonUseAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)updateAppUsageToSvrWithOpration:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleGetWeAppUsageRecord:(id)arg1;
- (void)handleUpdateWeAppUsageRecord:(id)arg1;
- (void)handleFaildUpdateUsageOperationAsync:(id)arg1;
- (void)handleUpdateStarRecord:(id)arg1;
- (void)handleGetWxaCommUseApp:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (id)convertWxaAppItem2AppItemData:(id)arg1;
- (void)starItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)unStarItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)moveStaredItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)operateStarItem:(id)arg1 positionWithPreItem:(id)arg2 nextItem:(id)arg3 actionType:(unsigned int)arg4 inScene:(unsigned int)arg5;
- (void)operateStarItemsForReason:(unsigned int)arg1;
- (void)operateStarItemsForTransferedReason:(int)arg1;
- (int)transferUpdateWxaRecordReasonFromOperationSyncReason:(unsigned int)arg1;
- (id)m_operationInfo;
- (void)setM_operationInfo:(id)arg1;
- (id)m_starOperations;
- (void)setM_starOperations:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


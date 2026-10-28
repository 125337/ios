@interface MMFinderLiveSensitiveLogic : MMUserService <MMServiceProtocol>
{
    BOOL _isInvokeingAction; // +0x8
    id /* block */ _onSensitiveDataItemListUpdateCallback; // +0x10
    id /* block */ _onSensitiveDataActionFailCallback; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    NSMutableArray * _baseSensitiveDataItemList; // +0x28
    NSMutableArray * _sensitiveDataItemList; // +0x30
    NSMutableArray * _pendingActionItemList; // +0x38
    WCFinderLiveBaseCgi * _invokingCGI; // +0x40
    unsigned long long _currMaxActionId; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onActionServiceInit:(id)arg1;
- (void)clearCache;
- (void)requestSensitiveDataItem;
- (void)addSensitiveDataItem:(id)arg1;
- (void)deleteSensitiveDataItem:(id)arg1;
- (id)currentSensitiveDataItems;
- (BOOL)hasPendingAction;
- (void)invokeRequestAction:(id)arg1;
- (void)invokeAddAction:(id)arg1;
- (void)invokeDeleteAction:(id)arg1;
- (void)onActionInvokeEnd;
- (void)updateSensitiveDataItemListIfNeeded:(id)arg1;
- (void)updateBaseSensitiveDataItemList:(id)arg1;
- (unsigned long long)getNextActionId;
- (void)clearPendingActions;
- (void)invokeNextPendingActionIfNeeded;
- (id)getNextBatchActionItemList;
- (id)getSensitiveDataItemListFromPendingActions:(id)arg1;
- (id)sensitiveDataItemList;
- (id)pendingActionItemList;
- (id)baseSensitiveDataItemList;
- (id)getActionDescription:(id)arg1;
- (id /* block */)onSensitiveDataItemListUpdateCallback;
- (void)setOnSensitiveDataItemListUpdateCallback:(id /* block */)arg1;
- (id /* block */)onSensitiveDataActionFailCallback;
- (void)setOnSensitiveDataActionFailCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setBaseSensitiveDataItemList:(id)arg1;
- (void)setSensitiveDataItemList:(id)arg1;
- (void)setPendingActionItemList:(id)arg1;
- (BOOL)isInvokeingAction;
- (void)setIsInvokeingAction:(BOOL)arg1;
- (id)invokingCGI;
- (void)setInvokingCGI:(id)arg1;
- (unsigned long long)currMaxActionId;
- (void)setCurrMaxActionId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

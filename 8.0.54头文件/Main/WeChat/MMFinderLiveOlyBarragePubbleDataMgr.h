@interface MMFinderLiveOlyBarragePubbleDataMgr : MMUserService <MMFinderLiveOlyBarrageDataExt, MMLiveTaskMgrExt, MMServiceProtocol>
{
    NSData * _lastBuffer; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)convertToBarrageDataItemList:(id)arg1;
- (id)convertToCommentDataItemList:(id)arg1 withTaskId:(id)arg2;
- (void)updateFinderLiveBarrageDataWithResponse:(id)arg1 andTaskId:(id)arg2;
- (void)onFinderLiveOlyBarrageDataUpdate:(id)arg1 taskId:(id)arg2;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end


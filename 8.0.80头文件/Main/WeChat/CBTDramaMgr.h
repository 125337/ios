@interface CBTDramaMgr : MMUserService <MMActionNotifyCommBizExt, MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getDramaFirstPageCache;
- (void)loadMoreDramaItemWithLastDramaId:(id)arg1 isPrePull:(BOOL)arg2 completeHandle:(id /* block */)arg3;
- (void)downloadDramaMediaWithUrl:(id)arg1 savePath:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)downloadDramaMediaWithUrl:(id)arg1 savePath:(id)arg2 completeHandle:(id /* block */)arg3 priority:(int)arg4;
- (void)onRecvNotify:(id)arg1;
- (void)reportPageExit;
- (void)sendTextMsgToBot:(id)arg1 voipSessionID:(id)arg2;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
@end

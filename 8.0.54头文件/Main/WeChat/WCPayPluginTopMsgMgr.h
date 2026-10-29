@interface WCPayPluginTopMsgMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTopMsgMMKVId;
- (id)getTopMsgMMKVKey:(id)arg1;
- (void)handleAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)addTopMsg:(id)arg1 msgItem:(id)arg2;
- (void)removeTopMsg:(id)arg1 msgSvrId:(long long)arg2;
- (id)getTopMsgRecord:(id)arg1;
@end


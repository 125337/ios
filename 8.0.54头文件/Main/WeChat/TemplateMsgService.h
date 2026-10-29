@interface TemplateMsgService : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mmkv; // +0x8
}
- (void)onServiceInit;
- (void)updateMsgExpand:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)wasMsgExpanded:(id)arg1 localId:(unsigned int)arg2;
- (void)updateReaderFooterClick:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)wasReaderFooterClicked:(id)arg1 localId:(unsigned int)arg2;
- (void)report11608:(id)arg1 userName:(id)arg2 actionType:(unsigned long long)arg3 containerType:(unsigned int)arg4 sessionId:(unsigned int)arg5;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end


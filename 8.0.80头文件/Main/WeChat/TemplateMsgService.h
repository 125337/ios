@interface TemplateMsgService : MMUserService <MMServiceProtocol>
{
    NSString * _enterServiceNoticeBoxSessionId; // +0x8
    NSString * _enterTemplateMsgAuthMgrSessionId; // +0x10
    MemoryMappedKV * _mmkv; // +0x18
}
- (void)onServiceInit;
- (void)updateMsgExpand:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)wasMsgExpanded:(id)arg1 localId:(unsigned int)arg2;
- (void)updateReaderFooterClick:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)wasReaderFooterClicked:(id)arg1 localId:(unsigned int)arg2;
- (void)report11608:(id)arg1 userName:(id)arg2 actionType:(unsigned long long)arg3 containerType:(unsigned int)arg4 sessionId:(unsigned int)arg5;
- (unsigned long long)clickContentHandleByMsg:(id)arg1 viewController:(id)arg2;
- (unsigned long long)clickContentHandleByMsgId:(id)arg1 localId:(long long)arg2 viewController:(id)arg3;
- (unsigned long long)clickContentImpl:(id)arg1 viewController:(id)arg2;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)jumpWeappOpWrap:(id)arg1 weappOpWrap:(id)arg2 viewController:(id)arg3;
- (id)getGameCenterWebViewController:(id)arg1;
- (id)getWebViewController:(id)arg1 readerWrap:(id)arg2 url:(id)arg3 forPeek:(BOOL)arg4 viewController:(id)arg5;
- (id)getReaderUrlWithUrl:(id)arg1 nsUsername:(id)arg2;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 readerWrap:(id)arg2 viewController:(id)arg3;
- (id)enterServiceNoticeBoxSessionId;
- (void)setEnterServiceNoticeBoxSessionId:(id)arg1;
- (id)enterTemplateMsgAuthMgrSessionId;
- (void)setEnterTemplateMsgAuthMgrSessionId:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

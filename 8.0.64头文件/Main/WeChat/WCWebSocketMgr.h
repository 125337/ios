@interface WCWebSocketMgr : MMUserService <MMServiceProtocol>
{
    NSArray * _arrCertData; // +0x8
    map<std::string, std::shared_ptr<WssCallback>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<WssCallback>>>> callbackMap; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (long long)connectWebSocket:(unsigned int *)arg1 group:(id)arg2 config:(id)arg3 appType:(unsigned int)arg4 appDebugModeType:(unsigned int)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 tcpNoDelay:(BOOL)arg9 perMessageDeflate:(BOOL)arg10 forceCellularNetwork:(BOOL)arg11;
- (void)_configureProxy:(id)arg1;
- (void)_readProxySettingWithType:(id)arg1 settings:(id)arg2;
- (void)_fetchPAC:(id)arg1 url:(id)arg2;
- (void)_runPACScript:(id)arg1 url:(id)arg2;
- (id)certificateArrayFromDataList:(id)arg1;
- (long long)closeWebSocket:(unsigned int)arg1 group:(id)arg2 code:(long long)arg3 reason:(id)arg4;
- (long long)sendMessage:(unsigned int)arg1 group:(id)arg2 message:(id)arg3;
- (void)destroyWeApp:(id)arg1;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didReceiveMessage:(id)arg3;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didOpenWithCode:(long long)arg3 success:(BOOL)arg4 headers:(id)arg5 profiles:(id)arg6 msg:(id)arg7;
- (void)webSocket:(unsigned int)arg1 group:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

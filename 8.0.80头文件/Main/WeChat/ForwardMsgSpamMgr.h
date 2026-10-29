@interface ForwardMsgSpamMgr : MMUserService <MMServiceProtocol>
{
    ForwardMsgSpamDb * _db; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)requestMsgSpam:(id)arg1 commonParams:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)isSafeMsg:(id)arg1;
- (BOOL)isSpamMsg:(id)arg1;
- (BOOL)isUnknownMsg:(id)arg1;
- (void)setUsername:(id)arg1 andScene:(unsigned long long)arg2 andMsgId:(long long)arg3 andOpenStatus:(BOOL)arg4;
- (id)sInt2String:(long long)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (void).cxx_destruct;
@end

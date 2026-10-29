@interface WxpayCall : NSObject
{
    BOOL _terminal; // +0x8
    unsigned long long _callId; // +0x10
    NSString * _scene; // +0x18
    id /* block */ _completion; // +0x20
    id /* block */ _cancelHandler; // +0x28
}
- (void)cancel;
- (void)emitKeepAliveResult:(id)arg1;
- (void)finishWithResult:(id)arg1 status:(id)arg2 message:(id)arg3;
- (unsigned long long)callId;
- (void)setCallId:(unsigned long long)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (BOOL)terminal;
- (void)setTerminal:(BOOL)arg1;
- (void).cxx_destruct;
@end

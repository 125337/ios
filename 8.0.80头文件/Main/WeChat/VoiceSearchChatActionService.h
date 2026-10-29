@interface VoiceSearchChatActionService : MMUserService <MMServiceProtocol>
- (void)openChatWithUsername:(id)arg1 traceID:(id)arg2 completion:(id /* block */)arg3;
- (void)openChatWithUsername:(id)arg1 traceID:(id)arg2 voipSessionID:(id)arg3 completion:(id /* block */)arg4;
- (void)openChatAndSendPlainText:(id)arg1 toUsername:(id)arg2 traceID:(id)arg3 completion:(id /* block */)arg4;
- (void)openChatAndSendPlainText:(id)arg1 toUsername:(id)arg2 traceID:(id)arg3 voipSessionID:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)isHalfScreenHostedNav:(id)arg1;
- (BOOL)resolveContactChatWithUsername:(id)arg1 contact:(id *)arg2 navigationController:(id *)arg3 error:(id *)arg4;
- (BOOL)isSupportedClientSendContact:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
@end

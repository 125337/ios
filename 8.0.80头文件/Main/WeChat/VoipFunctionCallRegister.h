@interface VoipFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (void)makeVoiceCallWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)makeVideoCallWithContact:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)validateContact:(id)arg1 errorResult:(id *)arg2;
- (BOOL)checkVoiceCallSupport:(id)arg1 errorResult:(id *)arg2;
- (BOOL)checkVideoCallSupport:(id)arg1 errorResult:(id *)arg2;
- (void)exitChatBotRoomIfNeeded:(id /* block */)arg1;
- (void)executePendingVoiceCall:(id)arg1 isVideo:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)registerModuleFunctions;
@end

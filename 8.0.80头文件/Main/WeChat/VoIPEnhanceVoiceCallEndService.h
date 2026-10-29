@interface VoIPEnhanceVoiceCallEndService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _enhancedConversationByRoomID; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateEnhanceVoiceEnabled:(BOOL)arg1 roomID:(unsigned long long)arg2 conversation:(id)arg3;
- (void)handleWordingInfo:(id)arg1 exceptionType:(unsigned long long)arg2;
- (id)enhancedConversationByRoomID;
- (void)setEnhancedConversationByRoomID:(id)arg1;
- (void).cxx_destruct;
@end

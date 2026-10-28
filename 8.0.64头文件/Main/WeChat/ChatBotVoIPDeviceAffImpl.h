@interface ChatBotVoIPDeviceAffImpl : NSObject <ChatbotDeviceCPP2NativeCallerBase>
{
    ChatbotDeviceCPP2NativeCallerCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onAITalkingStatusChangeAsync:(unsigned long long)arg1 talkingMembers:(id)arg2;
- (id)callback;
- (void).cxx_destruct;
@end

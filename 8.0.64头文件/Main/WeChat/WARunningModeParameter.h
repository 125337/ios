@interface WARunningModeParameter : NSObject
{
    NSString * _chatToolMode; // +0x8
    NSString * _chatToolUsername; // +0x10
    NSArray * _chatToolMaterials; // +0x18
    unsigned long long _agentModeState; // +0x20
    NSString * _agentSessionId; // +0x28
}
- (BOOL)runningInChatToolSubpackage;
- (BOOL)runningInChatToolPage;
- (id)chatToolMode;
- (void)setChatToolMode:(id)arg1;
- (id)chatToolUsername;
- (void)setChatToolUsername:(id)arg1;
- (id)chatToolMaterials;
- (void)setChatToolMaterials:(id)arg1;
- (unsigned long long)agentModeState;
- (void)setAgentModeState:(unsigned long long)arg1;
- (id)agentSessionId;
- (void)setAgentSessionId:(id)arg1;
- (void).cxx_destruct;
@end

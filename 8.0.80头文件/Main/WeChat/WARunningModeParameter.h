@interface WARunningModeParameter : NSObject <NSCopying>
{
    BOOL _silentForeground; // +0x8
    BOOL _canShowAuthCard; // +0x9
    BOOL _canAutoAuth; // +0xa
    NSString * _chatToolMode; // +0x10
    NSString * _chatToolUsername; // +0x18
    NSArray * _chatToolMultiChatRoomInfo; // +0x20
    NSArray * _chatToolMaterials; // +0x28
    unsigned long long _agentModeState; // +0x30
    NSString * _agentSessionId; // +0x38
    NSString * _agentTraceMsgid; // +0x40
    NSString * _agentStackSessionId; // +0x48
    WAHandoffInfo * _handoffInfo; // +0x50
    WAAgentDetailPageModeParameter * _agentDetailPageMode; // +0x58
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)runningInChatToolSubpackage;
- (BOOL)runningInChatToolPage;
- (BOOL)runningInChatToolAllPage;
- (id)chatToolMode;
- (void)setChatToolMode:(id)arg1;
- (id)chatToolUsername;
- (void)setChatToolUsername:(id)arg1;
- (id)chatToolMultiChatRoomInfo;
- (void)setChatToolMultiChatRoomInfo:(id)arg1;
- (id)chatToolMaterials;
- (void)setChatToolMaterials:(id)arg1;
- (unsigned long long)agentModeState;
- (void)setAgentModeState:(unsigned long long)arg1;
- (id)agentSessionId;
- (void)setAgentSessionId:(id)arg1;
- (id)agentTraceMsgid;
- (void)setAgentTraceMsgid:(id)arg1;
- (id)agentStackSessionId;
- (void)setAgentStackSessionId:(id)arg1;
- (BOOL)silentForeground;
- (void)setSilentForeground:(BOOL)arg1;
- (BOOL)canShowAuthCard;
- (void)setCanShowAuthCard:(BOOL)arg1;
- (BOOL)canAutoAuth;
- (void)setCanAutoAuth:(BOOL)arg1;
- (id)handoffInfo;
- (void)setHandoffInfo:(id)arg1;
- (id)agentDetailPageMode;
- (void)setAgentDetailPageMode:(id)arg1;
- (void).cxx_destruct;
@end

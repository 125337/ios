@interface WAAgentDetailPageModeParameter : NSObject
{
    BOOL _agentDetailPage; // +0x8
    BOOL _showFakeCapsule; // +0x9
    long long _agentDetailPageId; // +0x10
    NSString * _agentSessionId; // +0x18
}
- (BOOL)agentDetailPage;
- (void)setAgentDetailPage:(BOOL)arg1;
- (long long)agentDetailPageId;
- (void)setAgentDetailPageId:(long long)arg1;
- (id)agentSessionId;
- (void)setAgentSessionId:(id)arg1;
- (BOOL)showFakeCapsule;
- (void)setShowFakeCapsule:(BOOL)arg1;
- (void).cxx_destruct;
@end

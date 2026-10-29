@interface WAAppTaskJumpInfo : NSObject
{
    unsigned int _sourceType; // +0x8
    NSString * _sourceAppID; // +0x10
    NSString * _agentId; // +0x18
}
- (id)description;
- (id)sourceAppID;
- (void)setSourceAppID:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)agentId;
- (void)setAgentId:(id)arg1;
- (void).cxx_destruct;
@end

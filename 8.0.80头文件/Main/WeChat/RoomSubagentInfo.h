@interface RoomSubagentInfo : NSObject
{
    unsigned int _subAgentSource; // +0x8
    int _conversationTurn; // +0xc
    CBTSubAgentInfo * _info; // +0x10
    NSString * _headImageUrl; // +0x18
    NSString * _name; // +0x20
    NSString * _summary; // +0x28
    NSString * _subagentId; // +0x30
    long long _replyStatus; // +0x38
}
- (id)info;
- (void)setInfo:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)subagentId;
- (void)setSubagentId:(id)arg1;
- (unsigned int)subAgentSource;
- (void)setSubAgentSource:(unsigned int)arg1;
- (long long)replyStatus;
- (void)setReplyStatus:(long long)arg1;
- (int)conversationTurn;
- (void)setConversationTurn:(int)arg1;
- (void).cxx_destruct;
@end

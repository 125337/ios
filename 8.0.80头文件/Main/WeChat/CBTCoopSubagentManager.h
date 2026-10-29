@interface CBTCoopSubagentManager : NSObject
{
    RoomSubagentInfo * _subagentInfo; // +0x8
    NSHashTable * _thinkingViewModels; // +0x10
}
- (void)joinSubagentWithHeadImageUrl:(id)arg1 name:(id)arg2 summary:(id)arg3 subagentId:(id)arg4 subAgentSource:(unsigned int)arg5 session:(id)arg6;
- (id)getSubagentInfo;
- (void)markSubagentAsReplied;
- (void)markSubagentAsUnreplied;
- (BOOL)hasSubagent;
- (void)removeSubagent;
- (void)addThinkingViewModel:(id)arg1;
- (id)subagentInfo;
- (void)setSubagentInfo:(id)arg1;
- (id)thinkingViewModels;
- (void)setThinkingViewModels:(id)arg1;
- (void).cxx_destruct;
@end

@interface FTSIntelligentMsgIndexState : NSObject
{
    int _taskId; // +0x8
    BOOL _hasDeleteTask; // +0xc
    BOOL _doIngWork; // +0xd
    NSMutableSet * _nextMsgIndexSessions; // +0x10
    NSMutableSet * _preMsgIndexSessions; // +0x18
    NSMutableSet * _missingMsgIndexSessions; // +0x20
    NSMutableDictionary * _dicSessionMaxId; // +0x28
}
- (id)init;
- (BOOL)hasFinishAllTask;
- (id)description;
- (id)nextMsgIndexSessions;
- (void)setNextMsgIndexSessions:(id)arg1;
- (id)preMsgIndexSessions;
- (void)setPreMsgIndexSessions:(id)arg1;
- (id)missingMsgIndexSessions;
- (void)setMissingMsgIndexSessions:(id)arg1;
- (id)dicSessionMaxId;
- (void)setDicSessionMaxId:(id)arg1;
- (BOOL)hasDeleteTask;
- (void)setHasDeleteTask:(BOOL)arg1;
- (BOOL)doIngWork;
- (void)setDoIngWork:(BOOL)arg1;
- (void).cxx_destruct;
@end


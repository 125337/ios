@interface WAAgentAuditSessionContext : NSObject
{
    BOOL _hasPendingSave; // +0x8
    BOOL _saveWaitingNotified; // +0x9
    NSString * _sessionToken; // +0x10
    NSString * _appid; // +0x18
    NSString * _voipSessionID; // +0x20
    long long _mode; // +0x28
    NSString * _caseId; // +0x30
    long long _caseStartedAtMs; // +0x38
    unsigned long long _humanTurnCount; // +0x40
    NSString * _humanWaitJobId; // +0x48
    WAAgentAuditMockLocation * _mockLocation; // +0x50
    NSMutableArray * _pendingCaseTurns; // +0x58
    NSMutableDictionary * _toolCallBuckets; // +0x60
    NSString * _lastActiveTraceId; // +0x68
    NSMutableOrderedSet * _closedTraceIds; // +0x70
    NSString * _latestSnapshotBase64; // +0x78
    ExecutorEvent * _pendingSnapshotEvent; // +0x80
    CaseTurn * _pendingSnapshotTurn; // +0x88
    NSString * _pendingSnapshotScene; // +0x90
    id /* block */ _snapshotWaitTimeoutBlock; // +0x98
    NSString * _pendingSaveCaseId; // +0xa0
}
- (id)init;
- (id)sessionToken;
- (void)setSessionToken:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)caseId;
- (void)setCaseId:(id)arg1;
- (long long)caseStartedAtMs;
- (void)setCaseStartedAtMs:(long long)arg1;
- (unsigned long long)humanTurnCount;
- (void)setHumanTurnCount:(unsigned long long)arg1;
- (id)humanWaitJobId;
- (void)setHumanWaitJobId:(id)arg1;
- (id)mockLocation;
- (void)setMockLocation:(id)arg1;
- (id)pendingCaseTurns;
- (void)setPendingCaseTurns:(id)arg1;
- (id)toolCallBuckets;
- (void)setToolCallBuckets:(id)arg1;
- (id)lastActiveTraceId;
- (void)setLastActiveTraceId:(id)arg1;
- (id)closedTraceIds;
- (void)setClosedTraceIds:(id)arg1;
- (id)latestSnapshotBase64;
- (void)setLatestSnapshotBase64:(id)arg1;
- (id)pendingSnapshotEvent;
- (void)setPendingSnapshotEvent:(id)arg1;
- (id)pendingSnapshotTurn;
- (void)setPendingSnapshotTurn:(id)arg1;
- (id)pendingSnapshotScene;
- (void)setPendingSnapshotScene:(id)arg1;
- (id /* block */)snapshotWaitTimeoutBlock;
- (void)setSnapshotWaitTimeoutBlock:(id /* block */)arg1;
- (BOOL)hasPendingSave;
- (void)setHasPendingSave:(BOOL)arg1;
- (id)pendingSaveCaseId;
- (void)setPendingSaveCaseId:(id)arg1;
- (BOOL)saveWaitingNotified;
- (void)setSaveWaitingNotified:(BOOL)arg1;
- (void).cxx_destruct;
@end

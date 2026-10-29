@interface VoIPCallSDKSnapshotSource : NSObject
{
    BOOL _sessionActive; // +0x8
    id /* block */ _nowPtsNsProvider; // +0x10
    unsigned long long _roomId; // +0x18
}
- (BOOL)startSessionWithRoomId:(unsigned long long)arg1;
- (BOOL)setWindowMs:(int)arg1;
- (void)stopSession;
- (id)captureSnapshot;
- (void)p_releaseSnapshot:(unsigned long long)arg1;
- (id)p_parseSnapshotData:(id)arg1 snapshotId:(unsigned long long)arg2 clientNowNs:(unsigned long long)arg3;
- (id /* block */)nowPtsNsProvider;
- (void)setNowPtsNsProvider:(id /* block */)arg1;
- (BOOL)sessionActive;
- (void)setSessionActive:(BOOL)arg1;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

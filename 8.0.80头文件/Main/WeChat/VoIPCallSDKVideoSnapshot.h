@interface VoIPCallSDKVideoSnapshot : NSObject
{
    NSArray * _sendFrames; // +0x8
    NSArray * _recvFrames; // +0x10
    unsigned long long _snapshotId; // +0x18
    unsigned long long _roomId; // +0x20
    unsigned long long _triggerWallMs; // +0x28
    long long _anchorOffsetNs; // +0x30
}
- (id)initWithSendFrames:(id)arg1 recvFrames:(id)arg2 snapshotId:(unsigned long long)arg3 roomId:(unsigned long long)arg4 triggerWallMs:(unsigned long long)arg5 anchorOffsetNs:(long long)arg6;
- (id)sendFrames;
- (id)recvFrames;
- (unsigned long long)snapshotId;
- (unsigned long long)roomId;
- (unsigned long long)triggerWallMs;
- (long long)anchorOffsetNs;
- (void).cxx_destruct;
@end

@interface VoIPCallSDKSnapshotFrame : NSObject
{
    NSData * _annexBData; // +0x8
    unsigned long long _ptsNs; // +0x10
    SnapshotFrame _frame; // +0x18
}
- (id)initWithFrame:(const SnapshotFrame *)arg1 annexBData:(id)arg2 ptsNs:(unsigned long long)arg3;
- (SnapshotFrame)frame;
- (id)annexBData;
- (unsigned long long)ptsNs;
- (void).cxx_destruct;
@end

@interface WAAgentRuntimeSnapshotManager : NSObject
{
    id <WAAgentRuntimeSnapshotManagerDelegate> _delegate; // +0x8
    NSMutableDictionary * _snapshotStates; // +0x10
    NSMutableDictionary * _snapshotDelayBlocks; // +0x18
    NSMutableDictionary * _snapshotMetadatas; // +0x20
    NSMutableDictionary * _firstFrameImages; // +0x28
    id <WAAgentRuntimeSnapshotReportProvider> _reportProvider; // +0x30
}
+ (id)snapshotImageForView:(id)arg1;
- (id)initWithReportProvider:(id)arg1;
- (unsigned long long)snapshotStateForContainerId:(unsigned int)arg1;
- (void)handleNotifyCardRenderForContainerId:(unsigned int)arg1 view:(id)arg2 metadata:(id)arg3;
- (void)performQualityUpgradeSnapshotForContainerId:(unsigned int)arg1;
- (void)flushSnapshotForContainerId:(unsigned int)arg1 view:(id)arg2;
- (void)uploadSnapshotForContainerId:(unsigned int)arg1 image:(id)arg2;
- (void)cleanupSnapshotStateForContainerId:(unsigned int)arg1;
- (void)cancelAllPendingSnapshots;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapshotStates;
- (void)setSnapshotStates:(id)arg1;
- (id)snapshotDelayBlocks;
- (void)setSnapshotDelayBlocks:(id)arg1;
- (id)snapshotMetadatas;
- (void)setSnapshotMetadatas:(id)arg1;
- (id)firstFrameImages;
- (void)setFirstFrameImages:(id)arg1;
- (id)reportProvider;
- (void)setReportProvider:(id)arg1;
- (void).cxx_destruct;
@end

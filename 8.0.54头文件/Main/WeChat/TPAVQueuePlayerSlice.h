@interface TPAVQueuePlayerSlice : NSObject
{
    BOOL _assetLoaded; // +0x8
    TPPlayerSlice * _slice; // +0x10
    AVAsset * _asset; // +0x18
    AVPlayerItem * _playerItem; // +0x20
    long long _correctedSliceDuration; // +0x28
    AVPlayerItemVideoOutput * _snapshotOutput; // +0x30
    AVPlayerItemVideoOutput * _VROutput; // +0x38
}
- (id)slice;
- (void)setSlice:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (long long)correctedSliceDuration;
- (void)setCorrectedSliceDuration:(long long)arg1;
- (BOOL)assetLoaded;
- (void)setAssetLoaded:(BOOL)arg1;
- (id)snapshotOutput;
- (void)setSnapshotOutput:(id)arg1;
- (id)VROutput;
- (void)setVROutput:(id)arg1;
- (void).cxx_destruct;
@end


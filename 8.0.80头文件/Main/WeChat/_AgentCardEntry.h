@interface _AgentCardEntry : NSObject
{
    BOOL _snapshotReported; // +0x8
    BOOL _hasFinalSnapshot; // +0x9
    unsigned int _containerId; // +0xc
    MagicWeAppCardSclFrameSetView * _frameSetView; // +0x10
    MagicAgentRuntimeFlutterTexture * _texture; // +0x18
    WAAgentCardMetadata * _infoSecMetadata; // +0x20
    CGSize _lastSize; // +0x28
}
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (id)texture;
- (void)setTexture:(id)arg1;
- (CGSize)lastSize;
- (void)setLastSize:(CGSize)arg1;
- (id)infoSecMetadata;
- (void)setInfoSecMetadata:(id)arg1;
- (BOOL)snapshotReported;
- (void)setSnapshotReported:(BOOL)arg1;
- (BOOL)hasFinalSnapshot;
- (void)setHasFinalSnapshot:(BOOL)arg1;
- (void).cxx_destruct;
@end

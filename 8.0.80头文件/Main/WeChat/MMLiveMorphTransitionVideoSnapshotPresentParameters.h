@interface MMLiveMorphTransitionVideoSnapshotPresentParameters : MMLiveMorphTransitionParameters
{
    BOOL _isVideoSceneMode; // +0x40
    BOOL _targetHasBottomView; // +0x41
    UIImage * _snapshotImg; // +0x48
}
- (id)snapshotImg;
- (void)setSnapshotImg:(id)arg1;
- (BOOL)isVideoSceneMode;
- (void)setIsVideoSceneMode:(BOOL)arg1;
- (BOOL)targetHasBottomView;
- (void)setTargetHasBottomView:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WeNoteFlutterExpandTransitionConfig : NSObject
{
    BOOL _useExpandTransition; // +0x8
    NSString * _beginSnapshotPath; // +0x10
    CGSize _beginSnapshotSize; // +0x18
    CGRect _cardFrame; // +0x28
}
- (void)takeSnapshotFromView:(id)arg1;
- (BOOL)useExpandTransition;
- (void)setUseExpandTransition:(BOOL)arg1;
- (CGRect)cardFrame;
- (void)setCardFrame:(CGRect)arg1;
- (id)beginSnapshotPath;
- (void)setBeginSnapshotPath:(id)arg1;
- (CGSize)beginSnapshotSize;
- (void)setBeginSnapshotSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

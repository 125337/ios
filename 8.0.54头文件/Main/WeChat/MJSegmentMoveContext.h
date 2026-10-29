@interface MJSegmentMoveContext : NSObject
{
    CALayer * _movingSegmentSnapshotLayer; // +0x8
    CGPoint _movingSegmentOriginalLocation; // +0x10
    CGPoint _locationInMovingSnapshotLayer; // +0x20
    CGPoint _movingSegmentSnapshotOffset; // +0x30
    CGRect _movingSegmentOriginalFrame; // +0x40
}
- (id)init;
- (id)movingSegmentSnapshotLayer;
- (void)setMovingSegmentSnapshotLayer:(id)arg1;
- (CGRect)movingSegmentOriginalFrame;
- (void)setMovingSegmentOriginalFrame:(CGRect)arg1;
- (CGPoint)movingSegmentOriginalLocation;
- (void)setMovingSegmentOriginalLocation:(CGPoint)arg1;
- (CGPoint)locationInMovingSnapshotLayer;
- (void)setLocationInMovingSnapshotLayer:(CGPoint)arg1;
- (CGPoint)movingSegmentSnapshotOffset;
- (void)setMovingSegmentSnapshotOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end


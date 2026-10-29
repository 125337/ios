@interface WAWebSnapshotParam : NSObject
{
    double _snapshotAfterScroll; // +0x8
    CGPoint _scrollTo; // +0x10
    CGRect _rect; // +0x20
}
- (id)init;
- (CGPoint)scrollTo;
- (void)setScrollTo:(CGPoint)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (double)snapshotAfterScroll;
- (void)setSnapshotAfterScroll:(double)arg1;
@end

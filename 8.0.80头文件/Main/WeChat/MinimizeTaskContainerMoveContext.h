@interface MinimizeTaskContainerMoveContext : NSObject
{
    unsigned long long _moveBeginTime; // +0x8
    CGPoint _fromPoint; // +0x10
}
- (unsigned long long)moveBeginTime;
- (void)setMoveBeginTime:(unsigned long long)arg1;
- (CGPoint)fromPoint;
- (void)setFromPoint:(CGPoint)arg1;
@end

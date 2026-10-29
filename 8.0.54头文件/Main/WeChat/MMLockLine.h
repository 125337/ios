@interface MMLockLine : NSObject
{
    BOOL _isFullPath; // +0x8
    CGPoint _fromPoint; // +0x10
    CGPoint _toPoint; // +0x20
}
- (id)initWithFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 AndIsFullPath:(BOOL)arg3;
- (CGPoint)fromPoint;
- (void)setFromPoint:(CGPoint)arg1;
- (CGPoint)toPoint;
- (void)setToPoint:(CGPoint)arg1;
- (BOOL)isFullPath;
- (void)setIsFullPath:(BOOL)arg1;
@end


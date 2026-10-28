@interface WAEJPath : NSObject <NSCopying>
{
    struct currentPos; // +0x8
    struct lastPushed; // +0x10
    struct minPos; // +0x18
    struct maxPos; // +0x20
    int fillRule; // +0x28
    unsigned int longestSubpath; // +0x2c
    float distanceTolerance; // +0x30
    CGAffineTransform transform; // +0x38
    struct currentPath; // +0x68
    vector<subpath_t, std::allocator<subpath_t>> paths; // +0x88
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)push:(struct)arg1;
- (void)reset;
- (void)close;
- (void)endSubPath;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6 scale:(float)arg7;
- (void)recursiveBezierX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 x4:(float)arg7 y4:(float)arg8 level:(int)arg9;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4 scale:(float)arg5;
- (void)recursiveQuadraticX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 level:(int)arg7;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(BOOL)arg6;
- (void)drawPolygonsToContext:(id)arg1 fillRule:(int)arg2 target:(int)arg3;
- (void)drawArcToContext:(id)arg1 atPoint:(struct)arg2 v1:(struct)arg3 v2:(struct)arg4 color:(union)arg5;
- (void)drawLinesToContext:(id)arg1;
- (CGAffineTransform)transform;
- (void)setTransform:(CGAffineTransform)arg1;
- (int)fillRule;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

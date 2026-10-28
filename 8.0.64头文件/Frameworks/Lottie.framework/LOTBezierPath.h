@interface LOTBezierPath : NSObject
{
    LOT_Subpath * headSubpath_; // +0x8
    LOT_Subpath * tailSubpath_; // +0x10
    CGPoint subpathStartPoint_; // +0x18
    double * _lineDashPattern; // +0x28
    long long _lineDashCount; // +0x30
    double _lineDashPhase; // +0x38
    CGPath * _path; // +0x40
    BOOL _cacheLengths; // +0x48
    BOOL _usesEvenOddFillRule; // +0x49
    int _lineCapStyle; // +0x4c
    int _lineJoinStyle; // +0x50
    double _length; // +0x58
    double _lineWidth; // +0x60
    double _miterLimit; // +0x68
    double _flatness; // +0x70
}
+ (id)pathWithCGPath:(CGPath *)arg1;
+ (id)newPath;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)removeAllSubpaths;
- (void)addSubpathWithType:(int)arg1 length:(double)arg2 endPoint:(CGPoint)arg3 controlPoint1:(CGPoint)arg4 controlPoint1:(CGPoint)arg5;
- (CGPoint)currentPoint;
- (CGPath *)CGPath;
- (LOT_Subpath *)headSubpath;
- (void)LOT_moveToPoint:(CGPoint)arg1;
- (void)LOT_addLineToPoint:(CGPoint)arg1;
- (void)LOT_addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3;
- (void)LOT_closePath;
- (void)_clearPathData;
- (void)LOT_removeAllPoints;
- (BOOL)containsPoint:(CGPoint)arg1;
- (BOOL)isEmpty;
- (CGRect)bounds;
- (void)LOT_applyTransform:(CGAffineTransform)arg1;
- (void)LOT_appendPath:(id)arg1;
- (void)trimPathFromT:(double)arg1 toT:(double)arg2 offset:(double)arg3;
- (void)setWithCGPath:(CGPath *)arg1;
- (void)lot_enumeratePath:(CGPath *)arg1 elementsUsingBlock:(id /* block */)arg2;
- (BOOL)cacheLengths;
- (void)setCacheLengths:(BOOL)arg1;
- (double)length;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (int)lineCapStyle;
- (void)setLineCapStyle:(int)arg1;
- (int)lineJoinStyle;
- (void)setLineJoinStyle:(int)arg1;
- (double)miterLimit;
- (void)setMiterLimit:(double)arg1;
- (double)flatness;
- (void)setFlatness:(double)arg1;
- (BOOL)usesEvenOddFillRule;
- (void)setUsesEvenOddFillRule:(BOOL)arg1;
@end

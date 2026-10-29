@interface UIBezierPath (BRThroughPointsBezier)
+ (id)generateBubblePathInRect:(CGRect)arg1 cornerRadius:(double)arg2 arrowDirection:(long long)arg3 arrowWidth:(double)arg4 arrowHeight:(double)arg5 arrowX:(double)arg6;
+ (void)addArrowToBezierPath:(id)arg1 arrowWidth:(double)arg2;
- (BOOL)isRoundPath;
- (void)setIsRoundPath:(BOOL)arg1;
- (double)clipPathStartAngle;
- (void)setClipPathStartAngle:(double)arg1;
- (double)clipPathEndAngle;
- (void)setClipPathEndAngle:(double)arg1;
- (void)setContractionFactor:(double)arg1;
- (double)contractionFactor;
@end


@interface QAnnotationViewLayer : CALayer
+ (BOOL)needsDisplayForKey:(id)arg1;
- (id)annotationView;
- (void)display;
- (CGPoint)coordinate;
- (void)setCoordinate:(CGPoint)arg1;
- (id)initWithLayer:(id)arg1;
@end


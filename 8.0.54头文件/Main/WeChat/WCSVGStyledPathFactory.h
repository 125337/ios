@interface WCSVGStyledPathFactory : NSObject
{
    id <WCSVGStyledPathFactoryDelegate> _delegate; // +0x8
    NSMutableArray * _gradients; // +0x10
    NSMutableArray * _affineTransformStack; // +0x18
    NSMutableArray * _groupAppearanceStack; // +0x20
    CGPoint _previousCurveOperationControlPoint; // +0x28
}
- (id)init;
- (id)styledPathFromElementName:(id)arg1 attributes:(id)arg2;
- (CGRect)getViewboxFromAttributes:(id)arg1;
- (id)lineWithAttributes:(id)arg1;
- (id)rectWithAttributes:(id)arg1;
- (id)ellipseWithAttributes:(id)arg1;
- (id)circleWithAttributes:(id)arg1;
- (id)polyWithAttributes:(id)arg1 closed:(BOOL)arg2;
- (id)pathWithAttributes:(id)arg1;
- (id)createStyledPath:(id)arg1 withAttributes:(id)arg2;
- (id)applyStrokeAttributes:(id)arg1 toPath:(id)arg2;
- (id)attributesByAddingGroupAttributesToAttributes:(id)arg1;
- (id)attributesByApplyingStyleAttributeToAttributes:(id)arg1;
- (id)commandListForCommandString:(id)arg1;
- (id)commandListForPolylineString:(id)arg1;
- (id)bezierPathFromCommandList:(id)arg1;
- (void)addMoveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addHorizontalLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addVerticalLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addSmoothCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addQuadCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addSmoothQuadCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addEllipticalArcToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)pushGroupTransformWithAttributes:(id)arg1;
- (void)popGroupTransform;
- (void)pushGroupAppearanceWithAttributes:(id)arg1;
- (void)popGroupAppearance;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)gradients;
- (void)setGradients:(id)arg1;
- (CGPoint)previousCurveOperationControlPoint;
- (void)setPreviousCurveOperationControlPoint:(CGPoint)arg1;
- (id)affineTransformStack;
- (void)setAffineTransformStack:(id)arg1;
- (id)groupAppearanceStack;
- (void)setGroupAppearanceStack:(id)arg1;
- (void).cxx_destruct;
@end


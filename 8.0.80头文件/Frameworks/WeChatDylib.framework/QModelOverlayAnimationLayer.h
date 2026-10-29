@interface QModelOverlayAnimationLayer : CALayer
{
    id <QModelOverlayAnimationLayerDelegate> _modelOverlayAnimDelegate; // +0x8
    double _modelRotation; // +0x10
    CGPoint _coordinate; // +0x18
}
+ (BOOL)isMatchAnimKeys:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
- (void)setCoordinate:(CGPoint)arg1;
- (void)setModelRotation:(double)arg1;
- (id)modelOverlayAnimDelegate;
- (void)setModelOverlayAnimDelegate:(id)arg1;
- (CGPoint)coordinate;
- (double)modelRotation;
- (void).cxx_destruct;
@end

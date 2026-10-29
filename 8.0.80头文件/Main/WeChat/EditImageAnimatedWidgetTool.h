@interface EditImageAnimatedWidgetTool : EditImageWidgetTool
{
    BOOL _isSticky; // +0x62
    id <EditImageAnimatedDelegate> _animatedDelegate; // +0x68
    CGSize _editBounds; // +0x70
}
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (void)judgeFromDeleteBar:(id)arg1;
- (id)animatedDelegate;
- (void)setAnimatedDelegate:(id)arg1;
- (CGSize)editBounds;
- (void)setEditBounds:(CGSize)arg1;
- (BOOL)isSticky;
- (void)setIsSticky:(BOOL)arg1;
- (void).cxx_destruct;
@end

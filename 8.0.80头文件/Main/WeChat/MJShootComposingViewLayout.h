@interface MJShootComposingViewLayout : NSObject
{
    BOOL _floatingBottomBar; // +0x8
    double _bottomBarHeight; // +0x10
    double _recordButtonDiameter; // +0x18
    double _recordButtonBottomPadding; // +0x20
    CGSize _renderViewSize; // +0x28
}
+ (id)layoutWithBounds:(CGSize)arg1 ratio:(CGSize)arg2 scale:(double)arg3;
+ (id)bottomAlignedLayoutWithBounds:(CGSize)arg1 ratio:(CGSize)arg2 scale:(double)arg3 topInset:(double)arg4;
- (CGSize)renderViewSize;
- (void)setRenderViewSize:(CGSize)arg1;
- (double)bottomBarHeight;
- (void)setBottomBarHeight:(double)arg1;
- (BOOL)isFloatingBottomBar;
- (void)setFloatingBottomBar:(BOOL)arg1;
- (double)recordButtonDiameter;
- (void)setRecordButtonDiameter:(double)arg1;
- (double)recordButtonBottomPadding;
- (void)setRecordButtonBottomPadding:(double)arg1;
@end

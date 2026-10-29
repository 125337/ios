@interface WxpayWebViewContainer : UIView <UIGestureRecognizerDelegate>
{
    BOOL _hiddenByEngine; // +0x8
    BOOL _interactive; // +0x9
    int _inner; // +0xc
    unsigned long long _node; // +0x10
    long long _paintIndex; // +0x18
    NSString * _gesture; // +0x20
    id <WxpayWebViewSurface> _surface; // +0x28
    UIBezierPath * _visiblePath; // +0x30
    NSArray * _occluders; // +0x38
    UIView * _scrim; // +0x40
    UIView * _canvas; // +0x48
    SceneKey _scene; // +0x50
    CGRect _ancestorClip; // +0x68
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (SceneKey)scene;
- (void)setScene:(SceneKey)arg1;
- (unsigned long long)node;
- (void)setNode:(unsigned long long)arg1;
- (int)inner;
- (void)setInner:(int)arg1;
- (long long)paintIndex;
- (void)setPaintIndex:(long long)arg1;
- (BOOL)hiddenByEngine;
- (void)setHiddenByEngine:(BOOL)arg1;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (id)surface;
- (void)setSurface:(id)arg1;
- (id)visiblePath;
- (void)setVisiblePath:(id)arg1;
- (CGRect)ancestorClip;
- (void)setAncestorClip:(CGRect)arg1;
- (id)occluders;
- (void)setOccluders:(id)arg1;
- (id)scrim;
- (void)setScrim:(id)arg1;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

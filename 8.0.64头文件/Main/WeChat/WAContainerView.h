@interface WAContainerView : NSObject
{
    unsigned int _containerId; // +0x8
    UIScrollView * _scrollView; // +0x10
    UIView * _nativeView; // +0x18
    UIView * _nativeViewContainer; // +0x20
}
- (id)initByContainerId:(unsigned int)arg1;
- (void)setContainerId:(unsigned int)arg1;
- (void)setScrollView:(id)arg1;
- (void)setContainerScrollEnabled:(BOOL)arg1;
- (void)setNativeView:(id)arg1;
- (void)adjustHookView;
- (void)updateContainer;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)containerLayerName;
- (unsigned int)containerId;
- (id)scrollView;
- (id)nativeView;
- (id)nativeViewContainer;
- (void).cxx_destruct;
@end

@interface MMCanvasRenderClientContextParams : NSObject
{
    NSString * _canvasId; // +0x8
    double _windowWidth; // +0x10
    id <MMWebJsCanvasViewPortDelegate> _viewDelegate; // +0x18
    id <MMCanvasRenderClientContextDelegate> _contextDelegate; // +0x20
    unsigned long long _viewDelegatePtr; // +0x28
}
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (double)windowWidth;
- (void)setWindowWidth:(double)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)contextDelegate;
- (void)setContextDelegate:(id)arg1;
- (unsigned long long)viewDelegatePtr;
- (void)setViewDelegatePtr:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


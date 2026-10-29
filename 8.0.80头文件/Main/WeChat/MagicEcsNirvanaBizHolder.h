@interface MagicEcsNirvanaBizHolder : NSObject
{
    BOOL _supportsNativeFirstFrameCallback; // +0x8
    BOOL _supportsCanvasStatusCallback; // +0x9
    NSString * _bizName; // +0x10
    MagicCardStarterHandle * _handle; // +0x18
    MagicEcsNirvanaBizDelegate * _delegate; // +0x20
    MagicEcsNirvanaCanvasViewContainer * _startupViewDelegate; // +0x28
    UIView * _jitNativeRenderContainer; // +0x30
    UIView * _cachedCanvasView; // +0x38
}
- (id)initWithBizName:(id)arg1 supportsNativeFirstFrameCallback:(BOOL)arg2 supportsCanvasStatusCallback:(BOOL)arg3 delegate:(id)arg4 startupViewDelegate:(id)arg5;
- (id)bizName;
- (BOOL)supportsNativeFirstFrameCallback;
- (BOOL)supportsCanvasStatusCallback;
- (id)handle;
- (void)setHandle:(id)arg1;
- (id)delegate;
- (id)startupViewDelegate;
- (void)setStartupViewDelegate:(id)arg1;
- (id)jitNativeRenderContainer;
- (id)cachedCanvasView;
- (void)setCachedCanvasView:(id)arg1;
- (void).cxx_destruct;
@end

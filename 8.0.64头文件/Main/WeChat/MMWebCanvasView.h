@interface MMWebCanvasView : WAOpenGLView <EJGestureDelegate>
{
    BOOL _hasStopped; // +0x10
    JSContext * _jsContext; // +0x18
    NSString * _appId; // +0x20
    NSString * _canvasId; // +0x28
    id <MMWebCanvasViewEventDelegate> _eventDelegate; // +0x30
    MMWebCanvasViewProxy * _proxyDelegate; // +0x38
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 useContentModeTopLeft:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 experimental:(BOOL)arg5 customStyleImpl:(BOOL)arg6;
- (id)initWithFrame:(CGRect)arg1 jsContext:(id)arg2 appId:(id)arg3 canvasId:(id)arg4 experimental:(BOOL)arg5 customStyleImpl:(BOOL)arg6 isPreserveDrawingBufferDoClear:(BOOL)arg7 useContentModeTopLeft:(BOOL)arg8;
- (BOOL)enableRetryLoadImageWhenEnterFg;
- (BOOL)isEnbalePreserveDrawingBufferDoClear;
- (BOOL)isRollbackEjectaPresent;
- (void)internalInit;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)injectNativeGlobal;
- (void)setDataDelegate:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (id)dataDelegate;
- (void)stop;
- (id)genJsTouchEventFromEJTouchData:(id)arg1;
- (void)onTouchBegin:(id)arg1;
- (void)onTouchEnd:(id)arg1;
- (void)onTouchCancel:(id)arg1;
- (void)onTouchMoved:(id)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)eventDelegate;
- (id)proxyDelegate;
- (void)setProxyDelegate:(id)arg1;
- (BOOL)hasStopped;
- (void)setHasStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end

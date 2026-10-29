@interface WAEJBindingCanvas : WAEJBindingBase <EJDrawable>
{
    OpaqueJSValue * jsCanvasContext; // +0x20
    int contextMode; // +0x28
    short width; // +0x2c
    short height; // +0x2e
    WAEJBindingCanvasStyle * styleObject; // +0x30
    int imageRendering; // +0x38
    CGRect style; // +0x40
    BOOL isOffScreen; // +0x60
    BOOL isScreenCanvas; // +0x61
    BOOL isCustomScreen; // +0x62
    BOOL lockStyle; // +0x63
    unsigned int canvasId; // +0x64
    NSString * elementId; // +0x68
    unsigned int bindingScreenId; // +0x70
    float styleWidth; // +0x74
    float styleHeight; // +0x78
    float styleLeft; // +0x7c
    float styleTop; // +0x80
    int _viewId; // +0x84
    WAEJCanvasContext * renderingContext; // +0x88
    WAEJBindingTouchInput * _touchInput; // +0x90
    UIView * _canvasView; // +0x98
    NSMutableArray * _touchableRects; // +0xa0
}
+ (void *)_ptr_to_func___uid;
+ (void *)_ptr_to_func___lockStyle;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get___id;
+ (void *)_ptr_to_func___canvasId;
+ (void *)_ptr_to_get_id;
+ (void *)_ptr_to_set_id;
+ (void *)_ptr_to_set_bindingScreen;
+ (void *)_ptr_to_get_bindingScreen;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_style;
+ (void *)_ptr_to_get_offsetLeft;
+ (void *)_ptr_to_get_offsetTop;
+ (void *)_ptr_to_get_offsetWidth;
+ (void *)_ptr_to_get_offsetHeight;
+ (void *)_ptr_to_func_setTouchableRects;
+ (void *)_ptr_to_func_getContext;
+ (void *)_ptr_to_func_toDataURL;
+ (void *)_ptr_to_func_remove;
+ (id)_const_nodeName;
+ (id)_const_tagName;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (id)texture;
- (float)styleWidth;
- (void)setStyleWidth:(float)arg1;
- (float)styleHeight;
- (void)setStyleHeight:(float)arg1;
- (float)styleLeft;
- (void)setStyleLeft:(float)arg1;
- (float)styleTop;
- (void)setStyleTop:(float)arg1;
- (void)setStyle:(CGRect)arg1;
- (int)imageRendering;
- (void)setImageRendering:(int)arg1;
- (OpaqueJSValue *)_func___uid:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func___lockStyle:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_width:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get___id:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_func___canvasId:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_id:(OpaqueJSContext *)arg1;
- (void)_set_id:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (void)_set_bindingScreen:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_bindingScreen:(OpaqueJSContext *)arg1;
- (void)_set_width:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_height:(OpaqueJSContext *)arg1;
- (void)_set_height:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_style:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_offsetLeft:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_offsetTop:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_offsetWidth:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_offsetHeight:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_func_setTouchableRects:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (id)getWebGLContext:(OpaqueJSContext *)arg1 alpha:(BOOL)arg2 antialias:(BOOL)arg3 preserve_drawing_buffer:(BOOL)arg4 useWebGL2:(BOOL)arg5;
- (OpaqueJSValue *)_func_getContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)getContext:(OpaqueJSValue *)arg1 webgl:(BOOL)arg2;
- (OpaqueJSValue *)getGfxContext:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)toDataURLWithCtx:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_toDataURL:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_remove:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (BOOL)isWebGLScreen;
- (BOOL)isCanvasScreen;
- (id)getCanvasImage;
- (id)getCanvasImageWithScale:(float)arg1;
- (OpaqueJSValue *)getJSObject;
- (id)getElementId;
- (unsigned int)getCanvasId;
- (id)renderingContext;
- (void)setRenderingContext:(id)arg1;
- (BOOL)isOffScreen;
- (BOOL)isScreenCanvas;
- (BOOL)isCustomScreen;
- (id)touchInput;
- (void)setTouchInput:(id)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (int)viewId;
- (void)setViewId:(int)arg1;
- (id)touchableRects;
- (void)setTouchableRects:(id)arg1;
- (void).cxx_destruct;
@end


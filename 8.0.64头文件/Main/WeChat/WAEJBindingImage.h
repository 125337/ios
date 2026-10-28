@interface WAEJBindingImage : WAEJBindingEventedBase <EJDrawable, EJEnterForegroundDelegate>
{
    WAEJTexture * texture; // +0x30
    NSString * path; // +0x38
    BOOL loading; // +0x40
    NSOperation * loadCallback; // +0x48
    BOOL originPixels; // +0x50
    NSMutableArray * _paths; // +0x58
    BOOL _newInstance; // +0x60
    NSThread * _thread; // +0x68
    double _resize_width; // +0x70
    double _resize_height; // +0x78
    double _rescale; // +0x80
    unsigned int bindingScreenId; // +0x88
    BOOL _needCheckQueue; // +0x8c
}
+ (void *)_ptr_to_func___uid;
+ (void *)_ptr_to_get_src;
+ (void *)_ptr_to_func_getSrc;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_set_scale;
+ (void *)_ptr_to_get_scale;
+ (void *)_ptr_to_set_src;
+ (void *)_ptr_to_func_setSrc;
+ (void *)_ptr_to_func___id;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_naturalWidth;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_naturalHeight;
+ (void *)_ptr_to_get_complete;
+ (void *)_ptr_to_set_premultiplyAlpha;
+ (void *)_ptr_to_get_premultiplyAlpha;
+ (void *)_ptr_to_set_bindingScreen;
+ (void *)_ptr_to_get_bindingScreen;
+ (id)_const_nodeName;
+ (id)_const_tagName;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)beginLoad;
- (void)prepareGarbageCollection;
- (void)dealloc;
- (void)onEnterForeground;
- (void)internalEnterForeground;
- (void)endLoad;
- (void)internalEndLoad;
- (void)triggerEvent:(id)arg1;
- (void)setTexture:(id)arg1 path:(id)arg2;
- (OpaqueJSValue *)_func___uid:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_src:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_func_getSrc:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_get_instance:(OpaqueJSContext *)arg1;
- (id)texture;
- (void)checkQueue;
- (void)setImageSrc:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2;
- (void)_set_scale:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_scale:(OpaqueJSContext *)arg1;
- (void)_set_src:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_func_setSrc:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func___id:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)getWidth:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_width:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_naturalWidth:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)getHeight:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_height:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_naturalHeight:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_complete:(OpaqueJSContext *)arg1;
- (void)_set_premultiplyAlpha:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_premultiplyAlpha:(OpaqueJSContext *)arg1;
- (void)_set_bindingScreen:(OpaqueJSContext *)arg1 value:(OpaqueJSValue *)arg2 exception:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_bindingScreen:(OpaqueJSContext *)arg1;
- (BOOL)needCheckQueue;
- (void)setNeedCheckQueue:(BOOL)arg1;
@end

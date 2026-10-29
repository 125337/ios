@interface CanvasAdaptor : NSObject
{
    shared_ptr<blink::BindingApp> _app; // +0x8
}
- (id)initWithThread:(id)arg1 context:(OpaqueJSContext *)arg2 parent:(OpaqueJSValue *)arg3 tag:(id)arg4;
- (shared_ptr<blink::BindingApp>)getApp;
- (shared_ptr<blink::IOSCanvasViewDelegateGL>)CreateCanvasViewDelegate;
- (void)AddCanvas:(shared_ptr<blink::HTMLCanvasViewNG>)arg1;
- (shared_ptr<blink::HTMLCanvasViewNG>)GetCanvas:(int)arg1;
- (void)RemoveCanvas:(int)arg1;
- (void)SetResourceLoaderDelegate:(id)arg1;
- (shared_ptr<blink::ResourceLoader>)GetResourceLoader;
- (void)ReleaseContext;
- (HolderBase *)GetHolder;
- (id)AppTag;
- (void)SetAppTag:(id)arg1;
- (void)CheckAndPost:(function<void ()>)arg1;
- (shared_ptr<blink::ImageDecodeCache>)GetDecodeCache;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


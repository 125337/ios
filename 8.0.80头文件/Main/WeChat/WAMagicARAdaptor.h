@interface WAMagicARAdaptor : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    void * _runtime; // +0x10
    id <WAMagicARAdaptorDelegate> _delegate; // +0x18
}
- (void)dealloc;
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 delegate:(id)arg3;
- (__CVBuffer *)getCurCVPixelBuffer;
- (void)releaseContext;
- (void).cxx_destruct;
@end

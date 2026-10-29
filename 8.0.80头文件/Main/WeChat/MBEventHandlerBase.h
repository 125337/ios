@interface MBEventHandlerBase : NSObject
{
    BOOL _isSync; // +0x8
    unsigned int _invokeContextId; // +0xc
    MBJsApiMetaInfo * _meta; // +0x10
    id <IMBBizContextDelegate> _context; // +0x18
    MBRuntime * _runtime; // +0x20
    MagicBrushService * _service; // +0x28
}
+ (id)mbStorageSerialQueue;
- (id)getFileSystem;
- (id)createObject;
- (id)createObject:(id)arg1;
- (void)dispatch:(id)arg1 param:(id)arg2;
- (void)dispatch:(id)arg1 paramDict:(id)arg2;
- (id)makeReturnObject:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (id)makeReturnObjectOkWithDictionary:(id)arg1;
- (id)makeReturnObjectOk:(id)arg1;
- (id)makeReturnObjectFail:(long long)arg1 errMsg:(id)arg2;
- (id)makeReturnWithMBErrorInfo:(id)arg1;
- (id)makeReturnWithMBErrorInfo:(id)arg1 extErrMsg:(id)arg2;
- (id)apiName;
- (void)runCodeInJsThread:(id /* block */)arg1;
- (void)runCodeInJsThreadSync:(id /* block */)arg1;
- (BOOL)invokeInMainThread;
- (void)setApiSync:(BOOL)arg1;
- (void)setBizContext:(id)arg1;
- (void)setInvokeFromContextId:(unsigned int)arg1;
- (id)meta;
- (void)setMeta:(id)arg1;
- (BOOL)isSync;
- (id)context;
- (unsigned int)invokeContextId;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void).cxx_destruct;
@end

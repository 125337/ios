@interface WAJSNativeBufferBase : NSObject
{
    unsigned int _bufferIDSequence; // +0x8
    NSMutableDictionary * _dicID2Buffer; // +0x10
    NSMutableDictionary * _dicBufferUrl; // +0x18
    BOOL _useCompatibleModeConvertData; // +0x20
    BOOL _responseUseBase64; // +0x21
    BOOL _responseUseTextEncoder; // +0x22
    unsigned int _nativeBufferSizeLimit; // +0x24
    unsigned int _nativeBufferQueueLimit; // +0x28
    JSContext * _context; // +0x30
    NSMutableDictionary * _mapArrayBuffer; // +0x38
    NSMutableArray * _pendingJITResult; // +0x40
    NSObject * _pendingJITResultLock; // +0x48
}
- (id)init;
- (id)getArrayBuffer:(unsigned int)arg1;
- (void)injectWeiXinArrayBuffer:(id)arg1;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)insertNativeArrayBuffer:(int)arg1 bufferId:(int *)arg2;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (void)setupWeixinSharedBuffer:(id)arg1 workerId:(unsigned int)arg2 buffers:(id)arg3;
- (id)getSharedBuffers;
- (void)injectWeiXinNativeBuffer:(id)arg1 isShared:(BOOL)arg2 workerId:(unsigned int)arg3;
- (void)setupSharedBufferExtention:(id)arg1 workerId:(unsigned int)arg2;
- (void)releaseLock:(id)arg1 itemId:(unsigned int)arg2;
- (BOOL)checkCanRead:(id)arg1 workerId:(unsigned int)arg2;
- (BOOL)checkCanWrite:(id)arg1 workerId:(unsigned int)arg2;
- (void)checkNextLock:(id)arg1;
- (void)runNextItem:(id)arg1;
- (id)addNativeBuffer:(id)arg1;
- (id)addSharedBuffer:(void *)arg1 length:(unsigned long long)arg2;
- (void)executeOnWorker:(unsigned int)arg1 invoker:(id)arg2;
- (id)popNativeBuffer:(id)arg1;
- (id)getBufferItem:(id)arg1;
- (unsigned int)nativeBufferTotalSize;
- (id)nativeBufferParamSpecificKey;
- (id)parseInvokeHandlerNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (id)parseNative2SdkNativeBufferParam:(id)arg1 getError:(id *)arg2 useBase64:(BOOL)arg3;
- (void)appendJITResult:(id)arg1 callbackID:(unsigned int)arg2;
- (id)popPendingJITResults;
- (unsigned int)pendingJITResultCount;
- (id)packJITResult:(id)arg1;
- (id)genBufferID;
- (id)createBufferObject:(OpaqueJSValue *)arg1 context:(OpaqueJSContext *)arg2;
- (BOOL)removeBufferObject:(id)arg1 context:(OpaqueJSContext *)arg2;
- (void *)getBufferFromObject:(id)arg1 length:(long long *)arg2;
- (id)createBufferObject:(id)arg1;
- (void)removeBufferObject:(id)arg1;
- (id)getDataFromObject:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)useCompatibleModeConvertData;
- (void)setUseCompatibleModeConvertData:(BOOL)arg1;
- (unsigned int)nativeBufferSizeLimit;
- (void)setNativeBufferSizeLimit:(unsigned int)arg1;
- (unsigned int)nativeBufferQueueLimit;
- (void)setNativeBufferQueueLimit:(unsigned int)arg1;
- (BOOL)responseUseBase64;
- (void)setResponseUseBase64:(BOOL)arg1;
- (BOOL)responseUseTextEncoder;
- (void)setResponseUseTextEncoder:(BOOL)arg1;
- (id)mapArrayBuffer;
- (void)setMapArrayBuffer:(id)arg1;
- (id)pendingJITResult;
- (void)setPendingJITResult:(id)arg1;
- (id)pendingJITResultLock;
- (void)setPendingJITResultLock:(id)arg1;
- (void).cxx_destruct;
@end


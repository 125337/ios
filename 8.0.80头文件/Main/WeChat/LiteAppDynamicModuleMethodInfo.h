@interface LiteAppDynamicModuleMethodInfo : NSObject
{
    BOOL _isReturnBuffer; // +0x8
    NSString * _method; // +0x10
    NSMutableArray * _bufferIndexes; // +0x18
    NSMutableArray * _callbackIndexes; // +0x20
    Class _returnType; // +0x28
}
- (id)method;
- (void)setMethod:(id)arg1;
- (id)bufferIndexes;
- (void)setBufferIndexes:(id)arg1;
- (id)callbackIndexes;
- (void)setCallbackIndexes:(id)arg1;
- (BOOL)isReturnBuffer;
- (void)setIsReturnBuffer:(BOOL)arg1;
- (Class)returnType;
- (void)setReturnType:(Class)arg1;
- (void).cxx_destruct;
@end

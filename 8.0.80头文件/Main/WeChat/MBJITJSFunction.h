@interface MBJITJSFunction : MBJSFunction
{
    unsigned long long _callbackId; // +0x8
    MBRuntime * _runtime; // +0x10
}
- (void)invoke:(id)arg1;
- (unsigned long long)callbackId;
- (void)setCallbackId:(unsigned long long)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (void).cxx_destruct;
@end

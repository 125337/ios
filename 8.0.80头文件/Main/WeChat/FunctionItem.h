@interface FunctionItem : NSObject <FunctionCallNativeImplBase>
{
    id /* block */ _action; // +0x8
    id /* block */ _asyncAction; // +0x10
    FunctionCallNativeImplCallback * _cppCallback; // +0x18
}
- (id)initWithAction:(id /* block */)arg1;
- (id)initWithAsyncAction:(id /* block */)arg1;
- (void)invokeAsync:(unsigned long long)arg1 parameter:(id)arg2;
- (void)setCallback:(id)arg1;
- (void)notifyTaskFinish:(unsigned long long)arg1 with:(id)arg2;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (id /* block */)asyncAction;
- (void)setAsyncAction:(id /* block */)arg1;
- (id)cppCallback;
- (void)setCppCallback:(id)arg1;
- (void).cxx_destruct;
@end

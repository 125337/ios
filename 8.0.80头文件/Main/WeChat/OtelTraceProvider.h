@interface OtelTraceProvider : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<otel::OtelTraceProviderCppCover> cpp_cover; // +0x80
    weak_ptr<otel::OtelTraceProviderDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<otel::OtelTraceProviderDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (unsigned long long)getTracer:(id)arg1;
- (id)startSpan:(unsigned long long)arg1 span:(id)arg2;
- (void)endSpan:(unsigned long long)arg1;
- (void)addSpanEvent:(unsigned long long)arg1 spanEvent:(id)arg2;
- (void)setSpanAttribute:(unsigned long long)arg1 attribute:(id)arg2;
- (void)setSpanAttributes:(unsigned long long)arg1 attributes:(id)arg2;
- (void)setSpanStatus:(unsigned long long)arg1 statusCode:(int)arg2 statusDescription:(id)arg3;
- (id)getCurrentTraceContext;
- (void)setCurrentTraceContext:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

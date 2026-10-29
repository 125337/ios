@interface OtelActiveSpan : NSObject
{
    BOOL _ended; // +0x8
    unsigned long long _spanHandle; // +0x10
    OtelSpanContext * _spanContext; // +0x18
}
+ (id)startWithTracerName:(id)arg1 spanName:(id)arg2;
+ (id)startWithTracerName:(id)arg1 spanName:(id)arg2 parent:(id)arg3 autoParent:(BOOL)arg4;
- (id)initWithHandle:(unsigned long long)arg1 spanContext:(id)arg2;
- (BOOL)isValid;
- (id)traceparent;
- (id)tracestate;
- (id)addAttribute:(id)arg1;
- (id)addAttributes:(id)arg1;
- (id)addAttributeStr:(id)arg1 value:(id)arg2;
- (id)addAttributeDouble:(id)arg1 value:(double)arg2;
- (id)addAttributeBool:(id)arg1 value:(BOOL)arg2;
- (id)addEvent:(id)arg1;
- (id)addEvent:(id)arg1 timestampUs:(long long)arg2;
- (id)addEvent:(id)arg1 timestampUs:(long long)arg2 attributes:(id)arg3;
- (id)setStatus:(int)arg1 description:(id)arg2;
- (void)end;
- (unsigned long long)spanHandle;
- (id)spanContext;
- (void).cxx_destruct;
@end

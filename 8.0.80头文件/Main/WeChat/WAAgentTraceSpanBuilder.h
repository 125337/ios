@interface WAAgentTraceSpanBuilder : NSObject
+ (unsigned long long)nowNanos;
+ (id)generateSpanId;
+ (id)buildStructuredInputDict:(id)arg1;
+ (id)jsonStringFromDict:(id)arg1;
+ (id)buildOtelJsonWithInfo:(id)arg1;
@end

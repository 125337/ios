@interface WxpayPayEventBus : NSObject
+ (void)emit:(id)arg1 callId:(unsigned long long)arg2 scene:(id)arg3 data:(id)arg4;
+ (void)deliver:(id)arg1 callId:(unsigned long long)arg2 scene:(id)arg3 data:(id)arg4 timestampMs:(long long)arg5 startedAtNs:(unsigned long long)arg6;
+ (unsigned long long)monotonicNanos;
+ (void)reportDirection:(id)arg1 subject:(id)arg2 callId:(unsigned long long)arg3 startedAtNs:(unsigned long long)arg4 delivery:(id)arg5;
+ (id)addListener:(id /* block */)arg1;
+ (void)removeAllListeners;
@end

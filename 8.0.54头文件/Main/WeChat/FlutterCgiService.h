@interface FlutterCgiService : NSObject <FlutterCgiServiceBase>
{
    FlutterCgiServiceCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)sendAsync:(unsigned long long)arg1 funcId:(long long)arg2 uri:(id)arg3 data:(id)arg4 longPolling:(BOOL)arg5 longPollingTimeout:(long long)arg6;
- (id)callback;
- (void).cxx_destruct;
@end


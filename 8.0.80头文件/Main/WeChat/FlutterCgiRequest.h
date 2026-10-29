@interface FlutterCgiRequest : NSObject
{
    BOOL _longPolling; // +0x8
    long long _funcId; // +0x10
    NSString * _uri; // +0x18
    FlutterStandardTypedData * _data; // +0x20
    long long _longPollingTimeout; // +0x28
}
+ (id)makeWithFuncId:(long long)arg1 uri:(id)arg2 data:(id)arg3 longPolling:(BOOL)arg4 longPollingTimeout:(long long)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)funcId;
- (void)setFuncId:(long long)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)longPolling;
- (void)setLongPolling:(BOOL)arg1;
- (long long)longPollingTimeout;
- (void)setLongPollingTimeout:(long long)arg1;
- (void).cxx_destruct;
@end

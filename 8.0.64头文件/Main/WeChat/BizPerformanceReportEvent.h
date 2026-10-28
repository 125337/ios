@interface BizPerformanceReportEvent : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onCgiGetFinderLiveInfoStartTaskId:(long long)arg1 completion:(id /* block */)arg2;
- (void)onCgiGetFinderLiveInfoEndTaskId:(long long)arg1 isSuccess:(BOOL)arg2 errorCode:(long long)arg3 completion:(id /* block */)arg4;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

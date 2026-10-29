@interface Event4XReporterApple : NSObject
{
    unique_ptr<liteav::Event4XReporter, std::default_delete<liteav::Event4XReporter>> reporter_; // +0x8
}
- (id)initWithParams:(long long)arg1 module_id:(long long)arg2 stream_url:(id)arg3 report_device_info:(BOOL)arg4 data_type:(long long)arg5;
- (void)setCommonIntValue:(id)arg1 value:(long long)arg2;
- (void)setCommonStringValue:(id)arg1 value:(id)arg2;
- (void)setEventIntValue:(id)arg1 value:(long long)arg2;
- (void)setEventStringValue:(id)arg1 value:(id)arg2;
- (void)sendReport;
- (long long)getColdDownTime;
- (void)reportDau:(long long)arg1 code:(long long)arg2 info:(id)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


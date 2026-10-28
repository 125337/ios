@interface MMLiteAppReporter : NSObject
{
    Handle<std::shared_ptr<luggage::LiteAppReporter>> _cppRefHandle; // +0x8
}
+ (id)makeLiteAppReporter:(id)arg1;
+ (id)makeLiteAppReporterWithoutAppId;
+ (id)create:(id)arg1 dependency:(id)arg2;
- (id)initWithCpp:(const void *)arg1;
- (void)report:(id)arg1;
- (void)logStart:(long long)arg1;
- (void)logStart:(long long)arg1 logIntValue:(long long)arg2;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logStart:(long long)arg1 extInfo:(id)arg2;
- (void)logStart:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logStartWithUri:(long long)arg1 uri:(id)arg2;
- (void)logStartWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logRunning:(long long)arg1;
- (void)logRunning:(long long)arg1 logIntValue:(long long)arg2;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logRunning:(long long)arg1 extInfo:(id)arg2;
- (void)logRunning:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logRunningWithUri:(long long)arg1 uri:(id)arg2;
- (void)logRunningWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logDownload:(long long)arg1;
- (void)logDownload:(long long)arg1 logIntValue:(long long)arg2;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logDownload:(long long)arg1 extInfo:(id)arg2;
- (void)logDownload:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logDownloadWithUri:(long long)arg1 uri:(id)arg2;
- (void)logDownloadWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logOther:(long long)arg1;
- (void)logOther:(long long)arg1 logIntValue:(long long)arg2;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logOther:(long long)arg1 extInfo:(id)arg2;
- (void)logOther:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logOtherWithUri:(long long)arg1 uri:(id)arg2;
- (void)logOtherWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (id)getSessionId;
- (BOOL)isSampling;
- (id)getAppId;
- (void)setAppId:(id)arg1;
- (id)getVersion;
- (void)setVersion:(id)arg1;
- (long long)getScene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

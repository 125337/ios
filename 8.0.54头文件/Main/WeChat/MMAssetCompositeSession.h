@interface MMAssetCompositeSession : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _outputFilePath; // +0x10
    ABAReportPrams * _reportParams; // +0x18
}
- (id)initWithSessionId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)outputFilePath;
- (void)setOutputFilePath:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end


@interface TAVExportReportData : NSObject
{
    BOOL _exportSuccess; // +0x8
    double _exportCostTime; // +0x10
    double _avgFrameRenderTime; // +0x18
    double _fileDuration; // +0x20
    long long _fps; // +0x28
    NSString * _errorMessage; // +0x30
}
- (double)exportCostTime;
- (void)setExportCostTime:(double)arg1;
- (BOOL)exportSuccess;
- (void)setExportSuccess:(BOOL)arg1;
- (double)avgFrameRenderTime;
- (void)setAvgFrameRenderTime:(double)arg1;
- (double)fileDuration;
- (void)setFileDuration:(double)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end


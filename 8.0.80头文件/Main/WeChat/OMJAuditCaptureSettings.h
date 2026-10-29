@interface OMJAuditCaptureSettings : NSObject
{
    unsigned long long _captureDimensionLevel; // +0x8
    double _captureFrameInterval; // +0x10
    long long _outputType; // +0x18
    NSString * _outputDirPath; // +0x20
    NSString * _outputFilenameBase; // +0x28
}
+ (id)wcmj_defaultSettings;
+ (id)wcmj_defaultSettingsWithOutputDirPath:(id)arg1 captureFrameInterval:(double)arg2;
- (id)initWithCaptureDimensionLevel:(unsigned long long)arg1 captureFrameInterval:(double)arg2 outputType:(long long)arg3 outputDirPath:(id)arg4 outputFilenameBase:(id)arg5;
- (unsigned long long)captureDimensionLevel;
- (double)captureFrameInterval;
- (long long)outputType;
- (id)outputDirPath;
- (id)outputFilenameBase;
- (void).cxx_destruct;
@end

@interface MJCameraTemplateReportObject : NSObject
{
    NSString * _filePath; // +0x8
    unsigned long long _fileCount; // +0x10
    double _captureFrameInterval; // +0x18
}
+ (id)cameraTemplateReportObjKey;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)fileCount;
- (void)setFileCount:(unsigned long long)arg1;
- (double)captureFrameInterval;
- (void)setCaptureFrameInterval:(double)arg1;
- (void).cxx_destruct;
@end

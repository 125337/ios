@interface TRTCAudioRecordingParams : NSObject
{
    NSString * _filePath; // +0x8
    unsigned long long _recordingContent; // +0x10
}
- (id)init;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)recordingContent;
- (void)setRecordingContent:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


@interface TRTCAudioRecordingParams : NSObject
{
    int _maxDurationPerFile; // +0x8
    NSString * _filePath; // +0x10
    unsigned long long _recordingContent; // +0x18
}
- (id)init;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)recordingContent;
- (void)setRecordingContent:(unsigned long long)arg1;
- (int)maxDurationPerFile;
- (void)setMaxDurationPerFile:(int)arg1;
- (void).cxx_destruct;
@end

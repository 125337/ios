@interface TRTCLocalRecordingParams : NSObject
{
    int _interval; // +0x8
    int _maxDurationPerFile; // +0xc
    NSString * _filePath; // +0x10
    unsigned long long _recordType; // +0x18
}
- (id)init;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)recordType;
- (void)setRecordType:(unsigned long long)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (int)maxDurationPerFile;
- (void)setMaxDurationPerFile:(int)arg1;
- (void).cxx_destruct;
@end

@interface V2TXLiveLocalRecordingParams : NSObject
{
    int _interval; // +0x8
    NSString * _filePath; // +0x10
    unsigned long long _recordMode; // +0x18
}
- (id)init;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (unsigned long long)recordMode;
- (void)setRecordMode:(unsigned long long)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (void).cxx_destruct;
@end

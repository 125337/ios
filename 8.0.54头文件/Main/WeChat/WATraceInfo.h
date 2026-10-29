@interface WATraceInfo : NSObject
{
    NSFileHandle * _fileHandle; // +0x8
    unsigned long long _beginTime; // +0x10
}
- (id)fileHandle;
- (void)setFileHandle:(id)arg1;
- (unsigned long long)beginTime;
- (void)setBeginTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


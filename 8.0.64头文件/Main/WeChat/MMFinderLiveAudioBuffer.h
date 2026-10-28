@interface MMFinderLiveAudioBuffer : NSObject
{
    unsigned long long _clearLength; // +0x8
    unsigned long long _read; // +0x10
    NSMutableData * _data; // +0x18
}
- (id)output:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)append:(id)arg1;
- (unsigned long long)clearLength;
- (void)setClearLength:(unsigned long long)arg1;
- (unsigned long long)read;
- (void)setRead:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

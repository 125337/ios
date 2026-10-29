@interface MJSpeechAudioSlice : MJSpeechAudioData
{
    BOOL _isEnd; // +0x18
    unsigned long long _index; // +0x20
    unsigned long long _offset; // +0x28
    unsigned long long _totalDataLength; // +0x30
}
- (id)initWithData:(id)arg1 encodeType:(long long)arg2 index:(unsigned long long)arg3 isEnd:(BOOL)arg4 offset:(unsigned long long)arg5 totalDataLength:(unsigned long long)arg6;
- (id)description;
- (unsigned long long)index;
- (BOOL)isEnd;
- (unsigned long long)offset;
- (unsigned long long)totalDataLength;
@end


@interface MJSpeechAudioSlice : MJSpeechAudioData
{
    BOOL _isEnd; // +0x28
    unsigned long long _index; // +0x30
    unsigned long long _offset; // +0x38
    unsigned long long _totalDataLength; // +0x40
}
- (id)initWithData:(id)arg1 format:(unsigned long long)arg2 sampleRate:(long long)arg3 channelCount:(long long)arg4 index:(unsigned long long)arg5 isEnd:(BOOL)arg6 offset:(unsigned long long)arg7 totalDataLength:(unsigned long long)arg8;
- (id)description;
- (unsigned long long)index;
- (BOOL)isEnd;
- (unsigned long long)offset;
- (unsigned long long)totalDataLength;
@end

@interface TRTCAudioFrame : NSObject
{
    int _channels; // +0x8
    NSData * _data; // +0x10
    long long _sampleRate; // +0x18
    unsigned long long _timestamp; // +0x20
    NSData * _extraData; // +0x28
}
- (id)init;
- (id)data;
- (void)setData:(id)arg1;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end

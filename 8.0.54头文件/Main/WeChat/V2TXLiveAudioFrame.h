@interface V2TXLiveAudioFrame : NSObject
{
    int _sampleRate; // +0x8
    int _channel; // +0xc
    NSData * _data; // +0x10
}
- (id)description;
- (id)data;
- (void)setData:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channel;
- (void)setChannel:(int)arg1;
- (void).cxx_destruct;
@end


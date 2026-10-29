@interface TXCDecoderWrapper : NSObject
{
    TXCHardwareVideoDecoder * _decoder; // +0x8
    TXCVideoFrame * _videoFrame; // +0x10
    id /* block */ _complete; // +0x18
    NSDate * _startDecodeTime; // +0x20
}
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (id)videoFrame;
- (void)setVideoFrame:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)startDecodeTime;
- (void)setStartDecodeTime:(id)arg1;
- (void).cxx_destruct;
@end


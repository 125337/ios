@interface TXCHardwareVideoEncoderParams : NSObject
{
    TXCHardwareVideoEncoder * _encoder; // +0x8
    id /* block */ _complete; // +0x10
    NSDate * _encodeStartTime; // +0x18
}
- (id)encoder;
- (void)setEncoder:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)encodeStartTime;
- (void)setEncodeStartTime:(id)arg1;
- (void).cxx_destruct;
@end


@interface VoIPCallReencodedSample : NSObject
{
    opaqueCMSampleBuffer * _sampleBuffer; // +0x8
}
- (void)dealloc;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
@end

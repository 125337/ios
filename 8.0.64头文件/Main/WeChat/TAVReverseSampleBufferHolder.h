@interface TAVReverseSampleBufferHolder : NSObject
{
    opaqueCMSampleBuffer * _sampleBuffer; // +0x8
}
- (void)dealloc;
- (id)initWithSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (double)presentationTime;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
@end

@interface MMLiveSampleBufferWrap : NSObject <NSCopying>
{
    opaqueCMSampleBuffer * _sampleBuffer; // +0x8
}
+ (id)bufferWrapFromSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)dealloc;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
@end


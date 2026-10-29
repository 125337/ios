@interface MMFinderYUVConverter : NSObject
+ (id)pixelBufferToI420:(__CVBuffer *)arg1 orientation:(unsigned char)arg2;
+ (__CVBuffer *)i420FrameToPixelBuffer:(id)arg1;
+ (int)rotateMode:(unsigned char)arg1;
+ (opaqueCMSampleBuffer *)pixelBufferToSampleBuffer:(__CVBuffer *)arg1;
@end


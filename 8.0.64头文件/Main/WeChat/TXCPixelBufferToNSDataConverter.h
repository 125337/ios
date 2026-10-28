@interface TXCPixelBufferToNSDataConverter : NSObject
+ (id)dataFromPixelBuffer:(__CVBuffer *)arg1;
+ (BOOL)copyPixelBuffer:(__CVBuffer *)arg1 toData:(id)arg2;
+ (BOOL)copyData:(id)arg1 toPixelBuffer:(__CVBuffer *)arg2;
+ (void)copyPixelBuffer2dataPtr:(char * *)arg1 pixelBuffer:(__CVBuffer *)arg2 planeIndex:(int)arg3;
+ (unsigned long long)copyData:(const char *)arg1 toPixelBuffer:(__CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
@end

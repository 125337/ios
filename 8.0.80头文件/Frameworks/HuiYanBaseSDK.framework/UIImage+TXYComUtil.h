@interface UIImage (TXYComUtil)
+ (id)txy_imageFromSampleBuffer:(opaqueCMSampleBuffer *)arg1;
+ (id)txy_mirrorImage:(id)arg1 scale:(double)arg2 rotate:(double)arg3;
+ (id)txy_doCompressQuality:(id)arg1 qualty:(double)arg2;
+ (id)txy_scaleSizeImage:(id)arg1 newWith:(double)arg2 newHeight:(double)arg3;
@end

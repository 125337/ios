@interface WCStoryVideoMakerUtil : NSObject
+ (void)playVideoToControllerWithCompletionBlock:(id /* block */)arg1;
+ (id)getTempVideoPathString;
+ (BOOL)deleteTempVideoWithPathString:(id)arg1;
+ (void)createOriginalVideoWith:(id)arg1 duration:(double)arg2 framerate:(double)arg3 targetSize:(CGSize)arg4 complection:(id /* block */)arg5;
+ (void)createOriginalVideoWith:(id)arg1 complection:(id /* block */)arg2;
+ (void)createVideoCompostionWithHandler:(id /* block */)arg1;
+ (__CVBuffer *)pixelBufferFromCGImage:(CGImage *)arg1 size:(CGSize)arg2;
+ (BOOL)appendToAdapter:(id)arg1 pixelBuffer:(__CVBuffer *)arg2 atTime:(struct)arg3 withInput:(id)arg4 withMovieWriter:(id)arg5;
+ (id)imageCompressFitSizeScale:(id)arg1 targetSize:(CGSize)arg2;
@end

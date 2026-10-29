@interface WCStoryPhotoVideoEffectsMaker : NSObject
+ (void)applyVideoEffectsToComposition:(id)arg1 photoArray:(id)arg2 size:(CGSize)arg3;
+ (void)exportComposePhotoMovieWithPhotoArrayPhotoArray:(id)arg1 url:(id)arg2 complection:(id /* block */)arg3;
+ (void)createPhotoMovieWithPhotoArray:(id)arg1 complection:(id /* block */)arg2;
+ (__CVBuffer *)pixelBufferFromCGImage:(CGImage *)arg1 size:(CGSize)arg2;
+ (BOOL)appendToAdapter:(id)arg1 pixelBuffer:(__CVBuffer *)arg2 atTime:(struct)arg3 withInput:(id)arg4 withMovieWriter:(id)arg5;
+ (void)createEmptyVideo:(id /* block */)arg1;
+ (CGSize)getVideoCreateSize;
+ (id)getTempBlackVideoPathString;
+ (id)exportVideoPath;
+ (BOOL)deleteTempVideoWithPathString:(id)arg1;
+ (id)addBlurBackgroundWithPhotoArray:(id)arg1 targetSize:(CGSize)arg2;
+ (id)createMultiPhotoAnimationGroupWithIndex:(long long)arg1;
+ (id)createSinglePhotoAnimationGroup;
+ (id)createPhotoVideoAnimationLayerWithPhotos:(id)arg1 size:(CGSize)arg2 videoLayer:(id)arg3;
+ (void)addSinglePhotoAnimationToLayer:(id)arg1 blurImage:(id)arg2 size:(CGSize)arg3;
+ (void)addMultiPhotoAnimationToLayer:(id)arg1 blurImageArray:(id)arg2 size:(CGSize)arg3;
@end


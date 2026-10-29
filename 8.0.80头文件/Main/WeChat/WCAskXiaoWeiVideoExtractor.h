@interface WCAskXiaoWeiVideoExtractor : NSObject
+ (void)extractVideoAtPath:(id)arg1 frameCount:(unsigned long long)arg2 maxShortSide:(double)arg3 completion:(id /* block */)arg4;
+ (void)extractVideoAtPath:(id)arg1 frameCount:(unsigned long long)arg2 maxShortSide:(double)arg3 needsAudio:(BOOL)arg4 completion:(id /* block */)arg5;
+ (void)cleanup:(id)arg1;
+ (id)createOutputDir;
+ (id)extractFramesSyncAtPath:(id)arg1 frameCount:(unsigned long long)arg2 maxShortSide:(double)arg3 outputDir:(id)arg4;
+ (id)compressAndSaveImage:(id)arg1 maxShortSide:(double)arg2 outputDir:(id)arg3 fileName:(id)arg4;
+ (id)_extractFramesFromAsset:(id)arg1 frameCount:(unsigned long long)arg2 maxShortSide:(double)arg3 outputDir:(id)arg4 error:(id *)arg5;
+ (id)_extractAudioAACFromAsset:(id)arg1 outputDir:(id)arg2 error:(id *)arg3;
@end

@interface MJAudioExtractor : NSObject
{
    BOOL _isCanceled; // +0x8
}
+ (id)defaultAudioOutputSettings;
+ (id)regulateAudioOutputSettings:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)extractAudioDataWithFilePath:(id)arg1 timeRange:(struct)arg2 audioOutputSettings:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)extractSilkDataWithFilePath:(id)arg1 timeRange:(struct)arg2 settings:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)extractPCMDataWithFilePath:(id)arg1 timeRange:(struct)arg2 settings:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)addWavHeaderIfNeededWithPCMData:(id)arg1 settings:(id)arg2;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
@end

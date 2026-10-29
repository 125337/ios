@interface MJAudioExtractor : NSObject
{
    BOOL _isCanceled; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)extractAudioDataWithFilePath:(id)arg1 timeRange:(struct)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)extractAudioDataImplWithFilePath:(id)arg1 timeRange:(struct)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
@end


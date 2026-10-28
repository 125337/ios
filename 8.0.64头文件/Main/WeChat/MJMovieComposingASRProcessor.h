@interface MJMovieComposingASRProcessor : NSObject
{
    OMCASRProcessor * _backingProcessor; // +0x8
}
+ (id)fetchModelZipFile;
+ (id)fetchModelConfigFilesPathInDirectoryAtPath:(id)arg1;
+ (id)fetchModelConfigFilesWithVersion:(id)arg1 destPath:(id)arg2;
+ (void)extractAudioDataFromClipSegment:(id)arg1 inHybridMode:(BOOL)arg2 completionHandler:(id /* block */)arg3;
+ (struct)timeRangeForASRFromSegmentationInfos:(id)arg1;
+ (BOOL)hasCachedSpeechRecognitionResultWithStoryElementSegmentVMs:(id)arg1;
+ (void)requestOnlineASRWithRequestItems:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestOnlineASRWithAudioData:(id)arg1 audioID:(id)arg2 completionHandler:(id /* block */)arg3;
+ (BOOL)isSegmentValidForASR:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)initBackingProcessorIfNeeded;
- (void)requestSpeechRecognitionWithStoryElementSegmentVMs:(id)arg1 inHybridMode:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (id)backingProcessor;
- (void)setBackingProcessor:(id)arg1;
- (void).cxx_destruct;
@end

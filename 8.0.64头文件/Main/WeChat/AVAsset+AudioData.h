@interface AVAsset (AudioData)
+ (BOOL)addVideoAsset:(id)arg1 samplateCount:(unsigned long long)arg2 classifier:(id)arg3 error:(id *)arg4;
+ (id)audioDataForClassify:(id)arg1;
- (id)syncLoadTracksWithMediaType:(id)arg1;
- (BOOL)tav_hasAudio;
- (BOOL)tav_hasVideo;
- (float)syncGetDuration;
- (float)syncGetDurationWithTimeout:(float)arg1;
- (unsigned int)time;
- (CGSize)visualSize;
- (struct)videoFirstFramePTS;
- (void)setVideoFirstFramePTS:(struct)arg1;
- (id)previewImages;
- (id)previewImageAtTime:(double)arg1;
- (id)previewImageAtTime:(double)arg1 imageSize:(CGSize)arg2;
- (void)asyncCalculateClassifyLabelsWithCompletionHandler:(id /* block */)arg1;
- (void)asyncCalculateClassifyLabelsForFinderWithCompletionHandler:(id /* block */)arg1;
- (void)_asyncCalculateClassifyLabelsWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_calculateClassifyLabelsWithScene:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)getCachedResultData;
- (void)saveCachedResultData:(id)arg1;
- (id)audioData:(struct)arg1 setting:(id)arg2;
@end

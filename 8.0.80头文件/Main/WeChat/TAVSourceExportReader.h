@interface TAVSourceExportReader : NSObject
{
    AVAssetReader * _videoReader; // +0x8
    AVAssetReader * _audioReader; // +0x10
}
- (BOOL)isReading;
- (BOOL)isReadingError;
- (BOOL)isCancelled;
- (void)reset;
- (id)error;
- (BOOL)isAvailable;
- (id)setupVideoReaderForAsset:(id)arg1 timeRange:(struct)arg2 inputSettings:(id)arg3 videoComposition:(id)arg4;
- (id)setupAudioReaderForAsset:(id)arg1 timeRange:(struct)arg2 settings:(id)arg3 audioMix:(id)arg4;
- (void)cancelReading;
- (id)startReading;
- (id)restartVideoReaderForAsset:(id)arg1 timeRange:(struct)arg2 inputSettings:(id)arg3 videoComposition:(id)arg4;
- (id)restartAudioReaderForAsset:(id)arg1 timeRange:(struct)arg2 settings:(id)arg3 audioMix:(id)arg4;
- (id)videoReader;
- (void)setVideoReader:(id)arg1;
- (id)audioReader;
- (void)setAudioReader:(id)arg1;
- (void).cxx_destruct;
@end

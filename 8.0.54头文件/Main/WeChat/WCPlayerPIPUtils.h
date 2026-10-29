@interface WCPlayerPIPUtils : NSObject
+ (id)GetPathOfPipAssetResource;
+ (id)GetPathOfTmpPipAssetResource;
+ (id)GetBundleVideoPath;
+ (BOOL)spliceVideoWithAsset:(id)arg1 durationSec:(double)arg2 compositionTrack:(id)arg3 ofTracks:(id)arg4;
+ (void)asyncGetComposePipVideoPathWithCompletion:(id /* block */)arg1;
+ (void)buildCompositionWithVideoSize:(CGSize)arg1 filePath:(id)arg2 durationSec:(double)arg3 completionHandler:(id /* block */)arg4;
+ (void)buildPlayerItemWithVideoSize:(CGSize)arg1 durationSec:(double)arg2 completionHandler:(id /* block */)arg3;
+ (__CVBuffer *)generatePixBufferWithVideoSize:(CGSize)arg1;
@end


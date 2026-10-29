@interface WCLivePhotoMovModel : NSObject
+ (void)addMetadataToVideoWithAsset:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(BOOL)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(id /* block */)arg6;
+ (void)addMetadataToVideo:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(BOOL)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(id /* block */)arg6;
+ (void)writeTrack:(long long)arg1 reader:(id)arg2 writer:(id)arg3 queue:(id)arg4 group:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)finishWritingTracksWithVideo:(id)arg1 reader:(id)arg2 writer:(id)arg3 durationMs:(long long)arg4 isSuccess:(BOOL)arg5 error:(id)arg6 completionHandler:(id /* block */)arg7;
+ (id)createContentIdentifierMetadataItem:(id)arg1;
+ (id)createStillImageTimeWriterInputMetadataAdapter;
+ (id)createStillImageTimeMetadataItem;
+ (struct)makeStillImageTimeRangeWithStillImageTimeMs:(long long)arg1 inFrameCount:(long long)arg2 videoDuration:(struct)arg3;
+ (long long)countFrames:(BOOL)arg1 asset:(id)arg2;
+ (BOOL)isVideoCodecSupportedForLivePhoto:(id)arg1;
@end


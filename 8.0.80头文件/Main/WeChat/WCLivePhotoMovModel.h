@interface WCLivePhotoMovModel : NSObject
{
    LivePhotoMakeExtraInfo * _makeExtraInfo; // +0x8
}
+ (BOOL)retainAigcMetaDataEnabled;
+ (BOOL)isOSVersionGreaterThanOrEqual26;
+ (BOOL)forceSingleTrackTranscode;
+ (BOOL)isExistAIGCKeyInMetadata:(id)arg1;
+ (id)getAIGCContentFromAsset:(id)arg1;
- (void)addMetadataToVideoWithAsset:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(BOOL)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)addMetadataToVideo:(id)arg1 outputVideoPath:(id)arg2 identifier:(id)arg3 preferedHEVC:(BOOL)arg4 stillImageTimeMs:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)writeTrack:(long long)arg1 reader:(id)arg2 writer:(id)arg3 asset:(id)arg4 queue:(id)arg5 group:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)finishWritingTracksWithVideo:(id)arg1 reader:(id)arg2 writer:(id)arg3 asset:(id)arg4 durationMs:(long long)arg5 isSuccess:(BOOL)arg6 error:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)createContentIdentifierMetadataItem:(id)arg1 inArray:(id)arg2;
- (id)createStillImageTimeWriterInputMetadataAdapter;
- (id)createStillImageTimeMetadataItem;
- (id)createAigcMetadataItem:(id)arg1;
- (struct)makeStillImageTimeRangeWithStillImageTimeMs:(long long)arg1 inFrameCount:(long long)arg2 videoDuration:(struct)arg3;
- (long long)countFrames:(BOOL)arg1 asset:(id)arg2;
- (BOOL)isVideoCodecSupportedForLivePhoto:(id)arg1;
- (id)makeExtraInfo;
- (void)setMakeExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

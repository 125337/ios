@interface WCPlayerVideoUtils : NSObject
+ (float)getVideoBitRateWithAsset:(id)arg1;
+ (float)getAudioBitRateWithAsset:(id)arg1;
+ (CGAffineTransform)getVideoTransformWithAsset:(id)arg1;
+ (double)getVideoDurationWithPlayerItem:(id)arg1;
+ (struct)getVideoBufferTimeRange:(id)arg1;
+ (id)getPlayerObserveChangeWithItem:(id)arg1;
+ (id)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2 Asset:(id)arg3 CurTime:(struct)arg4;
+ (CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 Asset:(id)arg2;
+ (CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2 CurTime:(struct)arg3;
+ (unsigned int)getVideoCodecWithPath:(id)arg1;
+ (id)getVideoMetaWithPath:(id)arg1;
+ (double)syncAVGetDurationWithPath:(id)arg1;
+ (double)syncGetDurationWithPath:(id)arg1;
+ (CGSize)getVideoSizeWithPath:(id)arg1;
+ (float)asset:(id)arg1 syncGetDurationWithTimeout:(float)arg2;
+ (BOOL)isDecoderErrorCode:(long long)arg1;
+ (BOOL)isMediaNotSupportedCode:(long long)arg1;
@end

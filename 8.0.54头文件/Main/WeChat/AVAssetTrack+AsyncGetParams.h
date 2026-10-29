@interface AVAssetTrack (AsyncGetParams)
+ (id)getAssetInfoDict;
- (id)tav_trackKey;
- (float)syncGetBitrate;
- (float)syncGetFramerate;
- (long long)syncGetAudioChannel;
- (opaqueCMFormatDescription *)syncGetAudioFormatDescription;
- (const AudioStreamBasicDescription *)syncGetAudioDescription;
- (id)syncGetAudioSubType;
- (id)syncGetParams:(id)arg1;
- (id)syncGetParams:(id)arg1 timeout:(float)arg2;
- (void)asyncGetParamsWithOption:(unsigned long long)arg1 completion:(id /* block */)arg2;
@end


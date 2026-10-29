@interface MMVideoHWEncodeTask : VideoEncodeTask
{
    SightAssetExportSession * _hwExportSession; // +0x8
}
+ (id)getProfileLevelWithParams:(id)arg1;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)cleanExportSession;
- (void)stopExport;
- (id)getReaderVideoSettingWithParams:(id)arg1;
- (id)getVideoSettingWithParams:(id)arg1;
- (id)HDRMetadataInsertionModeValue;
- (id)HDRMetadataInsertionModeKey;
- (id)getAudioSettingWithParams:(id)arg1;
- (id)getAudioSettingForDolbyVideo:(id)arg1 asset:(id)arg2;
- (id)getAudioSettingWithParams:(id)arg1 asset:(id)arg2;
- (id)hwExportSession;
- (void)setHwExportSession:(id)arg1;
- (void).cxx_destruct;
@end


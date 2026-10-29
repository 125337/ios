@interface WAWebViewPlugin_voicePlayer : WAWebViewPluginBase <IFavAudioPlayerExt>
{
    BOOL _stopVoiceFlag; // +0x8
    id <IWAWebViewPluginDelegate> _resultDelegate; // +0x10
    NSString * _localId; // +0x18
}
- (id)init;
- (void)playVoice:(id)arg1;
- (void)setStopVoiceFlag;
- (id)voiceCacheRootPath;
- (id)voiceCachePathByfileName:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)sendEndEventToJS:(id)arg1;
- (void)OnPlayError:(id)arg1;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (void).cxx_destruct;
@end


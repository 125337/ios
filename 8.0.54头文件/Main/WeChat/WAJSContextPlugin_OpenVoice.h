@interface WAJSContextPlugin_OpenVoice : WAJSContextPluginBase
{
    AVAudioPlayer * _player; // +0x8
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)getOpenVoiceBaseView;
- (void)insertView:(id)arg1 callback:(id /* block */)arg2;
- (void)updateView:(id)arg1 callback:(id /* block */)arg2;
- (void)removeView:(id)arg1 callback:(id /* block */)arg2;
- (void)playCallTone;
- (void)stopCallTone;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end


@interface WebviewJSEventHandler_doMpVoiceInput : WebviewJSEventHandlerBase
{
    WCBrandMPVoiceInputEntryView * _voiceInputEntryView; // +0x8
    JSEvent * _voiceInputEvent; // +0x10
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)callbackEvent:(id)arg1 result:(id)arg2;
- (void)callbackFailEvent:(id)arg1 withDescription:(id)arg2;
- (void)callbackMissingArgumentsEvent:(id)arg1;
- (void)clearVoiceInputState;
- (void)handleGetSwitchWithEvent:(id)arg1;
- (void)handleDoVoiceInputWithEvent:(id)arg1;
- (void)handleFocusKeyboardWithEvent:(id)arg1;
- (void)showVoiceInputEntryView;
- (void)endVoiceInputWithType:(long long)arg1 voiceData:(id)arg2 voiceDuration:(long long)arg3 voiceFileMD5:(id)arg4 voiceFileType:(id)arg5 failDescription:(id)arg6;
- (id)voiceInputEntryView;
- (void)setVoiceInputEntryView:(id)arg1;
- (id)voiceInputEvent;
- (void)setVoiceInputEvent:(id)arg1;
- (void).cxx_destruct;
@end

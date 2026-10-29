@interface ChatBotFlutterOnlyAffImpl : NSObject <ChatbotFlutterOnlyCPP2NativeCallerBase, IChatbotAudioStateExt>
{
    ChatbotFlutterOnlyCPP2NativeCallerCallback * _callback; // +0x8
    CXCallObserver * _callObserver; // +0x10
}
+ (id)sharedImpl;
+ (void)ensureAudioStateExtRegistered;
- (void)setCallback:(id)arg1;
- (void)onRequestOpenMiniToolPageAsync:(unsigned long long)arg1;
- (void)onRequestRouteURLAsync:(unsigned long long)arg1 url:(id)arg2;
- (void)onRequestOpenH5URLAsync:(unsigned long long)arg1 url:(id)arg2;
- (void)onRequestGetUserToolCountAsync:(unsigned long long)arg1;
- (void)onRequestStartRecordingAsync:(unsigned long long)arg1 isOpen:(BOOL)arg2 roomScene:(int)arg3 uiState:(int)arg4 isFullDuplex:(BOOL)arg5 switchToFullDuplex:(BOOL)arg6 responseState:(int)arg7 imagePaths:(id)arg8 forbidSendMicStatus:(BOOL)arg9 voipSessionID:(id)arg10 filePaths:(id)arg11 fileNames:(id)arg12 chatUsernames:(id)arg13 referMsg:(id)arg14 cardWraps:(id)arg15;
- (void)onRequestHeadlessRecordingAsync:(unsigned long long)arg1 requestToken:(unsigned long long)arg2 isOpen:(BOOL)arg3 uiState:(int)arg4 forbidSendMicStatus:(BOOL)arg5 voipSessionID:(id)arg6;
- (void)onTTSBeginWithAudioFallbackAsync:(unsigned long long)arg1 needCoreAudioFallback:(BOOL)arg2 roundInfo:(id)arg3;
- (void)onTTSEndWithAudioFallbackAsync:(unsigned long long)arg1 needCoreAudioFallback:(BOOL)arg2 roundInfo:(id)arg3;
- (void)onRequestGetChatSessionListAsync:(unsigned long long)arg1;
- (void)onRequestCompressImageAsync:(unsigned long long)arg1 imagePath:(id)arg2;
- (void)onSetNeedDiscardTTSPlaybackAsync:(unsigned long long)arg1 discard:(BOOL)arg2;
- (void)onSetManualReadAloudActiveAsync:(unsigned long long)arg1 active:(BOOL)arg2;
- (void)onSetAudioActiveAsync:(unsigned long long)arg1 active:(BOOL)arg2;
- (void)onAudioControlAsync:(unsigned long long)arg1 action:(int)arg2;
- (void)onFeedbackSubmittedAsync:(unsigned long long)arg1 negativeOptionList:(id)arg2 negativeCommentStr:(id)arg3 negativeSubmitSource:(int)arg4;
- (void)onFeedbackPageDismissedAsync:(unsigned long long)arg1;
- (void)onRequestPrepareAudioSessionAsync:(unsigned long long)arg1;
- (void)onAudioStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onSystemVolumeChanged:(float)arg1 volume:(float)arg2 direction:(long long)arg3;
- (id)callback;
- (id)callObserver;
- (void)setCallObserver:(id)arg1;
- (void).cxx_destruct;
@end

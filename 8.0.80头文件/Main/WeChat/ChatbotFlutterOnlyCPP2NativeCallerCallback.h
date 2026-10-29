@interface ChatbotFlutterOnlyCPP2NativeCallerCallback : NSObject
{
    ChatbotFlutterOnlyCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotFlutterOnlyCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnRequestOpenMiniToolPageComplete:(unsigned long long)arg1;
- (void)onOnRequestGetUserToolCountComplete:(unsigned long long)arg1 count:(int)arg2;
- (void)onOnRequestRouteURLComplete:(unsigned long long)arg1;
- (void)onOnRequestOpenH5URLComplete:(unsigned long long)arg1;
- (void)onOnRequestStartRecordingComplete:(unsigned long long)arg1;
- (void)onOnRequestHeadlessRecordingComplete:(unsigned long long)arg1;
- (void)onOnTTSBeginWithAudioFallbackComplete:(unsigned long long)arg1;
- (void)onOnTTSEndWithAudioFallbackComplete:(unsigned long long)arg1;
- (void)onOnRequestGetChatSessionListComplete:(unsigned long long)arg1 sessionList:(id)arg2;
- (void)onOnRequestCompressImageComplete:(unsigned long long)arg1 compressedData:(id)arg2 retCode:(int)arg3;
- (void)onOnSetNeedDiscardTTSPlaybackComplete:(unsigned long long)arg1;
- (void)onOnSetManualReadAloudActiveComplete:(unsigned long long)arg1;
- (void)onOnSetAudioActiveComplete:(unsigned long long)arg1;
- (void)onOnAudioControlComplete:(unsigned long long)arg1;
- (void)onOnFeedbackSubmittedComplete:(unsigned long long)arg1;
- (void)onOnFeedbackPageDismissedComplete:(unsigned long long)arg1;
- (void)onOnRequestPrepareAudioSessionComplete:(unsigned long long)arg1;
@end

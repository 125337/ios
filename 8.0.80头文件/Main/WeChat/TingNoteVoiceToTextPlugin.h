@interface TingNoteVoiceToTextPlugin : NSObject <MMFlutterPlugin, TingNoteVoiceToTextApi, WeNoteVoiceToTextManagerDelegate>
{
    TingNoteVoiceToTextCallbackApi * _callbackApi; // +0x8
}
+ (id)favoritesItemForFavId:(unsigned int)arg1 localId:(unsigned int)arg2;
+ (id)voiceDataFieldInItem:(id)arg1 htmlId:(id)arg2;
+ (id)voiceFallbackInItem:(id)arg1 md5:(id)arg2;
+ (id)pigeonSegmentsFromDicts:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)startConvertTaskKey:(id)arg1 attachmentId:(id)arg2 favId:(long long)arg3 localId:(long long)arg4 error:(id *)arg5;
- (void)_notifyFailedTaskKey:(id)arg1 errorMessage:(id)arg2;
- (void)voiceToTextManager:(id)arg1 didUpdatePartialSegments:(id)arg2 highlightSegments:(id)arg3 forTaskKey:(id)arg4;
- (void)voiceToTextManager:(id)arg1 didSuccessWithSegments:(id)arg2 highlightSegments:(id)arg3 forTaskKey:(id)arg4;
- (void)voiceToTextManager:(id)arg1 didFailWithError:(id)arg2 forTaskKey:(id)arg3;
- (id)callbackApi;
- (void)setCallbackApi:(id)arg1;
- (void).cxx_destruct;
@end

@interface AffWCRTEDelegateCallback : NSObject
{
    AffWCRTEDelegateDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffWCRTEDelegateDispatcherBridgeObjcImpl *)arg1;
- (void)onSayHelloComplete:(unsigned long long)arg1;
- (void)onGetCurrentRecordingIdComplete:(unsigned long long)arg1 recordingId:(id)arg2;
- (void)onShowAlertComplete:(unsigned long long)arg1;
- (void)onGetGeneralPastebordStringComplete:(unsigned long long)arg1 pasteboardString:(id)arg2;
- (void)onSetGeneralPasteBoardStringComplete:(unsigned long long)arg1;
- (void)onGetNameForAttachmentTypeComplete:(unsigned long long)arg1 typeName:(id)arg2;
- (void)onGetCurrentTranslateLanguageComplete:(unsigned long long)arg1 tolang:(id)arg2;
- (void)onGetAttachmentExpiredWordingComplete:(unsigned long long)arg1 wording:(id)arg2;
@end

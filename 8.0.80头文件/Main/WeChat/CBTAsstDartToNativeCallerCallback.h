@interface CBTAsstDartToNativeCallerCallback : NSObject
{
    CBTAsstDartToNativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTAsstDartToNativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOpenImageFullScreenViewComplete:(unsigned long long)arg1;
- (void)onOpenHistoryDialogueDetailViewComplete:(unsigned long long)arg1;
- (void)onRequestUpdateMicStatusForDart2IosComplete:(unsigned long long)arg1;
- (void)onAskXiaoweiButtonClkedComplete:(unsigned long long)arg1;
- (void)onAskXiaoweiButtonLongPressDownComplete:(unsigned long long)arg1;
- (void)onAskXiaoweiButtonLongPressUpComplete:(unsigned long long)arg1;
- (void)onOpenScanContinueCameraComplete:(unsigned long long)arg1 result:(int)arg2 imageSource:(int)arg3 imagePath:(id)arg4;
@end

@interface WeNoteNativeHelperCallback : NSObject
{
    WeNoteNativeHelperDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeNoteNativeHelperDispatcherBridgeObjcImpl *)arg1;
- (void)onOpenLocationItemComplete:(unsigned long long)arg1;
- (void)onPlayVoiceComplete:(unsigned long long)arg1;
- (void)onPlayVoiceProgress:(unsigned long long)arg1 progress:(id)arg2;
- (void)onPauseVoiceComplete:(unsigned long long)arg1;
- (void)onReleaseAudioPlayerComplete:(unsigned long long)arg1;
- (void)onOpenMediaAssetGalleryPageComplete:(unsigned long long)arg1;
- (void)onOpenWebpageComplete:(unsigned long long)arg1;
- (void)onOpenFileComplete:(unsigned long long)arg1;
- (void)onOpenPhotoSelectorComplete:(unsigned long long)arg1 respList:(id)arg2;
- (void)onTakePhotoComplete:(unsigned long long)arg1 respInfo:(id)arg2;
- (void)onOpenFileSelectorComplete:(unsigned long long)arg1 respList:(id)arg2;
- (void)onOpenLocationSelectorComplete:(unsigned long long)arg1 resp:(id)arg2;
- (void)onForwardToConversationComplete:(unsigned long long)arg1 resp:(id)arg2;
@end

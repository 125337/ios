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
- (void)onReplaceMediaAttachmentEvent:(id)arg1 media:(id)arg2;
- (void)onOpenWebpageComplete:(unsigned long long)arg1;
- (void)onOpenFileComplete:(unsigned long long)arg1;
- (void)onOpenPhotoSelectorComplete:(unsigned long long)arg1 respList:(id)arg2;
- (void)onTakePhotoComplete:(unsigned long long)arg1 respInfo:(id)arg2;
- (void)onOpenFileSelectorComplete:(unsigned long long)arg1 respList:(id)arg2;
- (void)onOpenLocationSelectorComplete:(unsigned long long)arg1 resp:(id)arg2;
- (void)onShowVoiceInputPanelComplete:(unsigned long long)arg1;
- (void)ongetPasteBoardItemsFromClipBoardComplete:(unsigned long long)arg1 items:(id)arg2;
- (void)onRecordingStartedEvent;
- (void)onRecordingEndEvent:(id)arg1;
- (void)onVoiceInputPanelChangeVisibilityEvent:(BOOL)arg1;
- (void)onInsertTextToEditorEvent:(id)arg1;
- (void)onNotePageEdgePopGestureBeginEvent;
- (void)onDictationStateChangedEvent:(int)arg1 text:(id)arg2;
- (void)onDictationLevelMeterChangedEvent:(float)arg1;
- (void)onAITextTidyResultEvent:(id)arg1 isFinal:(BOOL)arg2;
- (void)onForwardToConversationComplete:(unsigned long long)arg1 resp:(id)arg2;
- (void)onDownloadMsgFileComplete:(unsigned long long)arg1 resp:(id)arg2;
- (void)onOnCheckEnablePasteComplete:(unsigned long long)arg1 enable:(BOOL)arg2;
@end

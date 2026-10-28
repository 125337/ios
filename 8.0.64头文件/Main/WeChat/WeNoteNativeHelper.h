@interface WeNoteNativeHelper : NSObject <WeNoteNativeHelperBase>
{
    WeNoteNativeHelperCallback * m_callBack; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)openLocationItemAsync:(unsigned long long)arg1 lng:(double)arg2 lat:(double)arg3 scale:(double)arg4 label:(id)arg5 poiName:(id)arg6 poiId:(id)arg7;
- (void)playVoiceAsync:(unsigned long long)arg1 req:(id)arg2;
- (void)pauseVoiceAsync:(unsigned long long)arg1 playId:(id)arg2 path:(id)arg3;
- (void)releaseAudioPlayerAsync:(unsigned long long)arg1;
- (void)openMediaAssetGalleryPageAsync:(unsigned long long)arg1 mediaAssets:(id)arg2 showIndex:(int)arg3;
- (void)openWebpageAsync:(unsigned long long)arg1 brandId:(id)arg2 url:(id)arg3;
- (void)openFileAsync:(unsigned long long)arg1 localId:(int)arg2 dataId:(id)arg3 title:(id)arg4 filePath:(id)arg5 totalSize:(int)arg6 ext:(id)arg7 msgFileDownReq:(id)arg8;
- (void)openPhotoSelectorAsync:(unsigned long long)arg1 params:(id)arg2;
- (void)takePhotoAsync:(unsigned long long)arg1 canTakeImg:(BOOL)arg2 canTakeVideo:(BOOL)arg3;
- (void)openFileSelectorAsync:(unsigned long long)arg1 maxCount:(int)arg2;
- (void)openLocationSelectorAsync:(unsigned long long)arg1;
- (void)forwardToConversationAsync:(unsigned long long)arg1 req:(id)arg2;
- (void).cxx_destruct;
@end

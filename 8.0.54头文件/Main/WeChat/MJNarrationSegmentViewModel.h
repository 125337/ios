@interface MJNarrationSegmentViewModel : MJAudialClipSegmentViewModel
{
    id <MJMovieComposingContext> _composingContext; // +0x8
    NSString * _audioFileID; // +0x10
    NSMutableArray * _captionItems; // +0x18
    id /* block */ _mockUpdateVoiceLabelHandler; // +0x20
    unsigned long long _voiceChangeLoadingStatus; // +0x28
    NSString * _roleID; // +0x30
    NSString * _roleName; // +0x38
    unsigned long long _sttLoadingStatus; // +0x40
    OMCNarrationSegment * _narrationSegment; // +0x48
}
- (id)initWithNarrationSegment:(id)arg1 composingContext:(id)arg2;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithNarrationSegmentImpl;
- (void)dealloc;
- (BOOL)isUsingOriginSpeech;
- (void)updateCaptionItems:(id)arg1;
- (id)captionTextAtTimeInTimeline:(struct)arg1;
- (void)setCaptionText:(id)arg1 atTimeInTimeline:(struct)arg2;
- (void)updateSTTLoadingStatus:(unsigned long long)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setVoiceChangeLoadingStatus:(unsigned long long)arg1;
- (BOOL)resetVoiceToOriginWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (BOOL)_resetVoiceToOriginInNarrationSpeakWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (BOOL)_resetVoiceToOriginInNarrationTextInputWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (BOOL)_replaceVoiceWithRoleID:(id)arg1 roleName:(id)arg2 audioFilePath:(id)arg3 takeSnapshot:(BOOL)arg4 autoPlay:(BOOL)arg5;
- (void)requestVoiceChangeWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(BOOL)arg3 autoPlay:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)requestVoiceChangeWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_asyncRequestTTSWithAudioID:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 totalDuration:(struct)arg5 takeSnapshot:(BOOL)arg6 autoPlay:(BOOL)arg7 completion:(id /* block */)arg8;
- (void)_asyncRequestVocalEnhancementWithAudioID:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 takeSnapshot:(BOOL)arg4 autoPlay:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)cancelCurrentVoiceChangeRequestIfNeeded;
- (void)cancelSTTRequestIfNeeded;
- (void)_updateRoleID:(id)arg1 roleName:(id)arg2;
- (void)_updateSpeechFileIfNeeded;
- (BOOL)_tryCachedSpeechFileWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(BOOL)arg3 autoPlay:(BOOL)arg4;
- (void)bindSignals;
- (void)_vocalEnhancementRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)_stsRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)_ttsRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)_sttRequestStatusDidUpdateWithAudioID:(id)arg1 status:(unsigned long long)arg2;
- (void)_updateSTSRequestStatus;
- (void)_updateRequestStatus;
- (void)_loadSTTLoadingStatusWithSegment:(id)arg1;
- (void)requestSTTWithCompletion:(id /* block */)arg1;
- (void)syncWithMutationEntry:(id)arg1;
- (BOOL)isTextEditableAtPresentationTime:(struct)arg1;
- (BOOL)isSpeechRecognitionAvailable;
- (id)description;
- (id)composingContext;
- (id)audioFileID;
- (id)captionItems;
- (void)setCaptionItems:(id)arg1;
- (id /* block */)mockUpdateVoiceLabelHandler;
- (void)setMockUpdateVoiceLabelHandler:(id /* block */)arg1;
- (unsigned long long)voiceChangeLoadingStatus;
- (id)roleID;
- (id)roleName;
- (unsigned long long)sttLoadingStatus;
- (void)setSttLoadingStatus:(unsigned long long)arg1;
- (id)narrationSegment;
- (void)setNarrationSegment:(id)arg1;
- (void).cxx_destruct;
@end


@interface OMCNarrationSegment : OMCClipSegment
- (id)narrationFilePath;
- (id)originNarrationFilePath;
- (id)audioFileID;
- (id)roleID;
- (id)roleName;
- (id)captionItems;
- (id)displayingCaptionItems;
- (id)captionStyleID;
- (id)captionFontName;
- (id)captionFontNameInMaterial;
- (id)captionColorStyleID;
- (BOOL)isCaptionsEnabled;
- (BOOL)showCaptions;
- (void)hideCaptions;
- (BOOL)updateCaptionItems:(id)arg1;
- (BOOL)updateCaptionStyleWithID:(id)arg1;
- (BOOL)updateCaptionFontName:(id)arg1;
- (BOOL)updateCaptionColorStyleWithID:(id)arg1;
- (void)resetRole;
- (void)updateRoleID:(id)arg1 roleName:(id)arg2;
- (BOOL)replaceNarrationSpeechWithFilePath:(id)arg1;
- (BOOL)replaceNarrationSpeechWithFilePath:(id)arg1 isKeepDuration:(BOOL)arg2;
- (BOOL)resetToBlankAudioNarration;
- (BOOL)replaceNarrationWithFilePath:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 captionStyleID:(id)arg5;
- (BOOL)replaceNarrationWithFilePath:(id)arg1 roleID:(id)arg2 roleName:(id)arg3 captionItems:(id)arg4 captionStyleID:(id)arg5 isKeepDuration:(BOOL)arg6;
- (SharedPtr<XMSNarrationSegment>)backingNarrationSegment;
@end


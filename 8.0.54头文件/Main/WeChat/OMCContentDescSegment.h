@interface OMCContentDescSegment : OMCElementSegment <OMCEditingStateAdjustable, OMCTextToSpeechAdjustable>
- (id)belongingSegmentID;
- (id)materialID;
- (id)text;
- (id)textFontName;
- (id)textFontNameInMaterial;
- (id)colorStyleID;
- (id)displayingText;
- (BOOL)updateText:(id)arg1;
- (BOOL)updateStyleWithMaterialID:(id)arg1;
- (BOOL)updateTextFontName:(id)arg1;
- (BOOL)updateColorStyleWithID:(id)arg1;
- (void)enterEditingState;
- (void)leaveEditingState;
- (BOOL)isEditingState;
- (id)audioFilePath;
- (id)roleID;
- (id)roleName;
- (id)speechText;
- (void)resetRole;
- (void)updateRoleID:(id)arg1 roleName:(id)arg2;
- (BOOL)buildSpeechWithFilePath:(id)arg1;
- (BOOL)replaceSpeechWithFilePath:(id)arg1;
- (void)clearSpeech;
- (SharedPtr<XMSContentDescSegment>)backingContentDescSegment;
@end


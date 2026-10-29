@interface OMCMovieTitleSegment : OMCElementSegment <OMCEditingStateAdjustable, OMCTextToSpeechAdjustable>
- (id)materialID;
- (id)title;
- (id)displayingTitle;
- (id)titleFontName;
- (id)titleFontNameInMaterial;
- (id)colorStyleID;
- (BOOL)updateTitle:(id)arg1;
- (BOOL)updateStyleWithMaterialID:(id)arg1;
- (BOOL)updateTitleFontName:(id)arg1;
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
- (SharedPtr<XMSMovieTitleSegment>)backingMovieTitleSegment;
@end


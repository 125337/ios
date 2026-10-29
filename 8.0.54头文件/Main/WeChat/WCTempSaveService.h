@interface WCTempSaveService : MMUserService <MMServiceProtocol>
{
    BOOL _isReadingFile; // +0x8
    unsigned long long _curType; // +0x10
    WCTempSaveModel * _textModel; // +0x18
    WCTempSaveModel * _mediaModel; // +0x20
    NSOperationQueue * _mediaFileQueue; // +0x28
    NSOperationQueue * _textFileQueue; // +0x30
}
- (id)init;
- (void)onServiceMemoryWarning;
- (id)openOldText;
- (id)openOldMediaText;
- (id)openOldImages;
- (id)openOldSight;
- (unsigned long long)openOldMediaPasteLength;
- (id)openOldTextExtBean;
- (id)openOldMediaExtBean;
- (id)openOldPostCycleId;
- (void)removeOldTextFile;
- (void)removeOldMediaFile;
- (void)setText:(id)arg1 poiInfo:(id)arg2 tempSelectContacts:(id)arg3 remindContactUsernames:(id)arg4 pasteLength:(unsigned long long)arg5 withExtBean:(id)arg6 isDynamicTagEnabled:(BOOL)arg7 postCycleId:(id)arg8;
- (void)setMediaText:(id)arg1 imageArray:(id)arg2 sightDraft:(id)arg3 poiInfo:(id)arg4 tempSelectContacts:(id)arg5 remindContactUsernames:(id)arg6 pasteLength:(unsigned long long)arg7 withExtBean:(id)arg8 isDynamicTagEnabled:(BOOL)arg9 postCycleId:(id)arg10;
- (id)getLastPostVisibleLabelNames;
- (id)getLastPostInVisibleLabelNames;
- (BOOL)isDynamicTagEnabledForTempSave;
- (BOOL)shouldAutoRemove:(id)arg1;
- (id)getMediaModelFromFile;
- (id)getTextModelFromFile;
- (id)getSessionID;
- (id)mediaModel;
- (id)textModel;
- (unsigned long long)curType;
- (void)setCurType:(unsigned long long)arg1;
- (void)setTextModel:(id)arg1;
- (void)setMediaModel:(id)arg1;
- (id)mediaFileQueue;
- (void)setMediaFileQueue:(id)arg1;
- (id)textFileQueue;
- (void)setTextFileQueue:(id)arg1;
- (BOOL)isReadingFile;
- (void)setIsReadingFile:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WeNoteReportLogic : NSObject
{
    NSString * m_noteID; // +0x8
    NSString * m_sessionId; // +0x10
    int m_enterNoteScene; // +0x18
    BOOL m_isFromChatRoom; // +0x1c
    BOOL m_editable; // +0x1d
    BOOL m_isHTMLExpired; // +0x1e
    int m_viewImageCount; // +0x20
}
- (id)initWithNoteID:(id)arg1 sessionId:(id)arg2 openScene:(int)arg3 editable:(BOOL)arg4 isFromChatRoom:(BOOL)arg5;
- (void)increaseViewImageCount;
- (void)markHTMLExpired;
- (void)reportILogsWith:(int)arg1 logExt:(id)arg2;
- (void)report14789WithIsSmallImageMode:(BOOL)arg1 isInTranslation:(BOOL)arg2;
- (void)report27798WithTotalSize:(long long)arg1 favData:(id)arg2 msgIDOrFeedID:(id)arg3 actionType:(unsigned int)arg4 actionResult:(unsigned int)arg5 scene:(unsigned int)arg6;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(BOOL)arg2;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(BOOL)arg2 MediaType:(unsigned long long)arg3;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(BOOL)arg2 MediaType:(unsigned long long)arg3 favDetail:(id)arg4 count:(unsigned int)arg5;
- (void)reportToolViewOperation:(int)arg1 isSmallImageMode:(BOOL)arg2 MediaType:(unsigned long long)arg3 favDetail:(id)arg4 count:(unsigned int)arg5 operationDetail:(id)arg6 logVersion:(unsigned int)arg7;
- (void)reportNoteContentSearchWithActionType:(int)arg1;
- (void)reportActionSheetOperation:(unsigned int)arg1 isSmallImageMode:(BOOL)arg2;
- (void)reportTranslationWithFromTitleBtn:(BOOL)arg1 result:(unsigned int)arg2;
- (void)reportOnTop:(unsigned int)arg1 onTop:(BOOL)arg2;
- (void)reportSaveNoteImageWidth:(unsigned long long)arg1 Height:(unsigned long long)arg2 Length:(unsigned long long)arg3 errorCode:(unsigned int)arg4 Editable:(unsigned long long)arg5;
- (void)report34070FlutterNoteErrorNoteId:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 SessionId:(id)arg4 IsEditable:(BOOL)arg5;
- (void)reportNotePageOut32903:(id)arg1 isEdit:(BOOL)arg2 hasContent:(BOOL)arg3 stayDuration:(id)arg4 plusSessionId:(id)arg5;
- (void).cxx_destruct;
@end

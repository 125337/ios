@interface RecordBaseUploadCDNMgr : NSObject
{
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x8
    BOOL _bJustUploadNoteDataField; // +0x9
    BOOL _enableChatMessageNotify; // +0xa
}
- (void)setDelegate:(id)arg1;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (void)StartUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (id)getCurMsgWrap;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (BOOL)bJustUploadNoteDataField;
- (void)setBJustUploadNoteDataField:(BOOL)arg1;
- (BOOL)enableChatMessageNotify;
- (void)setEnableChatMessageNotify:(BOOL)arg1;
@end

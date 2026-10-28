@interface ChatRoomHistoryUtil : NSObject
+ (id)DataFromRecordMsg:(id)arg1;
+ (id)RecordMsgFromData:(id)arg1;
+ (id)TmpPathForUploadRecordMsg;
+ (id)PathForUploadRecordMsg:(id)arg1;
+ (id)TmpPathForHistoryRecord:(id)arg1;
+ (id)PathForHistoryRecord:(id)arg1;
+ (id)GetHistoryMsgDBConfigPath;
+ (id)GetHistoryMsgDBPath;
+ (id)GetInviteAddMsgDataFilePath;
@end

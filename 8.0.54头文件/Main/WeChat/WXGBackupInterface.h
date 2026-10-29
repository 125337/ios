@interface WXGBackupInterface : NSObject
+ (BOOL)isBakChatName:(id)arg1;
+ (void)changeForBackup:(id)arg1;
+ (BOOL)isMsgWrapSupportBackup:(id)arg1;
+ (BOOL)isMsgWrapSupportRoam:(id)arg1;
+ (BOOL)extMsgSupportBackup:(id)arg1;
+ (BOOL)extAppMsgSupportBackup:(id)arg1;
+ (BOOL)isSpecialMsgMayNotHaveSvrid:(id)arg1;
+ (BOOL)isSpecialMsgInRoomContent:(id)arg1;
+ (void)makeupMessageWrap:(id)arg1;
+ (BOOL)isTextMessage:(id)arg1;
+ (id)getIDFromPayMsg:(id)arg1;
+ (id)getPayMsgSendIDFromURL:(id)arg1;
+ (id)getIDFromVoipIniteMsg:(id)arg1;
@end


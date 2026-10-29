@interface CBTHalfScreenMsgBubbleRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (BOOL)isRemindAskXiaoWeiEnabled;
+ (id)cbt_reminderContentForMessage:(id)arg1 isText:(BOOL *)arg2;
+ (id)reminderQueryForMessage:(id)arg1 senderNickname:(id)arg2;
+ (void)showReminderFromVC:(id)arg1 messageWrap:(id)arg2 chatContact:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (id)cbt_decodeXMLEntities:(id)arg1;
+ (id)cbt_extractXMLTag:(id)arg1 fromXML:(id)arg2;
+ (id)cbt_normalizeMsgContent:(id)arg1 chatType:(unsigned int)arg2;
+ (id)cbt_bypassDetailWithChatId:(id)arg1 chatName:(id)arg2 chatType:(unsigned int)arg3 msgId:(unsigned long long)arg4 sourceType:(int)arg5 msgContent:(id)arg6 senderNickname:(id)arg7 senderRemark:(id)arg8 msgCreateTime:(unsigned int)arg9 title:(id)arg10;
+ (void)showFromVC:(id)arg1 chatId:(id)arg2 chatName:(id)arg3 chatType:(unsigned int)arg4 msgId:(unsigned long long)arg5 msgContent:(id)arg6 dismissCallback:(id /* block */)arg7;
+ (id)optionsWithChatId:(id)arg1 chatName:(id)arg2 chatType:(long long)arg3 msgId:(unsigned long long)arg4 msgContent:(id)arg5 srcInfoParams:(id)arg6;
+ (id)reminderOptionsWithChatId:(id)arg1 chatName:(id)arg2 chatType:(long long)arg3 msgId:(unsigned long long)arg4 msgContent:(id)arg5 originalMsgContent:(id)arg6 senderNickname:(id)arg7 senderRemark:(id)arg8 msgCreateTime:(unsigned int)arg9 reminderTitle:(id)arg10 srcInfoParams:(id)arg11;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showReminderFromVC:(id)arg1 chatId:(id)arg2 chatName:(id)arg3 chatType:(unsigned int)arg4 msgId:(unsigned long long)arg5 msgContent:(id)arg6 originalMsgContent:(id)arg7 senderNickname:(id)arg8 senderRemark:(id)arg9 msgCreateTime:(unsigned int)arg10 reminderTitle:(id)arg11 dismissCallback:(id /* block */)arg12;
@end

@interface EnterpriseUtil : MMObject
+ (id)getEnterpriseChatCachePath;
+ (id)getPathOfEnterpriseMessageDB:(id)arg1;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)convertSvrFullBizChat2EnterpirseContact:(id)arg1;
+ (id)convertCreateChatPageResToContact:(id)arg1 brand:(id)arg2;
+ (id)convertCreateChatPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertAddMemberPageResToContact:(id)arg1 extContact:(id)arg2 brand:(id)arg3;
+ (id)convertAddMemberPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertMsgWrap2EnterpriseDBItem:(id)arg1 brandUserName:(id)arg2;
+ (id)convertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (id)batchConvertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (BOOL)isMsgWrapAtMe:(id)arg1;
+ (BOOL)isMsgWrapFromMe:(id)arg1;
+ (BOOL)isMsgWrapAtAll:(id)arg1;
+ (BOOL)isChatRoomMsg:(id)arg1;
+ (id)getEnterpriseChatBrandUserName:(id)arg1;
+ (id)getEnterpriseSenderOfMsgWrap:(id)arg1;
+ (id)fillMsgSource:(id)arg1 chatId:(id)arg2 brand:(id)arg3;
+ (void)asyncGenerateInviteColleagesMsg:(id)arg1 resultMsgBlock:(id /* block */)arg2;
@end

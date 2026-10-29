@interface MessageFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (void)sendTextMessageToChatId:(id)arg1 content:(id)arg2 completion:(id /* block */)arg3;
- (void)registerModuleFunctions;
- (void)processAppMessage:(id)arg1 contentXml:(id)arg2 messageSubtype:(unsigned int)arg3 chatId:(id)arg4 callBack:(id)arg5;
- (void)processFileMessage:(id)arg1 parsedTitle:(id)arg2 parsedAttachId:(id)arg3 parsedCdnAttachUrl:(id)arg4 parsedAttachAesKey:(id)arg5 parsedFileExt:(id)arg6 parsedTotalLen:(unsigned long long)arg7 chatId:(id)arg8 callBack:(id)arg9;
- (void)processImageMessage:(id)arg1 params:(id)arg2 chatId:(id)arg3 callBack:(id)arg4;
- (void)processEmoticonMessage:(id)arg1 params:(id)arg2 chatId:(id)arg3 callBack:(id)arg4;
- (void)sendMessage:(id)arg1 chatId:(id)arg2 callBack:(id)arg3;
- (void)fetchRecentChatsWithAuthPass:(id)arg1 includeRawXml:(BOOL)arg2 currentUserId:(id)arg3 selfContact:(id)arg4 messageMgr:(id)arg5 contactMgr:(id)arg6 params:(id)arg7 completion:(id /* block */)arg8;
- (unsigned long long)jsonByteSizeForMessageDict:(id)arg1;
- (id)getMessageDictForMessage:(id)arg1 withUserId:(id)arg2 includeRawXml:(BOOL)arg3;
- (id)getSelfGroupNicknameForChat:(id)arg1 selfContact:(id)arg2;
- (id)chatIdForMessage:(id)arg1;
- (id)getSenderNameForMessage:(id)arg1;
@end

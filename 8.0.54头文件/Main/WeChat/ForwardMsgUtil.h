@interface ForwardMsgUtil : MMObject
+ (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4;
+ (id)SendMsgWithOriMsg:(id)arg1 Contact:(id)arg2 ForwardType:(unsigned int)arg3 EditImageAttr:(id)arg4;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4 uiIDKeyScene:(unsigned int)arg5 editImageAttr:(id)arg6;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4 uiIDKeyScene:(unsigned int)arg5 editImageAttr:(id)arg6 roomTodoFlag:(BOOL)arg7;
+ (id)GetMsgForbiddenBriefDesc:(id)arg1;
+ (id)ConvertMsgToTextIfCannotSend:(id)arg1;
+ (BOOL)IsMsgCanSend:(id)arg1;
+ (id)getMsgRealFrom:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getContactHeadImage:(id)arg1;
+ (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2;
+ (void)copySecInfoFromMsg:(id)arg1 toMsg:(id)arg2;
+ (id)textMsgFromMsgWrap:(id)arg1;
+ (id)GenTextMsgWithContent:(id)arg1;
+ (id)imgMsgFromMsgWrap:(id)arg1;
+ (id)appMsgFromMsgWrap:(id)arg1;
+ (id)genForwardAppRecordItemFromMsg:(id)arg1;
+ (id)checkSourcePathFileFromMsg:(id)arg1 withDataList:(id)arg2;
+ (id)emojiMsgFromMsgWrap:(id)arg1;
+ (id)cardMsgFromMsgWrap:(id)arg1;
+ (id)locMsgFromMsgWrap:(id)arg1;
+ (id)readerAppMsgFromReaderWrap:(id)arg1;
+ (id)GenForwardVideoFromMsgWrap:(id)arg1;
+ (double)getTotalSize:(id)arg1;
+ (id)getDataSizeDescription:(unsigned int)arg1;
+ (void)StatForwardMultiMsgs:(id)arg1 targets:(id)arg2 scene:(unsigned long long)arg3 didSend:(BOOL)arg4 isRecord:(BOOL)arg5 isToWeWork:(BOOL)arg6 hasMessage:(BOOL)arg7;
+ (unsigned int)ForwardStatSceneFrom:(unsigned long long)arg1;
+ (id)GenerateClassifiedStatFromMsgList:(id)arg1;
+ (BOOL)IsWeAppMsgWithMessageWrap:(id)arg1;
@end


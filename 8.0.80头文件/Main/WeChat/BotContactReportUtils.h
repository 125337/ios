@interface BotContactReportUtils : MMObject
+ (void)reportAddrbookAddClickWithUsername:(id)arg1 addScene:(unsigned long long)arg2;
+ (void)reportAddrbookAddSuccWithUsername:(id)arg1 addScene:(unsigned long long)arg2;
+ (void)reportMsgTopOpenWithUsername:(id)arg1;
+ (void)reportMsgTopCloseWithUsername:(id)arg1;
+ (void)reportMsgNotifyCloseWithUsername:(id)arg1;
+ (void)reportMsgNotifyOpenWithUsername:(id)arg1;
+ (void)reportMsgClearCellClickWithUsername:(id)arg1;
+ (void)reportMsgClearSuccWithUsername:(id)arg1;
+ (void)reportAddrbookPlusClickWithUsername:(id)arg1;
+ (void)reportFindChatHistoryClickWithUsername:(id)arg1;
+ (void)reportChangeCommentCellClickWithUsername:(id)arg1;
+ (void)reportChangeCommentSuccWithUsername:(id)arg1;
+ (void)reportChangeHeadImgCellClickWithUsername:(id)arg1;
+ (void)reportChangeHeadImgSuccWithUsername:(id)arg1;
+ (void)reportAddrbookDeleteCellClickWithUsername:(id)arg1;
+ (void)reportAddrbookDeleteSecondClickWithUsername:(id)arg1;
+ (void)reportAddrbookDeleteSuccWithUsername:(id)arg1;
+ (void)configProfilePageReportWithViewController:(id)arg1 username:(id)arg2 isFriend:(BOOL)arg3;
+ (void)configSetPageReportWithViewController:(id)arg1 username:(id)arg2;
+ (void)configChatSinglePageReportWithViewController:(id)arg1 username:(id)arg2;
+ (void)reportSendWeclawbotMsgWithMsgId:(id)arg1 msgType:(long long)arg2 subMsgType:(long long)arg3 username:(id)arg4;
+ (void)reportReceiveWeclawbotMsgWithMsgId:(id)arg1 msgType:(long long)arg2 subMsgType:(long long)arg3 username:(id)arg4;
@end

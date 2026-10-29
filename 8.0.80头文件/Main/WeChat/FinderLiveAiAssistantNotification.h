@interface FinderLiveAiAssistantNotification : WXPBGeneratedMessage
+ (id)getClientInvokeMsgId;
+ (void)initialize;
- (id)liveJumpInfo;
- (BOOL)isDialogMessage;
- (BOOL)isSameInfo:(id)arg1;
- (BOOL)isSameDialogSession:(id)arg1;
- (BOOL)isClientInvokeMsg;
- (BOOL)isFirstTimeInfo;
@end

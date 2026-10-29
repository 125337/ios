@interface MultiTalkMonoMsgIdKeyReport : NSObject
+ (void)reportId:(int)arg1 Key:(int)arg2;
+ (void)msgServerBlockMultiTalk;
+ (void)msgSyncInvite;
+ (void)msgSyncCancel;
+ (void)logicStartErrorMsgType;
+ (void)logicStartErrorNotInviteMsg;
+ (void)logicStartErrorMsgNotVaild;
+ (void)logicStartStrangerAutoReject;
+ (void)logicStartUIOk;
+ (void)logicStartShowNotification;
+ (void)logicRejectErrorMsgType;
+ (void)logicRejectErrorNotInviteMsg;
+ (void)logicRejectErrorMsgNotVaild;
+ (void)logicRejectMsgThaSameWithUI;
+ (void)logicRejectOk;
+ (void)logicCancelErrorMsgType;
+ (void)logicCancelErrorNotCancelMsg;
+ (void)logicCancelErrorMsgNotVaild;
+ (void)logicCancelCloseNotification;
+ (void)logicCancelOk;
+ (void)pushKitReceiveMsg;
+ (void)sysCallCannotCreate;
+ (void)sysCallCannotAccept;
@end

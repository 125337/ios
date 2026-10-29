@interface MsgHelper : NSObject
+ (id)GetChatName:(id)arg1 Des:(unsigned int *)arg2;
+ (BOOL)InternalCanNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (BOOL)newXMLCannotAddToDB:(id)arg1;
+ (BOOL)AppMsgCannotAddToDB:(id)arg1;
+ (BOOL)isCannotAddToDBWithVideoMsg:(id)arg1;
+ (BOOL)CanNotAddToDB:(id)arg1 ChatName:(id)arg2;
+ (BOOL)IsNotifyOnNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (BOOL)HandleThumb:(id)arg1 Message:(id)arg2 Lock:(id)arg3;
+ (void)ClearDownloadData:(id)arg1 ChatName:(id)arg2;
+ (BOOL)AddMessageToNewWCPayBizExt:(id)arg1 DB:(id)arg2 type:(int)arg3;
+ (BOOL)AddMessageToWCPayMsgBizExt:(id)arg1 DB:(id)arg2;
+ (BOOL)ProcessOnAddNewMsg:(id)arg1 ChatName:(id)arg2 Lock:(id)arg3;
+ (BOOL)AddMsgInfo:(id)arg1 withHandle:(id)arg2;
+ (BOOL)AddExtMsgInfo:(id)arg1 withHandle:(id)arg2;
+ (BOOL)IsShowPush:(BOOL)arg1 Des:(unsigned int)arg2 Msg:(id)arg3;
@end


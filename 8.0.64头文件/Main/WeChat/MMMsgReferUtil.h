@interface MMMsgReferUtil : NSObject
+ (unsigned int)GetReportMsgType:(id)arg1;
+ (void)ReportSendReferMsg:(id)arg1 chatName:(id)arg2;
+ (void)ReportClickReferMsg:(id)arg1 chatName:(id)arg2 hasLocalMsg:(BOOL)arg3;
+ (void)ReportMsg:(id)arg1 action:(unsigned int)arg2;
+ (void)ReportFavReferMsgItem:(id)arg1 action:(unsigned int)arg2;
+ (void)ReportMsg:(id)arg1 action:(unsigned int)arg2 scene:(unsigned int)arg3;
+ (BOOL)isExptReplyMsgOpen;
+ (BOOL)isOpenTextSelectReplyMsg;
+ (BOOL)isOpenNewPartReferMaskBlur;
+ (BOOL)isOpenVideoImageReplyMsg;
+ (BOOL)isReplyNewStyleOpen;
+ (id)getReplyMsg:(id)arg1;
+ (void)resetReplyMsg:(id)arg1;
@end

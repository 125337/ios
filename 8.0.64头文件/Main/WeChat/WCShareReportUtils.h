@interface WCShareReportUtils : NSObject
+ (BOOL)isYuanbaoInstall;
+ (id)getEnterSource:(id)arg1;
+ (id)getMsgWrapWithMsgIDList:(id)arg1 chatName:(id)arg2;
+ (id)generateMsgListDesc:(id)arg1;
+ (id)getMultiSelecCommonReportParams:(id)arg1 chatName:(id)arg2;
+ (void)reportMultiToolButtonClick:(id)arg1 chatName:(id)arg2 selectMsgLocalIds:(id)arg3;
@end

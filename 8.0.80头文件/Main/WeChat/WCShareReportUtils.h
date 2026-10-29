@interface WCShareReportUtils : NSObject
+ (BOOL)isYuanbaoInstall;
+ (id)systemShareReportParamsWithBaseParams:(id)arg1;
+ (id)getEnterSource:(id)arg1;
+ (id)getMsgWrapWithMsgIDList:(id)arg1 chatName:(id)arg2;
+ (id)generateMsgListDesc:(id)arg1;
+ (id)getMultiSelecCommonReportParams:(id)arg1 chatName:(id)arg2;
+ (id)reportMultiToolButtonClick:(id)arg1 chatName:(id)arg2 params:(id)arg3 selectMsgLocalIds:(id)arg4;
@end

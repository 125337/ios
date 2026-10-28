@interface ClickCommandRequestFiller : NSObject
+ (void)fillMsgSource:(id)arg1;
+ (void)fillBTSessionID:(id)arg1;
+ (void)fillClickInfo:(id)arg1 location:(id)arg2 errCode:(unsigned int)arg3;
+ (void)fillClickInfoWithEventXML:(id)arg1;
+ (void)fillClickInfo:(id)arg1 reqInfo:(id)arg2;
+ (void)fillSessionStat:(id)arg1;
@end

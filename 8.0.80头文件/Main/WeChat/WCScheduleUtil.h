@interface WCScheduleUtil : MMObject
+ (id)convertMessageWrapToScheduleItem:(id)arg1;
+ (id)convertWebViewURLToScheduleItem:(id)arg1 title:(id)arg2 urlType:(int)arg3;
+ (id)extractShowContentFromMessage:(id)arg1;
+ (id)convertRemindToScheduleItem:(id)arg1;
+ (id)convertScheduleItemToRemind:(id)arg1;
+ (id)preferredDateForMsgContent:(id)arg1;
+ (void)reportScheduleItemAction:(unsigned long long)arg1 isChatroom:(BOOL)arg2 ContentDateInfo:(id)arg3 finalInterval:(unsigned int)arg4 selectedRecommendInterval:(unsigned int)arg5 chatName:(id)arg6;
+ (id)databasePath;
+ (BOOL)shouldShowScheduleButtonAtWebView;
@end

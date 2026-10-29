@interface WCScheduleUtil : MMObject
+ (id)convertMessageWrapToScheduleItem:(id)arg1;
+ (id)extractShowContentFromMessage:(id)arg1;
+ (id)convertRemindToScheduleItem:(id)arg1;
+ (id)convertScheduleItemToRemind:(id)arg1;
+ (id)preferredDateForMsgContent:(id)arg1;
+ (void)reportScheduleItemSetSuccess:(BOOL)arg1 isChatroom:(BOOL)arg2;
+ (id)databasePath;
@end


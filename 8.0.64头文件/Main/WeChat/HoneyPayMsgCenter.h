@interface HoneyPayMsgCenter : NSObject
+ (BOOL)isHoneyPayMessageForNewWCPayBizExt:(id)arg1;
+ (void)handleUpdate:(id)arg1;
+ (void)updateMessageWithBizId:(id)arg1 chatName:(id)arg2 content:(id)arg3;
+ (void)addDataSysMessage:(id)arg1 chatName:(id)arg2;
+ (void)handleClickMessage:(id)arg1;
+ (id)getMsg:(id)arg1 chatterName:(id)arg2;
+ (BOOL)hanldeClickSysMsg:(id)arg1 chatterName:(id)arg2 nodeViewDelegate:(id)arg3;
+ (id)summayText:(id)arg1;
@end

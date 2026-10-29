@interface WCPayPocketMoneyMsgCenter : NSObject
+ (BOOL)handleClickSysMsg:(id)arg1 chatterName:(id)arg2 nodeViewDelegate:(id)arg3;
+ (void)handleClickMessage:(id)arg1;
+ (void)handleNewXmlMsg:(id)arg1;
+ (void)sendSystemMessage:(id)arg1 toChat:(id)arg2;
@end


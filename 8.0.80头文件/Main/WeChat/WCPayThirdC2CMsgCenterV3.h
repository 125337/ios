@interface WCPayThirdC2CMsgCenterV3 : NSObject
+ (BOOL)handleClickMessage:(id)arg1;
+ (BOOL)handleThirdC2CRouteInfo:(id)arg1;
+ (BOOL)handleClickSysMsg:(id)arg1 chatterName:(id)arg2 nodeViewDelegate:(id)arg3;
+ (void)handleNewXmlMsg:(id)arg1;
+ (void)handleNewXmlMsgWithInsert:(id)arg1;
+ (void)updateMsgSvridIfNeed:(unsigned long long)arg1 bizId:(id)arg2 chatName:(id)arg3;
+ (void)insertNewMessageWithFromUser:(id)arg1 toUser:(id)arg2 content:(id)arg3 msgsvrid:(unsigned long long)arg4;
+ (void)updateMessageWithBizId:(id)arg1 chatName:(id)arg2 content:(id)arg3;
+ (void)addDataSysMessage:(id)arg1 chatName:(id)arg2;
+ (void)parseSysMsgXml:(id)arg1 outFromUser:(id *)arg2 outToUser:(id *)arg3 outContent:(id *)arg4 outSysTip:(id *)arg5 outPaymsgId:(id *)arg6 outMsgsvrid:(unsigned long long *)arg7;
@end

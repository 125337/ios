@interface BizCreationNotifyMsgExtMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    NSMutableSet * _seenXmls; // +0x8
    BOOL _pendingFlush; // +0x10
}
- (void)onServiceInit;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)schedulePendingFlush;
- (id)parsePayloadFromXml:(id)arg1;
- (void).cxx_destruct;
@end

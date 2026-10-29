@interface MessageManagerImpl : NSObject <MessageManagerBase, IMsgExt>
{
    MessageManagerCallback * callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)receiveNewXMLMessage:(id)arg1 msgType:(id)arg2 msgSubType:(id)arg3 newXmlMsg:(id)arg4 createTime:(int)arg5;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
@end

@interface _TtC6WeChat16EcsGiftMsgRecord : NSObject
{
     giftMsgId; // +0x8
     msgLocalId; // +0x18
     userName; // +0x20
     hasMsgClicked; // +0x30
     appMsgSign; // +0x38
}
- (id)giftMsgId;
- (void)setGiftMsgId:(id)arg1;
- (long long)msgLocalId;
- (void)setMsgLocalId:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (long long)hasMsgClicked;
- (void)setHasMsgClicked:(long long)arg1;
- (id)appMsgSign;
- (void)setAppMsgSign:(id)arg1;
- (id)init:(id)arg1 msgLocalId:(long long)arg2 userName:(id)arg3 hasMsgClicked:(long long)arg4 appMsgSign:(id)arg5;
- (id)init;
- (void).cxx_destruct;
@end

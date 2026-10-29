@interface _TtC6WeChat16EcsGiftMsgRecord : NSObject
{
    void * giftMsgId; // +0x8
    long long msgLocalId; // +0x18
    void * userName; // +0x20
    long long hasMsgClicked; // +0x30
    void * appMsgSign; // +0x38
    long long hasOpenPagPlayed; // +0x48
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
- (long long)hasOpenPagPlayed;
- (void)setHasOpenPagPlayed:(long long)arg1;
- (id)init:(id)arg1 msgLocalId:(long long)arg2 userName:(id)arg3 hasMsgClicked:(long long)arg4 appMsgSign:(id)arg5 hasOpenPagPlayed:(long long)arg6;
- (id)init;
- (void).cxx_destruct;
@end

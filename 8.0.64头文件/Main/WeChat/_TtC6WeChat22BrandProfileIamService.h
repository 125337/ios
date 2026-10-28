@interface _TtC6WeChat22BrandProfileIamService : MMUserService <TingFlowPlayerNotification, BrandAudioServiceExt, MMServiceProtocol>
{
     audioListeners; // +0x8
}
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (id)init;
- (void).cxx_destruct;
@end

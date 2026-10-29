@interface WAJSEventHandler_joinVoIPChat : WAJSEventHandler_OpenVoiceBase
{
    NSString * busiAppId; // +0x8
    int lastJoinSuccTicks; // +0x10
    int maxMember; // +0x14
    int currentPeakRoomMemberCount; // +0x18
    long long startTicks; // +0x20
}
- (id)init;
- (void)reset;
- (void)handleJSEvent:(id)arg1;
- (void).cxx_destruct;
@end


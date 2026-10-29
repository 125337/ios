@interface VoIPViewControllerIlinkServiceObserver : NSObject <IlinkServiceToMultiTalkMgr>
{
    id <VoIPViewControllerIlinkServiceObserverDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)ilinkDidEnd;
- (void)onIlinkChangeToMultiTalk:(id)arg1;
- (void)hangupMultiTalkByCallEnd:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

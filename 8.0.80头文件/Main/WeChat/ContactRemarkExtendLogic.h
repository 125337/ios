@interface ContactRemarkExtendLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * m_dicStrangerContactRemark; // +0x8
    id <ContactRemarkExtendLogicDelegate> _delegate; // +0x10
}
- (id)init;
- (void)setContactPropertyRemark:(id)arg1 newRemark:(id)arg2 chatRoomUserName:(id)arg3;
- (void)onSetContactPropertyRemark:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

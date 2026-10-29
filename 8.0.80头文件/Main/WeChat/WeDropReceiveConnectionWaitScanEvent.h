@interface WeDropReceiveConnectionWaitScanEvent : WeDropReceiveEvent <IMsgExt, INearConnectionServiceExt>
{
    BOOL _didConnectToAWDL; // +0x8
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onReceiveNewXMLWithTaskId:(id)arg1 msg:(id)arg2;
- (void)onGotConnectionFromRemote;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNearConnectionConnected:(id)arg1 port:(int)arg2;
- (BOOL)didConnectToAWDL;
- (void)setDidConnectToAWDL:(BOOL)arg1;
@end

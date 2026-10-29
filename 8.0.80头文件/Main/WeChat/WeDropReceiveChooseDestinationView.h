@interface WeDropReceiveChooseDestinationView : WeDropBaseView <WeDropStopFooterDelegate, WeDropStopWithStrongConfirmFooterDelegate>
{
    MigrateMsgUserInfo * _userInfo; // +0x8
}
- (id)initWithPeerInfo:(id)arg1;
- (void)initSubviews;
- (void)onStopTapped;
- (void)onConfirmTapped;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

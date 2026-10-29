@interface WeDropSendPermissionErrorView : WeDropBaseView <WeDropStopWithRetryFooterDelegate, WeDropStopFooterDelegate>
{
    MigrateMsgUserInfo * _peerInfo; // +0x8
}
- (id)initWithPeerInfo:(id)arg1;
- (void)onWiFiOnChanged:(BOOL)arg1;
- (void)onLocalNetworkChanged:(BOOL)arg1;
- (void)initSubviews;
- (void)onRetryTapped;
- (void)onStopTapped;
- (id)peerInfo;
- (void)setPeerInfo:(id)arg1;
- (void).cxx_destruct;
@end

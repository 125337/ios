@interface WeDropSendConnectingView : WeDropBaseView <WeDropStopFooterDelegate>
{
    MigrateMsgUserInfo * _userInfo; // +0x8
    NSString * _hotspotSSID; // +0x10
}
- (id)initWithPeerInfo:(id)arg1 hotspotSSID:(id)arg2;
- (void)initSubviews;
- (void)onStopTapped;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)hotspotSSID;
- (void)setHotspotSSID:(id)arg1;
- (void).cxx_destruct;
@end

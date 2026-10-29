@interface WeDropSendConnectedView : WeDropBaseView <WeDropStopFooterDelegate, WeDropSendConnectedViewDelegate>
{
    MigrateMsgUserInfo * _userInfo; // +0x8
    NSMutableArray * _lastSendInfo; // +0x10
}
- (id)initWithPeerInfo:(id)arg1 lastSendInfo:(id)arg2;
- (void)onLastSendInfoInvalid;
- (void)initSubviews;
- (void)onStopTapped;
- (void)selectAlbums;
- (void)selectFiles;
- (void)selectLastSend;
- (void)onStopSelectFile;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)lastSendInfo;
- (void)setLastSendInfo:(id)arg1;
- (void).cxx_destruct;
@end

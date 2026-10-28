@interface ViewAppMsgController : NSObject <AppDetailDelegate, WCNetworkMediaPlayerDelegate>
{
    MMUIViewController * m_fromVC; // +0x8
    id <ViewAppMsgControllerDelegate> m_delegate; // +0x10
    MMUIWindow * m_fullScreenWindow; // +0x18
    CMessageWrap * m_curWrapMsg; // +0x20
    CGRect m_originFrame; // +0x28
    UIImageView * m_thumbImageVew; // +0x48
}
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)PreviewAppMsg:(id)arg1 Pop:(BOOL)arg2;
- (void)viewAppMsg:(id)arg1;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(CGRect)arg3 delegate:(id)arg4;
- (void)viewAppMsg:(id)arg1 msg:(id)arg2 originFrame:(CGRect)arg3 thumbImageView:(id)arg4 delegate:(id)arg5;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void).cxx_destruct;
@end

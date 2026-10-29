@interface MsgImgFullScreenWindow : MMUIWindow <WCNetworkMediaPlayerDelegate>
{
    NSString * _chatname; // +0x8
    id <MsgImgFullScreenWindowDelegate> m_delegate; // +0x10
    CMessageWrap * m_tempMessageWrap; // +0x18
    BOOL m_bCloseForViewDetail; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)viewAlreadyShow;
- (BOOL)isForAd:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1;
- (id)getWCNetworkMediaPlayer:(id)arg1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (id)chatname;
- (void)setChatname:(id)arg1;
- (void).cxx_destruct;
@end

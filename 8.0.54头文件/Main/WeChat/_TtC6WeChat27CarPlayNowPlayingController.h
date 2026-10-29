@interface _TtC6WeChat27CarPlayNowPlayingController : _TtC6WeChat17CarPlayController <TingFlowPlayerNotification, ITingPlayCenterMgrExt, CPNowPlayingTemplateObserver, TingDiscoverTapeExt, _TtP6WeChat13ICarPlayUIExt_>
{
     nowPlayingTemplate; // +0x10
     repeatBtn; // +0x18
     shuffleBtn; // +0x20
     discoverTapeMgr; // +0x28
     playingItem; // +0x30
     playingCommentInfo; // +0x38
     playingPlayList; // +0x40
     playerPlayList; // +0x48
}
- (void)dealloc;
- (void)flowPlayer:(id)arg1 onPlayerInfoEvent:(int)arg2 message:(id)arg3;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)nowPlayingControllerWillAppear;
- (void)nowPlayingTemplateUpNextButtonTapped:(id)arg1;
- (void)onPlayerLikeOp:(BOOL)arg1 listenId:(id)arg2;
- (void).cxx_destruct;
@end


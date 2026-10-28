@interface _TtC6WeChat14CarPlayTingMgr : MMUserService <MMServiceProtocol, _TtP6WeChat13ICarPlayUIExt_>
{
     $__lazy_storage_$_tapeListController; // +0x8
     $__lazy_storage_$_audioListController; // +0x10
     nowPlayingController; // +0x18
     recentPlayListCache; // +0x20
     recentTapeDetailController; // +0x28
     $__lazy_storage_$_discoverTapeMgr; // +0x30
}
- (id)init;
- (void)dealloc;
- (id)safeGetCurrentTingPlayer;
- (id)getListenLaterTapeItem;
- (id)getRecommendTapeItem;
- (id)getTapeListController;
- (id)getAudioListController;
- (void)onEnterTapeDetailPageWithTapeItem:(id)arg1;
- (void)showNowPlayingController;
- (id)getCurrentPlayingItem;
- (void)closeNowPlayingPlayerIfNeed;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)onSelectedTabController:(id)arg1;
- (void).cxx_destruct;
@end

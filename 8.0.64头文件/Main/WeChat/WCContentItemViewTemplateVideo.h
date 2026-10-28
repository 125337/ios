@interface WCContentItemViewTemplateVideo : WCContentItemBaseView <WCSNSNodeVideoViewDelegate>
{
    WCSNSNodeVideoView * _videoView; // +0x38
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x40
    WCMediaItem * m_oMediaItem; // +0x48
    BOOL _shouldIgnoreLongPress; // +0x50
    unsigned long long _legalityType; // +0x58
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 withScene:(unsigned long long)arg3;
- (void)setNonInteractive;
- (void)currentAutoPlayVideoWillChange;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onClickWCSight:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)OnSilencePlay;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onLongTouch;
- (void)onMore:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)showVideoView;
- (id)getVisibleViewController;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (unsigned long long)legalityType;
- (void)setLegalityType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

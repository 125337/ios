@interface WCContentItemViewTemplateNewSight : WCContentItemBaseView <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCAdCommonInteractionLogicDelegate, WCSightViewDelegate>
{
    WCSightView * _sightView; // +0x38
    UIImageView * _adActionIconView; // +0x40
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x48
    unsigned long long _legalityType; // +0x50
    WCAdLiveDisplayView * _liveDisplayView; // +0x58
    MMUIView * _mediaHolder; // +0x60
    WCAdFinderLivePlayerView * _finderLivePlayerView; // +0x68
    WCAdFinderLiveLogic * _finderLiveLogic; // +0x70
    WCAdCommonInteractionLogic * _commonInteractionLogic; // +0x78
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)initMediaView:(id)arg1 mediaItem:(id)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 withScene:(unsigned long long)arg3;
- (id)createSightView:(id)arg1 mediaItem:(id)arg2 size:(CGSize)arg3;
- (void)addSightView:(id)arg1 mediaItem:(id)arg2;
- (id)createFinderLivePlayer:(id)arg1;
- (void)addFinderLivePlayer:(id)arg1;
- (void)onClickFinderLivePlayer;
- (id)finderLiveLogic;
- (id)sightVideoPath;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (double)fetchVideoCurrentPlaybackTime;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDecelerating;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)initLiveInfoView:(id)arg1;
- (void)updateLiveStatus:(int)arg1;
- (id)commonInteractionLogic;
- (id)interactionView;
- (void)initInteractionViewWithDataItem:(id)arg1;
- (id)onAdCommonInteractionLogicFetchDataItem;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (void)onAdCommonInteractionLogicShakeActionFired;
- (void)onClickWCSight:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onShowSightAction;
- (void)onLongTouch;
- (void)onFavoriteAdd:(id)arg1;
- (void)onShareToOpenSDK;
- (BOOL)canShareToOpenSDK;
- (void)onMore:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getVisibleViewController;
- (void)sendSightToFriend;
- (void)onExposeWithDataItem;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (unsigned long long)legalityType;
- (void)setLegalityType:(unsigned long long)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (id)mediaHolder;
- (void)setMediaHolder:(id)arg1;
- (id)finderLivePlayerView;
- (void)setFinderLivePlayerView:(id)arg1;
- (void)setFinderLiveLogic:(id)arg1;
- (void)setCommonInteractionLogic:(id)arg1;
- (void).cxx_destruct;
@end


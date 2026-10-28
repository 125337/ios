@interface WCTimeLineAdCombinedGridView : WCContentItemBaseView <WCImageViewDelegate>
{
    unsigned int _liveStatus; // +0x38
    UIView * _mainMediaHolder; // +0x40
    WCSightView * _mainSightView; // +0x48
    WCImageView * _mainImageView; // +0x50
    UIButton * _mainTouchButton; // +0x58
    UIView * _gridView; // +0x60
    WCAdLiveDisplayView * _liveDisplayView; // +0x68
    WCAdLiveLikeAnimationView * _liveLikeAnimationView; // +0x70
    WCAdFinderLivePlayerView * _finderLivePlayerView; // +0x78
    WCAdFinderLiveLogic * _finderLiveLogic; // +0x80
}
+ (double)heightForDataItem:(id)arg1;
+ (double)heightForGridViewForDataItem:(id)arg1;
+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(BOOL)arg2 dataItem:(id)arg3;
+ (BOOL)isBigMode:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addSightViewWithMediaItem:(id)arg1;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (id)createSightView:(id)arg1;
- (id)mainMediaHolder;
- (id)gridView;
- (id)mainTouchButton;
- (void)appendGridItemsToView:(id)arg1;
- (id)generateImageViewForMediaItem:(id)arg1;
- (void)appendActionIconToView:(id)arg1 clickActionInfo:(id)arg2 isMain:(BOOL)arg3;
- (void)onClickMainButton:(id)arg1 forEvent:(id)arg2;
- (void)onCombinedGridClickedIsMainItem:(BOOL)arg1 index:(long long)arg2 clickedView:(id)arg3;
- (void)onClickWCImage:(id)arg1;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)finderLiveLogic;
- (void)initLiveInfoView:(id)arg1;
- (id)createLiveLikeAnimationView;
- (void)updateLiveStatus:(int)arg1;
- (void)tryStartLiveLikeAnimation;
- (void)stopLiveLikeAnimation;
- (id)createFinderLivePlayer:(id)arg1;
- (void)addFinderLivePlayer:(id)arg1;
- (void)setMainMediaHolder:(id)arg1;
- (id)mainSightView;
- (void)setMainSightView:(id)arg1;
- (id)mainImageView;
- (void)setMainImageView:(id)arg1;
- (void)setMainTouchButton:(id)arg1;
- (void)setGridView:(id)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (id)liveLikeAnimationView;
- (void)setLiveLikeAnimationView:(id)arg1;
- (id)finderLivePlayerView;
- (void)setFinderLivePlayerView:(id)arg1;
- (void)setFinderLiveLogic:(id)arg1;
- (void).cxx_destruct;
@end

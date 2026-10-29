@interface WCTimeLineAdFullCardSightView : WCSightView <MMImageLoaderObserver, WCAdInteractionViewDelegate, WCAdInteractionCoverViewDelegate>
{
    BOOL _stopCheckingTimerForMaskImg; // +0x9
    BOOL _stopCheckingTimerForCoverImg; // +0xa
    BOOL _isKeyboardVisible; // +0xb
    MMUIImageView * _maskImgView; // +0x10
    MMUIImageView * _coverImgView; // +0x18
    UIView * _endCoverView; // +0x20
    MMUIImageView * _endCoverTitleImageView; // +0x28
    MMUIImageView * _endCoverAmbientImageView; // +0x30
    MMTimer * _endCoverTimer; // +0x38
    MMTimer * _endCoverReplayTimer; // +0x40
    unsigned long long _endCoverExposureStartTimestamp; // +0x48
    WCStatTimerHelper * _endCoverExposureTimer; // +0x50
    WCAdInteractionView * _twistView; // +0x58
    WCAdInteractionCoverView * _interactionCoverView; // +0x60
    WCAdFullCardContentContainerView * _contentContainerView; // +0x68
}
- (id)initWithMediaData:(id)arg1 withFrame:(CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4;
- (void)initSubviewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onWCPlayerPlayEnd:(BOOL)arg1;
- (void)setupWCPlayerView;
- (void)exitVideoPlay;
- (void)setContentHidden:(BOOL)arg1;
- (void)customPlayerInfo:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (id)fetchContentContainerView;
- (void)addMaskAndCoverImage:(id)arg1;
- (void)initMaskAndCoverImage:(id)arg1 isForMaskImg:(BOOL)arg2;
- (void)downloadAndSetImage:(id)arg1 isForMaskImg:(BOOL)arg2;
- (void)showOrHiddenMaskAndCoverImg:(BOOL)arg1 isForMaskImg:(BOOL)arg2;
- (void)checkMaskImageState:(double)arg1;
- (void)checkCoverImageState:(double)arg1;
- (void)checkMaskAndCoverImgStateByTime:(double)arg1;
- (void)checkContentContainerAnimationByTime:(double)arg1;
- (void)showAnimationBar;
- (void)resetAnimationBar;
- (void)showOrHideViewWithAnimation:(id)arg1 isShow:(BOOL)arg2;
- (void)addEndCoverView;
- (void)showEndCoverView;
- (void)hideEndCoverView;
- (void)hideEndCoverViewWithAnimation:(BOOL)arg1;
- (void)replayVideoByTimer;
- (void)initEndCoverTimers;
- (void)invalidateEndCoverTimers;
- (void)pauseEndCover;
- (void)resumeEndCover;
- (void)pauseEndCoverTimers;
- (void)resumeEndCoverTimers;
- (BOOL)isEndCoverInfoValid;
- (BOOL)isEndCoverViewVisible;
- (id)endCoverView;
- (void)initEndCoverReportInfo;
- (void)sightViewDidEndDisplaying;
- (void)sightViewWillDisappear;
- (void)sightViewDidEndDecelerating;
- (void)reportEndCoverExposureInfo;
- (void)sightViewDidBeClicked;
- (void)reportEndCoverClickInfo;
- (int)fetchReportScene;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onSightViewEnterBackground:(id)arg1;
- (void)onSightViewEnterForeground:(id)arg1;
- (id)fetchImageForImgUrl:(id)arg1;
- (void)handleTwistADWithPlaybackTime:(double)arg1;
- (void)showTwistView;
- (void)hideTwistView;
- (void)suspendTwistView;
- (void)updateTwistActivity;
- (void)updateTwistCurrentVideoTime:(double)arg1;
- (void)addInteractionViewWith:(id)arg1;
- (void)reportForTwistResult:(BOOL)arg1;
- (void)interactionViewDeterminationWasMadeWithRelatedId:(id)arg1 forType:(unsigned long long)arg2;
- (void)addInteractionCoverViewWith:(id)arg1;
- (void)reportForInteractionCoverWithResult:(BOOL)arg1;
- (BOOL)interactionCoverViewIsPlayerPlaying;
- (void)interactionCoverViewDeviceMotionStateChangedToRunning:(BOOL)arg1;
- (void)interactionCoverViewGotAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)maskImgView;
- (void)setMaskImgView:(id)arg1;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (BOOL)stopCheckingTimerForMaskImg;
- (void)setStopCheckingTimerForMaskImg:(BOOL)arg1;
- (BOOL)stopCheckingTimerForCoverImg;
- (void)setStopCheckingTimerForCoverImg:(BOOL)arg1;
- (void)setEndCoverView:(id)arg1;
- (id)endCoverTitleImageView;
- (void)setEndCoverTitleImageView:(id)arg1;
- (id)endCoverAmbientImageView;
- (void)setEndCoverAmbientImageView:(id)arg1;
- (id)endCoverTimer;
- (void)setEndCoverTimer:(id)arg1;
- (id)endCoverReplayTimer;
- (void)setEndCoverReplayTimer:(id)arg1;
- (unsigned long long)endCoverExposureStartTimestamp;
- (void)setEndCoverExposureStartTimestamp:(unsigned long long)arg1;
- (id)endCoverExposureTimer;
- (void)setEndCoverExposureTimer:(id)arg1;
- (BOOL)isKeyboardVisible;
- (void)setIsKeyboardVisible:(BOOL)arg1;
- (id)twistView;
- (void)setTwistView:(id)arg1;
- (id)interactionCoverView;
- (void)setInteractionCoverView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (void).cxx_destruct;
@end

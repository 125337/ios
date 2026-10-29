@interface WCTimeLineAdFullCardView : WCContentItemBaseView <WCSightViewDelegate, WCAdDraggableImageViewDelegate, WCAdBreakFrameViewDelegate>
{
    BOOL _isGestureAd; // +0x38
    BOOL _isDragImageAd; // +0x39
    BOOL _isSocialLikeAttractingAd; // +0x3a
    unsigned int _sourceType; // +0x3c
    unsigned int _liveStatus; // +0x40
    unsigned long long _uiGestureStartTime; // +0x48
    unsigned long long _uiGestureEndTime; // +0x50
    NSArray * _uiGestureTargetPoint; // +0x58
    UIColor * _uiGestureColor; // +0x60
    long long _pointRadius; // +0x68
    UIPanGestureRecognizer * _uiPanGestureRecognizer; // +0x70
    WCGestureRecognizeModel * _recogModel; // +0x78
    UIButton * _adTouchButton; // +0x80
    WCTimeLineAdFullCardSightView * _sightView; // +0x88
    WCAdBreakFrameView * _adBreakFrameView; // +0x90
    CAShapeLayer * _slayer; // +0x98
    UIBezierPath * _bPath; // +0xa0
    NSMutableArray * _sourcePoints; // +0xa8
    WCGestureReportInfo * _gestureReportInfo; // +0xb0
    long long _longPressGestureState; // +0xb8
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0xc0
    WCAdLiveDisplayView * _liveDisplayView; // +0xc8
    WCAdLiveLikeAnimationView * _liveLikeAnimationView; // +0xd0
    WCAdInteractionLabelLogic * _interactionLabelLogic; // +0xd8
    double _lastTouchTimestamp; // +0xe0
    WCAdFullCardDragImageGestureInfo * _dragImageInfo; // +0xe8
    WCAdDraggableImageView * _dragImageView; // +0xf0
    WCAdFinderLivePlayerView * _finderLivePlayerView; // +0xf8
    WCAdFinderLiveLogic * _finderLiveLogic; // +0x100
    WCAdFullCardContentContainerView * _contentContainerView; // +0x108
    CGPoint _lastTouchPoint; // +0x110
}
+ (double)heightForMedia:(id)arg1;
+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(BOOL)arg2 dataItem:(id)arg3;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)addTextContentContainerViewWithData:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)initSightAndCoverView:(id)arg1;
- (void)addSightViewWithMediaItem:(id)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)addFinderLivePlayer:(id)arg1;
- (id)finderLiveLogic;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)setPlayerContentHidden:(BOOL)arg1;
- (id)getPlayerCurrentSnapshot;
- (void)playerSeekToTime:(double)arg1;
- (void)initLiveInfoView:(id)arg1;
- (id)createLiveLikeAnimationView;
- (void)updateLiveStatus:(int)arg1;
- (void)tryStartLiveLikeAnimation;
- (void)stopLiveLikeAnimation;
- (void)checkUpdateLiveInfo;
- (void)addButtonForItem:(id)arg1;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)setAdTouchButtonEnabled:(BOOL)arg1;
- (void)onVoiceOverClick;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDecelerating;
- (id)getVoiceOverStrForTimeline;
- (void)delayClickAdTouchButton;
- (void)delayClearTouchButtonColor;
- (void)onClick:(long long)arg1;
- (void)dealloc;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onActionOccurForGestureType:(long long)arg1;
- (void)onSightViewWillBeClear;
- (void)initUIGesture:(id)arg1;
- (void)startGestureWithoutWCPlayer;
- (void)onUIGesureEvent:(id)arg1;
- (void)registerUIPanGestureRecognizer;
- (void)unregisterUIPanGestureRecognizer;
- (void)handleUIGestureWithPlaybackTime:(double)arg1;
- (id)gestureReportInfo;
- (id)bPath;
- (id)slayer;
- (id)sourcePoints;
- (void)onGestureEnd:(CGPoint)arg1;
- (id)createGestureModelWith:(id)arg1;
- (long long)getSamplingInterval:(long long)arg1;
- (id)interactionLabelLogic;
- (id)pickCardLogic;
- (id)marketingBannerLogic;
- (id)brandTopicBannerLogic;
- (id)extBarContainerView;
- (void)initLongPressGestureWith:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleLongPressGestureWithPlaybackTime:(double)arg1;
- (void)addLongPressGestureRecognizer;
- (void)removeLongPressGestureRecognizer;
- (void)onLongPressDone;
- (void)sightViewLongPressGestureEnd;
- (void)startLongPressActionReport;
- (void)endLongPressActionReportWithResult:(unsigned long long)arg1;
- (void)handleDragImageGestureWithPlaybackTime:(double)arg1;
- (void)initDragImageView:(id)arg1;
- (id)dragImageView;
- (void)onDraggableImageViewDidBeginToDrag;
- (void)onDraggableImageViewDidDragEndWithDuration:(unsigned long long)arg1;
- (void)onDraggableImageViewDidDragToDestArea;
- (CGRect)draggableImageViewConvertRect:(CGRect)arg1 toView:(id)arg2;
- (id)getDragImageCurrentView;
- (CGRect)getDragImageDestDisplayRect;
- (void)reportDragImageDidBeginToDrag;
- (void)reportDragImageDidDragEndWithDuration:(unsigned long long)arg1;
- (void)reportDragImageDidDragSuccess;
- (void)initSocialLikeAttracting:(id)arg1;
- (void)handleSocialLikeAttractingWithPlaybackTime:(double)arg1;
- (void)handleFireworkCheerAttractingWithPlaybackTime:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setAdBreakFrameView:(id)arg1;
- (id)fetchJumpOriginView;
- (void)onBreakFramePlaybackTimeUpdate:(double)arg1;
- (void)onBreakFramePlayEnd:(BOOL)arg1;
- (BOOL)isBreakFramePanGesture;
- (void)onGestureAppendEmitterByGesture:(id)arg1;
- (void)onGestureEndEmitters;
- (id)interactionTagLogic;
- (unsigned long long)uiGestureStartTime;
- (void)setUiGestureStartTime:(unsigned long long)arg1;
- (unsigned long long)uiGestureEndTime;
- (void)setUiGestureEndTime:(unsigned long long)arg1;
- (id)uiGestureTargetPoint;
- (void)setUiGestureTargetPoint:(id)arg1;
- (id)uiGestureColor;
- (void)setUiGestureColor:(id)arg1;
- (long long)pointRadius;
- (void)setPointRadius:(long long)arg1;
- (BOOL)isGestureAd;
- (void)setIsGestureAd:(BOOL)arg1;
- (id)uiPanGestureRecognizer;
- (void)setUiPanGestureRecognizer:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)recogModel;
- (void)setRecogModel:(id)arg1;
- (id)adTouchButton;
- (void)setAdTouchButton:(id)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (id)adBreakFrameView;
- (void)setSlayer:(id)arg1;
- (void)setBPath:(id)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setGestureReportInfo:(id)arg1;
- (long long)longPressGestureState;
- (void)setLongPressGestureState:(long long)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (id)liveLikeAnimationView;
- (void)setLiveLikeAnimationView:(id)arg1;
- (void)setInteractionLabelLogic:(id)arg1;
- (CGPoint)lastTouchPoint;
- (void)setLastTouchPoint:(CGPoint)arg1;
- (double)lastTouchTimestamp;
- (void)setLastTouchTimestamp:(double)arg1;
- (BOOL)isDragImageAd;
- (void)setIsDragImageAd:(BOOL)arg1;
- (id)dragImageInfo;
- (void)setDragImageInfo:(id)arg1;
- (void)setDragImageView:(id)arg1;
- (BOOL)isSocialLikeAttractingAd;
- (void)setIsSocialLikeAttractingAd:(BOOL)arg1;
- (id)finderLivePlayerView;
- (void)setFinderLivePlayerView:(id)arg1;
- (void)setFinderLiveLogic:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (void).cxx_destruct;
@end

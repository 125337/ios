@interface WCFinderUnifiedCoverSliderView : MMUIView <WCFinderVideoSliderProtocol>
{
    BOOL _isDequeueing; // +0x8
    id /* block */ _panInteractionDidBeginBlock; // +0x10
    id /* block */ _panInteractionDidEndBlock; // +0x18
    MMUIView * _sliderBarView; // +0x20
    UIImageView * _selectedView; // +0x28
    double _thumbWidth; // +0x30
    double _visibleThumbCount; // +0x38
    NSArray * _normalThumbnails; // +0x40
    NSArray * _zoomThumbnails; // +0x48
    id /* block */ _selectedChangeBlock; // +0x50
    double _keyFrameRate; // +0x58
    UIImage * _speciallyImage; // +0x60
    UIImage * _scaledSpeciallyImage; // +0x68
    id <WCFinderCoverSliderHandler> _snapshotHandler; // +0x70
    NSMutableArray * _snapshotQueue; // +0x78
    NSObject<OS_dispatch_queue> * _loadCoversQueue; // +0x80
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x88
    double _lastLocationX; // +0x90
    WCFinderCoverSliderZoomState * _zoomState; // +0x98
}
- (id)initWithHeight:(double)arg1 maxWidth:(double)arg2;
- (void)dealloc;
- (void)updateMaxWidth:(double)arg1;
- (void)setupGesture;
- (void)setupSubViews;
- (void)setupZoomState;
- (void)setupThumbnailImageViews;
- (void)loadSliderByPlayerAsset:(id)arg1 keyFrameRate:(double)arg2 specialImage:(id)arg3 coverTimeStamp:(double)arg4 selectedChangeBlock:(id /* block */)arg5;
- (void)loadSliderWithKeyFrameRate:(double)arg1 coverSliderHandler:(id)arg2 speciallyImage:(id)arg3 coverTimeStamp:(double)arg4 selectedChangeBlock:(id /* block */)arg5;
- (id)getCurrentResult;
- (id)currentZoomedResult;
- (double)currentRatioWithCenterX:(double)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)enqueueSnapshot;
- (void)dequeueSnapshotIfIdle;
- (void)refreshSelectedView;
- (BOOL)isSpeciallyImageSelected;
- (void)setSelectedViewToSpecialImagePlace;
- (void)setSelectedPlayTime:(double)arg1;
- (void)activateZoom;
- (void)exitZoomWithZoomedResult:(id)arg1;
- (void)loadZoomedThumbnails;
- (void)handleZoomedAnimations;
- (id)timeStringsFromArray:(id)arg1;
- (id)makeThumbnailViewAtIndex:(long long)arg1;
- (id)buildVideoThumbnailTimesWithCount:(double)arg1;
- (void)impactOccurredFeedbackIfNeeded;
- (BOOL)shouldFeedbackInNormalState;
- (void)hideNormalThumbnailIfNeeded;
- (BOOL)shouldHideNormalThumbnailImageView;
- (long long)totalThumbnailCount;
- (id)loadCoversQueue;
- (id)snapshotQueue;
- (id)feedbackGenerator;
- (id /* block */)panInteractionDidBeginBlock;
- (void)setPanInteractionDidBeginBlock:(id /* block */)arg1;
- (id /* block */)panInteractionDidEndBlock;
- (void)setPanInteractionDidEndBlock:(id /* block */)arg1;
- (id)sliderBarView;
- (void)setSliderBarView:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (double)thumbWidth;
- (void)setThumbWidth:(double)arg1;
- (double)visibleThumbCount;
- (void)setVisibleThumbCount:(double)arg1;
- (id)normalThumbnails;
- (void)setNormalThumbnails:(id)arg1;
- (id)zoomThumbnails;
- (void)setZoomThumbnails:(id)arg1;
- (id /* block */)selectedChangeBlock;
- (void)setSelectedChangeBlock:(id /* block */)arg1;
- (double)keyFrameRate;
- (void)setKeyFrameRate:(double)arg1;
- (id)speciallyImage;
- (void)setSpeciallyImage:(id)arg1;
- (id)scaledSpeciallyImage;
- (void)setScaledSpeciallyImage:(id)arg1;
- (id)snapshotHandler;
- (void)setSnapshotHandler:(id)arg1;
- (void)setSnapshotQueue:(id)arg1;
- (BOOL)isDequeueing;
- (void)setIsDequeueing:(BOOL)arg1;
- (void)setLoadCoversQueue:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (double)lastLocationX;
- (void)setLastLocationX:(double)arg1;
- (id)zoomState;
- (void)setZoomState:(id)arg1;
- (void).cxx_destruct;
@end

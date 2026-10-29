@interface OMCPlaybackSession : NSObject
{
    XTMTime _backingPlaybackTime; // +0x8
    XTMTime _backingLastVideoFrameTime; // +0x18
    CADisplayLink * _displayLink; // +0x28
    vector<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>, std::allocator<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>>> _tempSnapshot; // +0x30
    XIKImageQualityCalculator _calc; // +0x48
    NSObject<OS_dispatch_group> * _group; // +0x58
    BOOL _isHandleBoxEnabled; // +0x60
    id /* block */ _videoFrameTimeDidChangeHandler; // +0x68
    id /* block */ _playbackTimeDidChangeHandler; // +0x70
    id /* block */ _playbackDidFinishHandler; // +0x78
    id /* block */ _playbackDidFailHandler; // +0x80
    id /* block */ _playingStateDidEnterHandler; // +0x88
    id /* block */ _playingStateWillLeaveHandler; // +0x90
    id /* block */ _handleBoxSettingsDidChangeFunc; // +0x98
    SharedPtr<XMSPlaybackSession> _backingSession; // +0xa0
    SharedPtr<XMSPlaybackWindowCon> _windowCon; // +0xa8
    UIView * _renderView; // +0xb0
    struct _playbackTime; // +0xb8
    struct _lastVideoFrameTime; // +0xd0
    optional<std::string> _windowName; // +0xe8
}
- (void)registerHandleBoxSettingsDidChangeNotification;
- (id)segmentIDAndFrame:(CGRect *)arg1 atLocation:(CGPoint)arg2;
- (id)segmentIDAndFrame:(CGRect *)arg1 atLocation:(CGPoint)arg2 hitTestInsets:(UIEdgeInsets)arg3;
- (CGRect)renderFrameForSegmentWithID:(id)arg1;
- (CGPoint)calcRenderCoordForPoint:(CGPoint)arg1;
- (CGPoint)calcPointForRenderCoord:(CGPoint)arg1;
- (CGSize)calcViewSizeForRenderSpaceSize:(const void *)arg1;
- (CGRect)calcViewFrameForRenderSpaceFrame:(const void *)arg1;
- (CGPoint)calcViewPointForHandleBoxPoint:(CGPoint)arg1;
- (float)calcRenderSpaceRotationAngleForViewSpaceRotationAngle:(float)arg1;
- (float)calcViewSpaceRotationAngleForRenderSpaceRotationAngle:(float)arg1;
- (CGRect)calcRenderRectForNormalizedViewRect:(CGRect)arg1;
- (void)enableHandleBox;
- (void)disableHandleBox;
- (void)updateHandleBoxEnabled:(BOOL)arg1;
- (void)showHandleBoxForSegment:(id)arg1 itemAtCorners:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 borderStyle:(id)arg4;
- (void)showHandleBoxForSegment:(id)arg1 items:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 borderStyle:(id)arg4;
- (void)showHandleBoxForSegment:(id)arg1 itemAtCorners:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)showHandleBoxForSegment:(id)arg1 items:(id)arg2 titles:(id)arg3 edgeInsets:(UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (void)removeHandleBox;
- (void)removeAllHandleBoxButtons;
- (void)addHandleBoxButtonWithCorner:(int)arg1 buttonImage:(const void *)arg2 buttonImageSize:(const void *)arg3;
- (void)removeAllHandleBoxTitles;
- (void)addHandleBoxTitleWithCorner:(int)arg1 textOverlayDesc:(id)arg2;
- (void)configHandleBoxWithRenderNodeID:(const void *)arg1 enabledRectCornerBits:(unsigned int)arg2 edgeInsets:(const void *)arg3 isHandleBoxEnabled:(BOOL)arg4 borderStyleDesc:(const void *)arg5;
- (CGPoint)renderPointSize;
- (void)isHandleBoxHittedAtLocation:(CGPoint)arg1 inRect:(CGRect)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRenderAreaPositionWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRenderAreaScaleWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRenderAreaRotationWithCompletionHandler:(id /* block */)arg1;
- (void)updateRenderAreaPosition:(CGPoint)arg1;
- (void)updateRenderAreaScale:(double)arg1;
- (void)updateRenderAreaRotation:(double)arg1;
- (void)beginTrackingSafeAreaWithSegmentID:(id)arg1 normalizedSafeRect:(CGRect)arg2 trackingHandler:(id /* block */)arg3;
- (void)endTrackingSafeArea;
- (void)addDecorationBoxesWithConfigs:(id)arg1;
- (void)removeAllDecorationBoxes;
- (void)addDecorationBoxTitleWithSegmentID:(id)arg1 corner:(int)arg2 textOverlayDesc:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)teardownIfNeeded;
- (BOOL)bindRenderView:(id)arg1 error:(id *)arg2;
- (void)unbindRenderView;
- (void)destroyWindowCon;
- (void)openWithTimeline:(id)arg1 initialPreviewTime:(struct)arg2 completionHandler:(id /* block */)arg3;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)close;
- (BOOL)isPlaying;
- (void)startPlayingWithTimeRange:(struct)arg1 initialStartTime:(struct)arg2 playbackLoopCount:(long long)arg3 isAudioEnabled:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (void)updatePlaybackOptionsWithTimeRange:(struct)arg1 playbackLoopCount:(long long)arg2 shouldResetFinishedLoopCount:(BOOL)arg3;
- (void)temporaryUpdatePlaybackDuration:(struct)arg1;
- (void)beginClipSkimmingWithClipSegment:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginClipSkimmingWithClipSegment:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)endClipSkimmingWithCompletionHandler:(id /* block */)arg1;
- (struct)skimToProgress:(double)arg1 forceUpdate:(BOOL)arg2;
- (struct)skimToProgress:(double)arg1 forceUpdate:(BOOL)arg2 shouldNotDrop:(BOOL)arg3;
- (struct)skimToTime:(struct)arg1 forceUpdate:(BOOL)arg2;
- (struct)skimToTime:(struct)arg1 forceUpdate:(BOOL)arg2 shouldNotDrop:(BOOL)arg3;
- (struct)clipSkimToTime:(struct)arg1 forceUpdate:(BOOL)arg2;
- (void)snapshotAtTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)commitUpdateWithTimeline:(id)arg1 previewTime:(struct)arg2 shouldForceUpdatePreview:(BOOL)arg3 isFullUpdate:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)skipRefreshNextVideoFrame;
- (struct)mediaTimeRange;
- (void)startObservingPlaybackTime;
- (void)stopObservingPlaybackTime;
- (void)updatePlaybackTime;
- (void)updatePlaybackTime:(const void *)arg1 timeRange:(const void *)arg2;
- (void)updateVideoFrameTime:(const void *)arg1 timeRange:(const void *)arg2;
- (void)enterClosedTimeRangeModeWithCompletionHandler:(id /* block */)arg1;
- (void)leaveClosedTimeRangeModeWithCompletionHandler:(id /* block */)arg1;
- (void)makeCoverWithCompletionHandler:(id /* block */)arg1;
- (void)makeCoverWithSnapshotOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)videoFrameTimeDidChangeHandler;
- (void)setVideoFrameTimeDidChangeHandler:(id /* block */)arg1;
- (id /* block */)playbackTimeDidChangeHandler;
- (void)setPlaybackTimeDidChangeHandler:(id /* block */)arg1;
- (id /* block */)playbackDidFinishHandler;
- (void)setPlaybackDidFinishHandler:(id /* block */)arg1;
- (id /* block */)playbackDidFailHandler;
- (void)setPlaybackDidFailHandler:(id /* block */)arg1;
- (id /* block */)playingStateDidEnterHandler;
- (void)setPlayingStateDidEnterHandler:(id /* block */)arg1;
- (id /* block */)playingStateWillLeaveHandler;
- (void)setPlayingStateWillLeaveHandler:(id /* block */)arg1;
- (struct)playbackTime;
- (void)setPlaybackTime:(struct)arg1;
- (struct)lastVideoFrameTime;
- (void)setLastVideoFrameTime:(struct)arg1;
- (BOOL)isHandleBoxEnabled;
- (void)setIsHandleBoxEnabled:(BOOL)arg1;
- (id /* block */)handleBoxSettingsDidChangeFunc;
- (void)setHandleBoxSettingsDidChangeFunc:(id /* block */)arg1;
- (optional<std::string>)windowName;
- (void)setWindowName:(optional<std::string>)arg1;
- (SharedPtr<XMSPlaybackSession>)backingSession;
- (SharedPtr<XMSPlaybackWindowCon>)windowCon;
- (void)setWindowCon:(SharedPtr<XMSPlaybackWindowCon>)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


@interface _TtC6WeChat23FinderBulletCoordinator : NSObject
{
    _TtC6WeChat22FinderBulletCanvasView * canvasView; // +0x8
     renderer; // +0x10
     viewPool; // +0x18
     lineScheduler; // +0x20
     dataProvider; // +0x28
     openGuide; // +0x38
     videoClock; // +0x40
     playbackTimeline; // +0x60
     displayLink; // +0x80
    void * contentVM; // +0x88
    int commentScene; // +0x90
    unsigned long long feedViewerScene; // +0x98
    void * openGuideBubbleHost; // +0xa0
     openGuideClosedStateAllowed; // +0xa8
     gap; // +0xb0
     lineSpacing; // +0xb8
     fontCache; // +0xc0
     hasConfigured; // +0xd0
     isLandscape; // +0xd1
     defaultLineCount; // +0xd8
     videoDuration; // +0xe0
     playRate; // +0xe8
     blockBoxes; // +0xf0
     defaultBulletTopPadding; // +0xf8
     lastCalculatedContainerHeight; // +0x100
     recordStore; // +0x108
     $__lazy_storage_$_dataPipeline; // +0x110
     fetchTasks; // +0x118
     nextFetchTaskID; // +0x120
     lastTapEntryId; // +0x0
     isPlayerPlaying; // +0x0
     isApplicationActive; // +0x0
     inactivePlaybackTime; // +0x0
     needsForegroundReconcile; // +0x0
     pendingRendererResumeOnNextRunLoop; // +0x0
     playbackPositionState; // +0x0
     isDisplayCycleActive; // +0x0
     isRuntimeVisible; // +0x0
     exposureTracker; // +0x0
     followController; // +0x0
    void * onRequestShowMenu; // +0x0
    void * onDidSelectItem; // +0x0
    void * onRequestResumePlayback; // +0x0
    void * onRequestOpenDisplayForPosting; // +0x0
}
- (void)presentInputFromViewController:(id)arg1 replyCommentInfo:(id)arg2 showSwitchButton:(BOOL)arg3 preparePlayback:(id /* block */)arg4 onClose:(id /* block */)arg5 onSwitchChange:(id /* block */)arg6;
- (void)postExternalBulletWithText:(id)arg1 commentSource:(int)arg2 videoTimestamp:(double)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)canvasView;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)feedViewerScene;
- (void)setFeedViewerScene:(unsigned long long)arg1;
- (id)openGuideBubbleHost;
- (void)setOpenGuideBubbleHost:(id)arg1;
- (id)followButtonView;
- (id /* block */)onRequestShowMenu;
- (void)setOnRequestShowMenu:(id /* block */)arg1;
- (id /* block */)onDidSelectItem;
- (void)setOnDidSelectItem:(id /* block */)arg1;
- (id /* block */)onRequestResumePlayback;
- (void)setOnRequestResumePlayback:(id /* block */)arg1;
- (id /* block */)onRequestOpenDisplayForPosting;
- (void)setOnRequestOpenDisplayForPosting:(id /* block */)arg1;
- (id)followButtonHost;
- (void)setFollowButtonHost:(id)arg1;
- (id)initWithGap:(double)arg1 lineSpacing:(double)arg2;
- (void)dealloc;
- (void)configureWithContentVM:(id)arg1 commentScene:(int)arg2 isLandscape:(BOOL)arg3 isLandscapeVideo:(BOOL)arg4 videoDuration:(double)arg5 playRate:(double)arg6 blockBoxes:(id)arg7;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)handleSeekCompleteAt:(double)arg1 replayCount:(unsigned long long)arg2;
- (void)beginSeeking;
- (void)beginScrubbing;
- (void)fetchIfNeededAt:(double)arg1;
- (void)injectExternalCommentInfos:(id)arg1 appearPointSeconds:(double)arg2;
- (void)likeRequestDidRollback:(id)arg1;
- (void)likeBulletWithCommentId:(unsigned long long)arg1;
- (void)dislikeBulletWithCommentId:(unsigned long long)arg1;
- (void)removeBulletWithCommentId:(unsigned long long)arg1;
- (void)removeLastTappedLocalBullet;
- (void)blackWordStoreDidMutate:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)willBeginDisplay;
- (void)didBeginDisplay;
- (void)didEndDisplay;
- (void)playerDidStartPlaying;
- (void)playerDidPause;
- (void)playerDidStop;
- (void)applicationWillResignActiveAt:(double)arg1;
- (void)applicationDidBecomeActiveAt:(double)arg1;
- (void)setPlayRate:(double)arg1 at:(double)arg2;
- (void)applyCache;
- (void)unSelectLastTapItem;
- (unsigned long long)lastTapCommentId;
- (id)lastTapCommentInfo;
- (BOOL)isBulletAnimating;
- (id)jumpDebugStateForLog;
- (BOOL)hasExposedOpenGuideBubbleForCurrentFeed;
- (void)updateOpenGuideClosedStateAllowed:(BOOL)arg1;
- (void)openGuideDisplaySwitchDidChangeWithDisabled:(BOOL)arg1;
- (void)invalidateOpenGuide;
- (void)notifyOpenGuideEntryClicked;
- (void)dismissFollowView;
- (id)init;
- (void).cxx_destruct;
@end

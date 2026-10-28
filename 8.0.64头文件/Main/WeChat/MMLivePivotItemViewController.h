@interface MMLivePivotItemViewController : MMUIViewController <MMLivePivotCollectionViewExt, MMFinderPivotLiveViewControllerDelegate>
{
    BOOL _isWatchHistoryLive; // +0x70
    BOOL _isPlaying; // +0x71
    BOOL _isInPreview; // +0x72
    BOOL _inRelatedLivesMode; // +0x73
    BOOL _isPreviewMuted; // +0x74
    BOOL _isMutedByAdVideo; // +0x75
    BOOL _hasPlayedOpenScreenAd; // +0x76
    UINavigationController * _presentingNavCon; // +0x78
    MMLivePivotViewController * _pivotViewController; // +0x80
    MMFinderPivotLiveViewController * _controller; // +0x88
    MMFinderLiveTask * _liveTask; // +0x90
    MMFinderLiveContentVM * _contentVM; // +0x98
    UINavigationController * _navControl; // +0xa0
    UIView * _scrollFxMaskView; // +0xa8
    UIView * _scrollFxBlurCoverView; // +0xb0
    UIView * _backgroundBlurView; // +0xb8
    LiveSdkInfo * _currentLiveSdkInfo; // +0xc0
    unsigned long long _audienceStartLiveMs; // +0xc8
    double _scrollingFxIntensity; // +0xd0
    UIView * _relatedLivesTapDismissView; // +0xd8
    UITapGestureRecognizer * _relatedLivesTapDismissGestureRecognizer; // +0xe0
}
- (id)initWithContentVM:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)setInRelatedLivesMode:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)dismissRelatedLives;
- (void)initControllerViewSettings;
- (void)updateLiveSdkInfo:(id)arg1 finderUserName:(id)arg2;
- (void)prepareLiveTask;
- (void)prepareController;
- (void)checkController;
- (void)clearController;
- (void)startPreview;
- (void)startPreviewMuted:(BOOL)arg1 isInScroll:(BOOL)arg2;
- (void)stopPreview;
- (void)startLive:(unsigned long long)arg1;
- (void)startRejoinLive;
- (BOOL)startLiveWithIsRejoin:(BOOL)arg1 fromSrc:(unsigned long long)arg2;
- (void)endLive;
- (id)liveController;
- (void)layoutController;
- (void)onLiveComplete;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)checkAndResumeLive;
- (void)setPivotScrollingFxWithIntensity:(double)arg1;
- (void)clearPivotScrollingFx;
- (double)blurCoverViewAlphaForIntensity:(double)arg1;
- (BOOL)isFollowState;
- (void)updateAudienceStartLiveTime;
- (BOOL)tryShowOpenScreenAdvertisement;
- (void)checkAndFinishCurrentOpenScreenAdAfterTimeout;
- (id)dataItem;
- (void)preInitialTaskAndController;
- (void)preJoinLiveWithInvokedBlock:(id /* block */)arg1;
- (void)onFinderPivotLiveViewController:(id)arg1 requestReplacementWithReplayForTaskId:(id)arg2;
- (id)presentingNavCon;
- (void)setPresentingNavCon:(id)arg1;
- (id)pivotViewController;
- (void)setPivotViewController:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isWatchHistoryLive;
- (void)setIsWatchHistoryLive:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isInPreview;
- (void)setIsInPreview:(BOOL)arg1;
- (BOOL)inRelatedLivesMode;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)navControl;
- (void)setNavControl:(id)arg1;
- (BOOL)isPreviewMuted;
- (void)setIsPreviewMuted:(BOOL)arg1;
- (BOOL)isMutedByAdVideo;
- (void)setIsMutedByAdVideo:(BOOL)arg1;
- (id)scrollFxMaskView;
- (void)setScrollFxMaskView:(id)arg1;
- (id)scrollFxBlurCoverView;
- (void)setScrollFxBlurCoverView:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)currentLiveSdkInfo;
- (void)setCurrentLiveSdkInfo:(id)arg1;
- (unsigned long long)audienceStartLiveMs;
- (void)setAudienceStartLiveMs:(unsigned long long)arg1;
- (BOOL)hasPlayedOpenScreenAd;
- (void)setHasPlayedOpenScreenAd:(BOOL)arg1;
- (double)scrollingFxIntensity;
- (void)setScrollingFxIntensity:(double)arg1;
- (id)relatedLivesTapDismissView;
- (void)setRelatedLivesTapDismissView:(id)arg1;
- (id)relatedLivesTapDismissGestureRecognizer;
- (void)setRelatedLivesTapDismissGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

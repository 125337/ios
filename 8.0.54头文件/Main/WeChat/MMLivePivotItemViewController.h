@interface MMLivePivotItemViewController : MMUIViewController <MMLivePivotCollecitonViewZoomAnimatorExt, MMFinderPivotLiveViewControllerDelegate>
{
    BOOL _isWatchHistoryLive; // +0x68
    BOOL _isPlaying; // +0x69
    BOOL _isInPreview; // +0x6a
    BOOL _isPreviewMuted; // +0x6b
    BOOL _isMutedByAdVideo; // +0x6c
    BOOL _hasPlayedOpenScreenAd; // +0x6d
    UINavigationController * _presentingNavCon; // +0x70
    MMLivePivotViewController * _pivotViewController; // +0x78
    MMFinderPivotLiveViewController * _controller; // +0x80
    MMFinderLiveTask * _liveTask; // +0x88
    MMFinderLiveContentVM * _contentVM; // +0x90
    UINavigationController * _navControl; // +0x98
    UIView * _scrollFxMaskView; // +0xa0
    UIView * _scrollFxBlurCoverView; // +0xa8
    UIView * _backgroundBlurView; // +0xb0
    LiveSdkInfo * _currentLiveSdkInfo; // +0xb8
    unsigned long long _audienceStartLiveMs; // +0xc0
}
- (id)initWithContentVM:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)loadView;
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
- (void)viewSafeAreaInsetsDidChange;
- (void)updateSafeAreaInsets;
- (void)checkAndResumeLive;
- (void)setPivotScrollingFxWithIntensity:(double)arg1;
- (void)clearPivotScrollingFx;
- (double)blurCoverViewAlphaForIntensity:(double)arg1;
- (CGRect)getWindowBounds;
- (BOOL)isFollowState;
- (void)updateAudienceStartLiveTime;
- (BOOL)tryShowOpenScreenAdvertisement;
- (void)checkAndFinishCurrentOpenScreenAdAfterTimeout;
- (id)dataItem;
- (void)preInitialTaskAndController;
- (void)preJoinLive;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomIn;
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
- (void).cxx_destruct;
@end


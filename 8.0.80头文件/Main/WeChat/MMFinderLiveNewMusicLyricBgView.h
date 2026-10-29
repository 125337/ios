@interface MMFinderLiveNewMusicLyricBgView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isInPreviewState; // +0x8
    BOOL _lyricPositionChanged; // +0x9
    BOOL _hasReceivedSEI; // +0xa
    BOOL _hasStartedTimer; // +0xb
    MMFinderLiveNewMusicLyricPanel * _musicLyricPanel; // +0x10
    UIView * _lyricGuideView; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    double _previewBottom; // +0x28
    double _initTop; // +0x30
    UIView * _gradientView; // +0x38
    CAGradientLayer * _topGradientLayer; // +0x40
    UIView * _lyricIconContainerView; // +0x48
    UIView * _lyricIconContainerBlurView; // +0x50
    UIImageView * _lyricImageView; // +0x58
    PAGView * _lyricIconPagView; // +0x60
    PAGView * _lyricGuidePag; // +0x68
    UILabel * _lyricGuideLabel; // +0x70
    UILongPressGestureRecognizer * _longPressGestureWhenCollapsed; // +0x78
    UILongPressGestureRecognizer * _longPressGestureWhenExpanded; // +0x80
    CGPoint _manualCenter; // +0x88
    CGPoint _currentCenter; // +0x98
    CGPoint _touchOffset; // +0xa8
}
- (id)initWithTaskId:(id)arg1;
- (void)updateLyricInitialTop:(double)arg1;
- (void)startPreviewWithBottomConstraint:(double)arg1;
- (void)stopPreview;
- (BOOL)checkCenter:(CGPoint)arg1 sameWith:(CGPoint)arg2;
- (void)updateManualCenter:(CGPoint)arg1;
- (void)updateLyricCenter:(CGPoint)arg1;
- (void)onLyricPanelCenterChanged;
- (void)onAudienceReceivePositionChangeBySEI:(id)arg1;
- (void)onLyricStyleUpdated;
- (void)onAnchorReceiveStyleChange;
- (void)onAudienceReceiveStyleChangeBySEI;
- (CGPoint)validateCenter:(CGPoint)arg1 withSize:(CGSize)arg2;
- (double)topConstraint;
- (double)bottomConstraint;
- (void)onTapFoldImage;
- (void)startLyricGuideTimerIfNeeded;
- (void)startLyricGuideIfNeeded;
- (void)stopLyricGuide;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initLongPressGesture;
- (void)relayoutLyricIconContainerOnCollapse;
- (void)relayoutLyricPanelOnExpand;
- (void)onLyricCollapseStatusUpdated;
- (void)changeCollapseStatusForAnchor;
- (void)changeCollapseStatusForAudience;
- (void)handleLongPress:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)musicLyricPanel;
- (id)gradientView;
- (id)topGradientLayer;
- (id)lyricIconContainerView;
- (id)lyricIconContainerBlurView;
- (id)lyricImageView;
- (id)lyricIconPagView;
- (id)lyricGuideView;
- (id)lyricGuidePag;
- (id)lyricGuideLabel;
- (id)liveTask;
- (id)anchorReporter;
- (CGPoint)centerInPreviewState;
- (void)setMusicLyricPanel:(id)arg1;
- (void)setLyricGuideView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isInPreviewState;
- (void)setIsInPreviewState:(BOOL)arg1;
- (BOOL)lyricPositionChanged;
- (void)setLyricPositionChanged:(BOOL)arg1;
- (double)previewBottom;
- (void)setPreviewBottom:(double)arg1;
- (BOOL)hasReceivedSEI;
- (void)setHasReceivedSEI:(BOOL)arg1;
- (double)initTop;
- (void)setInitTop:(double)arg1;
- (CGPoint)manualCenter;
- (void)setManualCenter:(CGPoint)arg1;
- (CGPoint)currentCenter;
- (void)setCurrentCenter:(CGPoint)arg1;
- (CGPoint)touchOffset;
- (void)setTouchOffset:(CGPoint)arg1;
- (void)setGradientView:(id)arg1;
- (void)setTopGradientLayer:(id)arg1;
- (void)setLyricIconContainerView:(id)arg1;
- (void)setLyricIconContainerBlurView:(id)arg1;
- (void)setLyricImageView:(id)arg1;
- (void)setLyricIconPagView:(id)arg1;
- (void)setLyricGuidePag:(id)arg1;
- (void)setLyricGuideLabel:(id)arg1;
- (BOOL)hasStartedTimer;
- (void)setHasStartedTimer:(BOOL)arg1;
- (id)longPressGestureWhenCollapsed;
- (void)setLongPressGestureWhenCollapsed:(id)arg1;
- (id)longPressGestureWhenExpanded;
- (void)setLongPressGestureWhenExpanded:(id)arg1;
- (void).cxx_destruct;
@end

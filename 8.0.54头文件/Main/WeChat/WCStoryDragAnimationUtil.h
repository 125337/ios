@interface WCStoryDragAnimationUtil : MMObject
{
    BOOL _isFullScreenShowStory; // +0x8
    BOOL _hasTriggerDragShock; // +0x9
    BOOL _hasTriggerPlayMuteShock; // +0xa
    BOOL _isPlayingMuted; // +0xb
    BOOL _bBackViewShow; // +0xc
    WCStoryPreviewReportObj * _previewReportObj; // +0x10
    UIView * _frontView; // +0x18
    UIView * _backView; // +0x20
    unsigned long long _utilType; // +0x28
    WCStorysPreviewViewController * _backViewController; // +0x30
    MMUIView * _muteBtnView; // +0x38
    MMUIImageView * _muteBtnImageView; // +0x40
    MMUILabel * _muteBtnLabel; // +0x48
    double _frontViewTop; // +0x50
    id /* block */ _animationInHide; // +0x58
    id /* block */ _hideCompletetion; // +0x60
    id /* block */ _autoHideCompletetion; // +0x68
    id /* block */ _animationInShow; // +0x70
    id /* block */ _showCompletetion; // +0x78
    NSDate * _dragStartTime; // +0x80
    double _lastMovement; // +0x88
    double _beginTouchPosY; // +0x90
    double _lastTouchPosY; // +0x98
}
+ (void)lightShock;
+ (void)errorShock;
+ (id)storyDragAnimationUtilWithFrontView:(id)arg1 backView:(id)arg2 frontViewTop:(double)arg3;
+ (double)distanceToLeftBottom:(CGPoint)arg1;
+ (double)distanceFromtPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2;
- (id)initWithFrontView:(id)arg1 backViewController:(id)arg2 frontViewTop:(double)arg3;
- (void)dealloc;
- (id)muteBtnView;
- (void)setMutebtnViewBigger:(BOOL)arg1;
- (void)setHideAnimation:(id /* block */)arg1 hideCompletetion:(id /* block */)arg2;
- (void)setShowAnimation:(id /* block */)arg1 showCompletetion:(id /* block */)arg2;
- (BOOL)isPanInMuteView:(id)arg1;
- (void)processFrontViewGesture:(id)arg1;
- (void)moveMutePlayViewWithMovement:(double)arg1;
- (void)processBackViewGestureWithTouchPoint:(CGPoint)arg1 andState:(long long)arg2;
- (void)hideFrontViewAndPlayMute:(BOOL)arg1;
- (void)autoHideFrontViewCompletetion:(id /* block */)arg1;
- (void)showFrontView:(BOOL)arg1;
- (BOOL)canAutoPlayByFirstTakePhoto;
- (id)previewReportObj;
- (void)setPreviewReportObj:(id)arg1;
- (BOOL)isFullScreenShowStory;
- (void)setIsFullScreenShowStory:(BOOL)arg1;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (unsigned long long)utilType;
- (void)setUtilType:(unsigned long long)arg1;
- (id)backViewController;
- (void)setBackViewController:(id)arg1;
- (void)setMuteBtnView:(id)arg1;
- (id)muteBtnImageView;
- (void)setMuteBtnImageView:(id)arg1;
- (id)muteBtnLabel;
- (void)setMuteBtnLabel:(id)arg1;
- (double)frontViewTop;
- (void)setFrontViewTop:(double)arg1;
- (id /* block */)animationInHide;
- (void)setAnimationInHide:(id /* block */)arg1;
- (id /* block */)hideCompletetion;
- (void)setHideCompletetion:(id /* block */)arg1;
- (id /* block */)autoHideCompletetion;
- (void)setAutoHideCompletetion:(id /* block */)arg1;
- (id /* block */)animationInShow;
- (void)setAnimationInShow:(id /* block */)arg1;
- (id /* block */)showCompletetion;
- (void)setShowCompletetion:(id /* block */)arg1;
- (id)dragStartTime;
- (void)setDragStartTime:(id)arg1;
- (double)lastMovement;
- (void)setLastMovement:(double)arg1;
- (double)beginTouchPosY;
- (void)setBeginTouchPosY:(double)arg1;
- (double)lastTouchPosY;
- (void)setLastTouchPosY:(double)arg1;
- (BOOL)hasTriggerDragShock;
- (void)setHasTriggerDragShock:(BOOL)arg1;
- (BOOL)hasTriggerPlayMuteShock;
- (void)setHasTriggerPlayMuteShock:(BOOL)arg1;
- (BOOL)isPlayingMuted;
- (void)setIsPlayingMuted:(BOOL)arg1;
- (BOOL)bBackViewShow;
- (void)setBBackViewShow:(BOOL)arg1;
- (void).cxx_destruct;
@end


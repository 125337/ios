@interface WCRedEnvelopesStoryDargUtil : MMObject
{
    BOOL _isHasStory; // +0x8
    BOOL _isDragEnd; // +0x9
    BOOL _isNeedRecover; // +0xa
    BOOL _isNeedDoAuto; // +0xb
    BOOL _isDragEnd_back; // +0xc
    BOOL _isNeedRecover_back; // +0xd
    BOOL _isNeedDoAuto_back; // +0xe
    BOOL _hasTriggerLightShock; // +0xf
    BOOL _isDoneFromChangeState; // +0x10
    BOOL _hasBeginDrag; // +0x11
    BOOL _shouldIgnoreDrag; // +0x12
    WCRedEnvelopesStoryViewController * _backViewController; // +0x18
    WCRedEnvelopesRedEnvelopesDetailViewController * _frontViewController; // +0x20
    MMTableView * _frontView; // +0x28
    UIView * _backView; // +0x30
    double _frontViewTop; // +0x38
    NSDate * _dragStartTime; // +0x40
    double _lastMovement; // +0x48
    double _beginTouchPosY; // +0x50
    double _lastTouchPosY; // +0x58
    double _lastBottomY; // +0x60
    NSDate * _dragStartTime_back; // +0x68
    double _lastMovement_back; // +0x70
    double _beginTouchPosY_back; // +0x78
    double _beginTouchPosX_back; // +0x80
    double _lastTouchPosY_back; // +0x88
    double _beginToZoomDistance; // +0x90
    long long _enterBackCount; // +0x98
    id /* block */ _animationInHide; // +0xa0
    id /* block */ _hideCompletetion; // +0xa8
    id /* block */ _animationInShow; // +0xb0
    id /* block */ _showCompletetion; // +0xb8
    id /* block */ _autoHideCompletetion; // +0xc0
    id /* block */ _frontViewShowCompletion; // +0xc8
    CGSize _beginScrollContentSize_back; // +0xd0
    CGPoint _beginScrollContentOffset_back; // +0xe0
}
+ (void)lightShock;
- (id)initWithFrontViewController:(id)arg1 frontView:(id)arg2 backViewController:(id)arg3 frontViewTop:(double)arg4;
- (void)setHideAnimation:(id /* block */)arg1 hideCompletetion:(id /* block */)arg2;
- (void)setShowAnimation:(id /* block */)arg1 showCompletetion:(id /* block */)arg2;
- (void)processFrontViewGesture:(id)arg1;
- (void)showStoryVC;
- (id)generateMaskImage:(id)arg1;
- (void)hideStoryVC;
- (void)processBackViewGesture:(id)arg1;
- (id)backViewController;
- (void)setBackViewController:(id)arg1;
- (id)frontViewController;
- (void)setFrontViewController:(id)arg1;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (double)frontViewTop;
- (void)setFrontViewTop:(double)arg1;
- (BOOL)isHasStory;
- (void)setIsHasStory:(BOOL)arg1;
- (BOOL)isDragEnd;
- (void)setIsDragEnd:(BOOL)arg1;
- (BOOL)isNeedRecover;
- (void)setIsNeedRecover:(BOOL)arg1;
- (BOOL)isNeedDoAuto;
- (void)setIsNeedDoAuto:(BOOL)arg1;
- (id)dragStartTime;
- (void)setDragStartTime:(id)arg1;
- (double)lastMovement;
- (void)setLastMovement:(double)arg1;
- (double)beginTouchPosY;
- (void)setBeginTouchPosY:(double)arg1;
- (double)lastTouchPosY;
- (void)setLastTouchPosY:(double)arg1;
- (double)lastBottomY;
- (void)setLastBottomY:(double)arg1;
- (BOOL)isDragEnd_back;
- (void)setIsDragEnd_back:(BOOL)arg1;
- (BOOL)isNeedRecover_back;
- (void)setIsNeedRecover_back:(BOOL)arg1;
- (BOOL)isNeedDoAuto_back;
- (void)setIsNeedDoAuto_back:(BOOL)arg1;
- (id)dragStartTime_back;
- (void)setDragStartTime_back:(id)arg1;
- (double)lastMovement_back;
- (void)setLastMovement_back:(double)arg1;
- (double)beginTouchPosY_back;
- (void)setBeginTouchPosY_back:(double)arg1;
- (double)beginTouchPosX_back;
- (void)setBeginTouchPosX_back:(double)arg1;
- (double)lastTouchPosY_back;
- (void)setLastTouchPosY_back:(double)arg1;
- (double)beginToZoomDistance;
- (void)setBeginToZoomDistance:(double)arg1;
- (CGSize)beginScrollContentSize_back;
- (void)setBeginScrollContentSize_back:(CGSize)arg1;
- (CGPoint)beginScrollContentOffset_back;
- (void)setBeginScrollContentOffset_back:(CGPoint)arg1;
- (BOOL)hasTriggerLightShock;
- (void)setHasTriggerLightShock:(BOOL)arg1;
- (long long)enterBackCount;
- (void)setEnterBackCount:(long long)arg1;
- (BOOL)isDoneFromChangeState;
- (void)setIsDoneFromChangeState:(BOOL)arg1;
- (id /* block */)animationInHide;
- (void)setAnimationInHide:(id /* block */)arg1;
- (id /* block */)hideCompletetion;
- (void)setHideCompletetion:(id /* block */)arg1;
- (id /* block */)animationInShow;
- (void)setAnimationInShow:(id /* block */)arg1;
- (id /* block */)showCompletetion;
- (void)setShowCompletetion:(id /* block */)arg1;
- (id /* block */)autoHideCompletetion;
- (void)setAutoHideCompletetion:(id /* block */)arg1;
- (id /* block */)frontViewShowCompletion;
- (void)setFrontViewShowCompletion:(id /* block */)arg1;
- (BOOL)hasBeginDrag;
- (void)setHasBeginDrag:(BOOL)arg1;
- (BOOL)shouldIgnoreDrag;
- (void)setShouldIgnoreDrag:(BOOL)arg1;
- (void).cxx_destruct;
@end

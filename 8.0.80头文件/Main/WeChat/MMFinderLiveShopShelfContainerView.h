@interface MMFinderLiveShopShelfContainerView : UIView <UIGestureRecognizerDelegate, MMFinderLiveShopShelfPageCornerCropper>
{
    BOOL _isOpening; // +0x8
    BOOL _moveContentOnPanTableView; // +0x9
    id <MMFinderLiveShopShelfContainerDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UIView * _backgroundView; // +0x20
    double _previousPanPositionY; // +0x28
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (double)viewTopAtPanBegin;
- (void)layoutSubviews;
- (BOOL)isLandScape;
- (void)onBackgroundTapped;
- (void)openWithAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)handleTableView:(id)arg1 panGesture:(id)arg2;
- (void)handleTableView:(id)arg1 panOnMoveTo:(double)arg2;
- (void)handleTableViewPanOnEnd;
- (void)cropCornersFor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (BOOL)moveContentOnPanTableView;
- (void)setMoveContentOnPanTableView:(BOOL)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

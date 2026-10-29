@interface MMSearchPanGestureController : NSObject <UIGestureRecognizerDelegate>
{
    WCSearcher * _searcher; // +0x8
    UIView * _gestureView; // +0x10
    double _touchBeginPosX; // +0x18
    double _dragBeginPosX; // +0x20
    UIView * _backCoverView; // +0x28
    UIView * _edgeShadowView; // +0x30
    UIView * _bottomView; // +0x38
    double _searchBarPlaceLabelOriginLeftX; // +0x40
    double _searchBarTextFieldOriginWidth; // +0x48
    double _searchBarTextFieldExtentableMaxWidth; // +0x50
    BOOL _isGesturing; // +0x58
    UIScreenEdgePanGestureRecognizer * _panGesture; // +0x60
    id <MMSearchPanGestureControlDelegate> _delegate; // +0x68
}
- (id)initWithWCSearcher:(id)arg1;
- (void)dealloc;
- (void)bindGesture;
- (id)getSearchContainerView;
- (id)getSearchBarPlaceLabel;
- (id)getSearchBarClearButton;
- (void)connectCoverView;
- (void)setInteractionEnabled:(BOOL)arg1;
- (void)removeCoverView;
- (double)getSearchBarBottomY;
- (id)getBottomView;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)updateDragingFrame:(double)arg1;
- (void)updateDragingFrame:(double)arg1 keepBarUI:(BOOL)arg2;
- (void)validateDrag;
- (void)resetView:(BOOL)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)isGesturing;
- (void)setIsGesturing:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

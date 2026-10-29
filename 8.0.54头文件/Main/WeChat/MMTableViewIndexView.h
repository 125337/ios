@interface MMTableViewIndexView : MMUIView <MMUIViewControllerExt>
{
    MMTableView * _mmtableView; // +0x8
    id <MMTableViewIndexViewDelegate> _delegate; // +0x10
    NSArray * _indexTitles; // +0x18
    NSMutableArray * _indexItems; // +0x20
    BOOL _isTouching; // +0x28
    CGRect _savedTableViewFrame; // +0x30
    UIEdgeInsets _savedTableViewInsets; // +0x50
    UIImageView * _indexShape; // +0x70
    UILabel * _indexShapeLabel; // +0x78
    UIImageView * _indexShapeImage; // +0x80
    long long _currentIndex; // +0x88
    long long _currentSection; // +0x90
    UIColor * _brandColor; // +0x98
    UIPanGestureRecognizer * _panGesture; // +0xa0
    int _operationCount; // +0xa8
    int _extendHitWidth; // +0xac
    NSMutableDictionary * _gestureCancelTouchStatus; // +0xb0
}
- (id)initWithTableView:(id)arg1 withDelegate:(id)arg2;
- (void)initBrandColor;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadView;
- (UIEdgeInsets)getTableViewContentInset;
- (void)reloadIndexView;
- (void)totallyReloadView;
- (void)scrollToSectionIndex:(long long)arg1;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (CGRect)accessibilityFrame;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)handleTouches:(id)arg1 withEvent:(id)arg2;
- (void)endTouches;
- (void)handleTouchToIndex:(long long)arg1;
- (void)showContactIndexShape:(long long)arg1;
- (id)getFirstNormalIndexItemWithIndex:(long long)arg1;
- (void)refreshIndexShapeWithItem:(id)arg1;
- (void)hideContactIndexShape;
- (void)clearSectionHeaderSelection;
- (void)resetGesture;
- (void)recordAndTurnOffGestureCancelTouches;
- (void)recoverGestureCancelTouches;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (int)operationCount;
- (void)setOperationCount:(int)arg1;
- (int)extendHitWidth;
- (void)setExtendHitWidth:(int)arg1;
- (id)gestureCancelTouchStatus;
- (void)setGestureCancelTouchStatus:(id)arg1;
- (void).cxx_destruct;
@end


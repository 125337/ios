@interface WAStarCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    BOOL _disableEdgeScroll; // +0x8
    BOOL _isDragInDeleteArea; // +0x9
    BOOL _copyMoved; // +0xa
    id <WAStarCollectionViewLayoutDelegate> _layoutDelegate; // +0x10
    double _scrollingSpeed; // +0x18
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x20
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x28
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x30
    UIView * _moveContainerView; // +0x38
    double _extraBottomSpace; // +0x40
    double _dragReplaceDuration; // +0x48
    double _itemTransform; // +0x50
    NSIndexPath * _dragBeginItemIndexPath; // +0x58
    NSIndexPath * _selectedItemIndexPath; // +0x60
    NSIndexPath * _currentViewIndexPath; // +0x68
    NSIndexPath * _dragAddedFakeIndexPath; // +0x70
    UIView * _currentView; // +0x78
    UIView * _scaleView; // +0x80
    CADisplayLink * _displayLink; // +0x88
    long long _dragButtonEventType; // +0x90
    unsigned long long _dragType; // +0x98
    CGPoint _currentViewCenter; // +0xa0
    CGPoint _panTranslationInCollectionView; // +0xb0
    UIEdgeInsets _scrollingTriggerEdgeInsets; // +0xc0
    UIEdgeInsets _scrollingExtendedEdgeInsets; // +0xe0
}
+ (double)contentHeight:(unsigned long long)arg1;
- (id)init;
- (CGSize)collectionViewContentSize;
- (void)setGridDefaults;
- (void)setupCollectionView;
- (void)tearDownCollectionView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id)getCurrentViewIndexPath;
- (void)invalidateLayoutIfNecessary;
- (void)invalidatesScrollTimer;
- (void)setupScrollUp;
- (void)setupScrollDown;
- (void)setupScrollTimerInDirection:(long long)arg1;
- (void)handleScroll:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)animateScaleViewBackToPosition:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)releaseCurrentView;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)setUpGestureRecognizersOnCollectionView;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (double)scrollingSpeed;
- (void)setScrollingSpeed:(double)arg1;
- (UIEdgeInsets)scrollingTriggerEdgeInsets;
- (void)setScrollingTriggerEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)scrollingExtendedEdgeInsets;
- (void)setScrollingExtendedEdgeInsets:(UIEdgeInsets)arg1;
- (id)longPressGestureRecognizer;
- (id)panGestureRecognizer;
- (id)tapGestureRecognizer;
- (id)moveContainerView;
- (void)setMoveContainerView:(id)arg1;
- (double)extraBottomSpace;
- (void)setExtraBottomSpace:(double)arg1;
- (double)dragReplaceDuration;
- (void)setDragReplaceDuration:(double)arg1;
- (double)itemTransform;
- (void)setItemTransform:(double)arg1;
- (BOOL)disableEdgeScroll;
- (void)setDisableEdgeScroll:(BOOL)arg1;
- (id)dragBeginItemIndexPath;
- (void)setDragBeginItemIndexPath:(id)arg1;
- (id)selectedItemIndexPath;
- (void)setSelectedItemIndexPath:(id)arg1;
- (id)currentViewIndexPath;
- (void)setCurrentViewIndexPath:(id)arg1;
- (id)dragAddedFakeIndexPath;
- (void)setDragAddedFakeIndexPath:(id)arg1;
- (id)currentView;
- (void)setCurrentView:(id)arg1;
- (CGPoint)currentViewCenter;
- (void)setCurrentViewCenter:(CGPoint)arg1;
- (id)scaleView;
- (void)setScaleView:(id)arg1;
- (CGPoint)panTranslationInCollectionView;
- (void)setPanTranslationInCollectionView:(CGPoint)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (BOOL)isDragInDeleteArea;
- (void)setIsDragInDeleteArea:(BOOL)arg1;
- (long long)dragButtonEventType;
- (void)setDragButtonEventType:(long long)arg1;
- (unsigned long long)dragType;
- (void)setDragType:(unsigned long long)arg1;
- (BOOL)copyMoved;
- (void)setCopyMoved:(BOOL)arg1;
- (void).cxx_destruct;
@end

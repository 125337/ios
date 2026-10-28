@interface WATaskBarCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    double _scrollingSpeed; // +0x8
    double _extraBottomSpace; // +0x10
    double _dragReplaceDuration; // +0x18
    double _itemTransform; // +0x20
    NSIndexPath * _currentViewIndexPath; // +0x28
    UIView * _currentView; // +0x30
    UIView * _scaleView; // +0x38
    CADisplayLink * _displayLink; // +0x40
    CGPoint _currentViewCenter; // +0x48
    CGPoint _panTranslationInCollectionView; // +0x58
    UIEdgeInsets _scrollingTriggerEdgeInsets; // +0x68
    UIEdgeInsets _scrollingExtendedEdgeInsets; // +0x88
}
- (id)init;
- (CGSize)collectionViewContentSize;
- (void)setGridDefaults;
- (void)setupCollectionView;
- (void)tearDownCollectionView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)setUpGestureRecognizersOnCollectionView;
- (double)scrollingSpeed;
- (void)setScrollingSpeed:(double)arg1;
- (UIEdgeInsets)scrollingTriggerEdgeInsets;
- (void)setScrollingTriggerEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)scrollingExtendedEdgeInsets;
- (void)setScrollingExtendedEdgeInsets:(UIEdgeInsets)arg1;
- (double)extraBottomSpace;
- (void)setExtraBottomSpace:(double)arg1;
- (double)dragReplaceDuration;
- (void)setDragReplaceDuration:(double)arg1;
- (double)itemTransform;
- (void)setItemTransform:(double)arg1;
- (id)currentViewIndexPath;
- (void)setCurrentViewIndexPath:(id)arg1;
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
- (void).cxx_destruct;
@end

@interface MMLivePivotCollectionView : UICollectionView
{
    BOOL _forbidChangeContentOffset; // +0x8
    BOOL _isScrollDown; // +0x9
    id <MMLivePivotCollectionViewScrollDelegate> _scrollByDisplayLinkDelegate; // +0x10
    MMLivePivotViewController * _controller; // +0x18
    CADisplayLink * _scrollAnimationLink; // +0x20
    UIPanGestureRecognizer * _forbidScrollPanGesture; // +0x28
    unsigned long long _forbidScrollReasons; // +0x30
    CGPoint _targetContentOffset; // +0x38
}
- (void)setFrame:(CGRect)arg1;
- (void)scrollByDisplayLinkToContentOffsetY:(double)arg1;
- (void)scrollAnimationLinkCallback;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)updateScrollEnablement;
- (id)forbidScrollPanGesture;
- (void)handlePanGesture:(id)arg1;
- (void)setForbidChangeContentOffset:(BOOL)arg1;
- (void)setForbidScroll:(BOOL)arg1 forReason:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)scrollByDisplayLinkDelegate;
- (void)setScrollByDisplayLinkDelegate:(id)arg1;
- (BOOL)forbidChangeContentOffset;
- (id)controller;
- (void)setController:(id)arg1;
- (id)scrollAnimationLink;
- (void)setScrollAnimationLink:(id)arg1;
- (void)setForbidScrollPanGesture:(id)arg1;
- (BOOL)isScrollDown;
- (void)setIsScrollDown:(BOOL)arg1;
- (CGPoint)targetContentOffset;
- (void)setTargetContentOffset:(CGPoint)arg1;
- (unsigned long long)forbidScrollReasons;
- (void)setForbidScrollReasons:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

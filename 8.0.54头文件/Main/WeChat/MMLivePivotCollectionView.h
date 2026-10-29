@interface MMLivePivotCollectionView : UICollectionView
{
    BOOL _forbidChangeContentOffset; // +0x8
    BOOL _forbidScroll; // +0x9
    BOOL _forbidScrollToOtherLiveRoom; // +0xa
    BOOL _forbidChangeScrollState; // +0xb
    BOOL _isScrollDown; // +0xc
    id <MMLivePivotCollectionViewScrollDelegate> _scrollByDisplayLinkDelegate; // +0x10
    MMLivePivotViewController * _controller; // +0x18
    CADisplayLink * _scrollAnimationLink; // +0x20
    UIPanGestureRecognizer * _forbidScrollPanGesture; // +0x28
    unsigned long long _forbidScrollReasons; // +0x30
    CGPoint _targetContentOffset; // +0x38
}
+ (BOOL)isPivotEnableToScroll;
- (void)setFrame:(CGRect)arg1;
- (void)scrollByDisplayLinkToContentOffsetY:(double)arg1;
- (void)scrollAnimationLinkCallback;
- (void)updateContentsOnMinify;
- (void)updateContentsAfterMinify;
- (void)updateContentsOnExpend;
- (void)updateContentsAfterExpend;
- (void)doZoomOutAnimator;
- (void)doZoomInAnimatior;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)adjustedContentInsetDidChange;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)setContentOffset:(CGPoint)arg1;
- (void)checkAndSetContentOffset:(CGPoint)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)checkAndSetContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setForbidScroll:(BOOL)arg1;
- (id)forbidScrollPanGesture;
- (void)handlePanGesture:(id)arg1;
- (void)setForbidScrollToOtherLiveRoom:(BOOL)arg1;
- (void)setForbidChangeScrollState:(BOOL)arg1;
- (void)setForbidChangeContentOffset:(BOOL)arg1;
- (void)addForbidScrollReason:(unsigned long long)arg1;
- (void)removeForbidScrollReason:(unsigned long long)arg1;
- (id)descriptionOfForbidScrollReason:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)scrollByDisplayLinkDelegate;
- (void)setScrollByDisplayLinkDelegate:(id)arg1;
- (BOOL)forbidChangeContentOffset;
- (BOOL)forbidScroll;
- (BOOL)forbidScrollToOtherLiveRoom;
- (BOOL)forbidChangeScrollState;
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


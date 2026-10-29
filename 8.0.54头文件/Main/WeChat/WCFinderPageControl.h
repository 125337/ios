@interface WCFinderPageControl : UIControl <UIGestureRecognizerDelegate>
{
    BOOL _isMoving; // +0x8
    BOOL _disableChangeEvent; // +0x9
    long long _numberOfPages; // +0x10
    unsigned long long _currentPage; // +0x18
    WCFinderPageControlStyleConfig * _config; // +0x20
    NSMutableArray * _dotsView; // +0x28
    UISwipeGestureRecognizer * _swipeLeft; // +0x30
    UISwipeGestureRecognizer * _swipeRight; // +0x38
    UIEdgeInsets _touchInsets; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setupValues;
- (void)setupGestures;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setNumberOfPages:(long long)arg1;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)updateCurrentPageDisplay;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onSwipeLeft;
- (void)onSwipeRight;
- (void)onTap:(id)arg1;
- (long long)numberOfPages;
- (unsigned long long)currentPage;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (BOOL)isMoving;
- (void)setIsMoving:(BOOL)arg1;
- (BOOL)disableChangeEvent;
- (void)setDisableChangeEvent:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)dotsView;
- (void)setDotsView:(id)arg1;
- (id)swipeLeft;
- (void)setSwipeLeft:(id)arg1;
- (id)swipeRight;
- (void)setSwipeRight:(id)arg1;
- (void).cxx_destruct;
@end


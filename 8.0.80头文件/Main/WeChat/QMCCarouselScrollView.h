@interface QMCCarouselScrollView : UIView <UIScrollViewDelegate>
{
    id <QMCCarouselScrollViewDelegate> _snapDelegate; // +0x8
    UIScrollView * _scrollView; // +0x10
    double _cardWidth; // +0x18
    double _cardSpacing; // +0x20
    double _horizontalPadding; // +0x28
    double _verticalPadding; // +0x30
    double _measuredCardHeight; // +0x38
    long long _currentIndex; // +0x40
    NSMutableArray * _cards; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addCard:(id)arg1;
- (void)removeAllCards;
- (void)layoutCards;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollToCardAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)snapDelegate;
- (void)setSnapDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (double)cardWidth;
- (void)setCardWidth:(double)arg1;
- (double)cardSpacing;
- (void)setCardSpacing:(double)arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)verticalPadding;
- (void)setVerticalPadding:(double)arg1;
- (double)measuredCardHeight;
- (void)setMeasuredCardHeight:(double)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)cards;
- (void)setCards:(id)arg1;
- (void).cxx_destruct;
@end

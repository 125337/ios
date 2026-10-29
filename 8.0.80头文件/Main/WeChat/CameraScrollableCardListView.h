@interface CameraScrollableCardListView : UIScrollView
{
    double _cardSpacing; // +0x8
    NSMutableArray * _cardViews; // +0x10
    double _cardWidth; // +0x18
    double _cardHeight; // +0x20
}
+ (double)containerCardSideForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)updateCardSideWithContainerWidth:(double)arg1;
- (void)appendCard:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllCard;
- (void)layoutCards;
- (void)layoutCardsAlignRight;
- (void)updateContentSize;
- (void)scrollToRightEdge;
- (double)cardSpacing;
- (void)setCardSpacing:(double)arg1;
- (id)cardViews;
- (void)setCardViews:(id)arg1;
- (double)cardWidth;
- (void)setCardWidth:(double)arg1;
- (double)cardHeight;
- (void)setCardHeight:(double)arg1;
- (void).cxx_destruct;
@end

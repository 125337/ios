@interface WCAdRandomSelectCardItemsView : UIView
{
    WCAdRandomSelectCardItemsInfo * _cardsInfo; // +0x8
    NSMutableArray * _cardItemViews; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 cardsInfo:(id)arg2;
- (void)generateSubviews;
- (void)prepareForItemViewsWithSelectedCards:(id)arg1;
- (id)cardItemViews;
- (id)genItemViewWithItemInfo:(id)arg1;
- (id)fetchCardIdForLocation:(CGPoint)arg1;
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (void)setCardItemViews:(id)arg1;
- (void).cxx_destruct;
@end

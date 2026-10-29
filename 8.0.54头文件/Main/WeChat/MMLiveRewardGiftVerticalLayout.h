@interface MMLiveRewardGiftVerticalLayout : MMLiveRewardGiftLayout
{
    double _bottomInset; // +0x8
}
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (struct)visualLocationForCellAtIndex:(unsigned long long)arg1;
- (CGRect)frameWithinPageForCellAtIndex:(unsigned long long)arg1;
- (double)bottomInset;
- (void)setBottomInset:(double)arg1;
@end


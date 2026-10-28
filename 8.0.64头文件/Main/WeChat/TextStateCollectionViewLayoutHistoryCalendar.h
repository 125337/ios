@interface TextStateCollectionViewLayoutHistoryCalendar : UICollectionViewLayout
{
    BOOL _showStoryEntry; // +0x8
    id <TextStateCollectionViewLayoutHistoryCalendarDelegate> _delegate; // +0x10
    unsigned long long _itemCountPerRow; // +0x18
    double _contentWidth; // +0x20
    double _padding; // +0x28
    double _contentHeight; // +0x30
    NSMutableArray * _sectionRangeList; // +0x38
    NSMutableArray * _sectionItemCountList; // +0x40
    id /* block */ _sectionBeginComparator; // +0x48
    id /* block */ _sectionEndComparator; // +0x50
}
+ (CGSize)itemSize;
+ (double)sectionHeaderWidth;
+ (double)yearHeight;
- (id)init;
- (void)initComparator;
- (id)collectionView;
- (id)dataSource;
- (void)setShowStoryEntry:(BOOL)arg1;
- (void)prepareLayout;
- (void)clearLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (BOOL)shouldShowYearForSection:(unsigned long long)arg1;
- (CGRect)formerRowsRectForSection:(unsigned long long)arg1;
- (CGRect)endRowRectForSection:(unsigned long long)arg1;
- (unsigned long long)sectionIndexForY:(double)arg1;
- (CGRect)sectionFrameAtIndex:(long long)arg1;
- (CGPoint)originForFirstItemAtSection:(long long)arg1;
- (CGPoint)offsetForItemAtIndex:(long long)arg1;
- (double)storyEntryBeginY;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)itemCountPerRow;
- (void)setItemCountPerRow:(unsigned long long)arg1;
- (BOOL)showStoryEntry;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (double)padding;
- (void)setPadding:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (id)sectionRangeList;
- (void)setSectionRangeList:(id)arg1;
- (id)sectionItemCountList;
- (void)setSectionItemCountList:(id)arg1;
- (id /* block */)sectionBeginComparator;
- (void)setSectionBeginComparator:(id /* block */)arg1;
- (id /* block */)sectionEndComparator;
- (void)setSectionEndComparator:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderShowcasePagingView : UIView <UIScrollViewDelegate>
{
    BOOL _showPlaceholder; // +0x8
    UIScrollView * _scrollView; // +0x10
    double _padding; // +0x18
    long long _pagingNumber; // +0x20
    Class _itemClass; // +0x28
    double _cardCorner; // +0x30
    UIColor * _cardColor; // +0x38
    UIColor * _highlightColor; // +0x40
    id <WCFinderShowcasePagingViewDatasource> _datasource; // +0x48
    id <WCFinderShowcasePagingViewDelegate> _delegate; // +0x50
    long long _count; // +0x58
    NSMutableArray * _cacheViews; // +0x60
    NSMapTable * _cell2IndexMap; // +0x68
    NSMapTable * _index2CellMap; // +0x70
    long long _selectedIndex; // +0x78
    NSMutableSet * _exposedItems; // +0x80
    CGSize _cacheSize; // +0x88
    CGSize _cacheItemSize; // +0x98
    _NSRange _oldCheckRange; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setCardCorner:(double)arg1;
- (void)didMoveToSuperview;
- (void)applyItemsLayout;
- (id)fetchView:(CGRect)arg1;
- (double)itemWidth;
- (void)handleLongPress:(id)arg1;
- (void)_onHightlightCell:(id)arg1;
- (void)_endHightlightCell:(id)arg1;
- (void)_onTapCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (double)padding;
- (void)setPadding:(double)arg1;
- (long long)pagingNumber;
- (void)setPagingNumber:(long long)arg1;
- (Class)itemClass;
- (void)setItemClass:(Class)arg1;
- (double)cardCorner;
- (id)cardColor;
- (void)setCardColor:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (BOOL)showPlaceholder;
- (void)setShowPlaceholder:(BOOL)arg1;
- (id)datasource;
- (void)setDatasource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (CGSize)cacheSize;
- (void)setCacheSize:(CGSize)arg1;
- (CGSize)cacheItemSize;
- (void)setCacheItemSize:(CGSize)arg1;
- (_NSRange)oldCheckRange;
- (void)setOldCheckRange:(_NSRange)arg1;
- (id)cacheViews;
- (void)setCacheViews:(id)arg1;
- (id)cell2IndexMap;
- (void)setCell2IndexMap:(id)arg1;
- (id)index2CellMap;
- (void)setIndex2CellMap:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)exposedItems;
- (void)setExposedItems:(id)arg1;
- (void).cxx_destruct;
@end

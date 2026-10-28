@interface InfiniteLoopContainerView : UIView <UIScrollViewDelegate>
{
    BOOL _pagingEnabled; // +0x8
    BOOL _scrollEnabled; // +0x9
    id <InfiniteLoopContainerViewDelegate> _delegate; // +0x10
    double _interitemSpacing; // +0x18
    UIScrollView * _containerView; // +0x20
    NSMutableDictionary * _indexToViewDict; // +0x28
    long long _maxVisibleItemCount; // +0x30
    long long _itemCount; // +0x38
    long long _index; // +0x40
    long long _pivotIndex; // +0x48
    double _pivotOffset; // +0x50
    long long _beginDraggingIndex; // +0x58
    unsigned long long _type; // +0x60
    UITapGestureRecognizer * _tapGesture; // +0x68
    CGSize _itemSize; // +0x70
    UIEdgeInsets _contentInset; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 type:(unsigned long long)arg2;
- (void)initData;
- (void)initGesture;
- (void)initContainerView;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)reloadData;
- (void)changeToNextItem;
- (void)changeToItemAtIndex:(long long)arg1;
- (void)onTap:(id)arg1;
- (void)updatePivot;
- (void)refreshView;
- (id)viewAtIndex:(long long)arg1;
- (long long)curIndex;
- (long long)indexOffset;
- (long long)indexOffsetForPoint:(CGPoint)arg1;
- (CGRect)frameForViewAtIndex:(long long)arg1;
- (double)unitLength;
- (BOOL)canLoop;
- (BOOL)horizontal;
- (BOOL)doubleDataSource;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (double)interitemSpacing;
- (void)setInteritemSpacing:(double)arg1;
- (BOOL)pagingEnabled;
- (void)setPagingEnabled:(BOOL)arg1;
- (BOOL)scrollEnabled;
- (UIEdgeInsets)contentInset;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)indexToViewDict;
- (void)setIndexToViewDict:(id)arg1;
- (long long)maxVisibleItemCount;
- (void)setMaxVisibleItemCount:(long long)arg1;
- (long long)itemCount;
- (void)setItemCount:(long long)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (long long)pivotIndex;
- (void)setPivotIndex:(long long)arg1;
- (double)pivotOffset;
- (void)setPivotOffset:(double)arg1;
- (long long)beginDraggingIndex;
- (void)setBeginDraggingIndex:(long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

@interface MJPickerView : UIView <MJPickerViewLayoutDelegate, UICollectionViewDataSource>
{
    UICollectionView * _collectionView; // +0x8
    BOOL _triggeredByDragging; // +0x10
    BOOL _triggeredSilently; // +0x11
    long long _itemAtCenterPoint; // +0x18
    long long _halfItemAtCenterPoint; // +0x20
    map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> _itemCenterMap; // +0x28
    BOOL _isFeedbackEnabled; // +0x40
    BOOL _isDarkCornerEnabled; // +0x41
    id <MJPickerViewDelegate> _delegate; // +0x48
    id <MJPickerViewDataSource> _dataSource; // +0x50
    UIFont * _font; // +0x58
    UIColor * _textColor; // +0x60
    double _interSpacing; // +0x68
    double _labelHeight; // +0x70
    UISelectionFeedbackGenerator * _feedback; // +0x78
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)selectItem:(long long)arg1 animated:(BOOL)arg2;
- (void)selectItem:(long long)arg1 silent:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadData:(id /* block */)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)handleSupplementaryLabelTapGesture:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForLabelInSection:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIsDarkCornerEnabled:(BOOL)arg1;
- (void)setLabelHeight:(double)arg1;
- (id)feedback;
- (void)notifyWillBeginDragging;
- (void)notifyDidSelect:(id)arg1;
- (void)notifyPassThroughAndFeedback;
- (void)feedbackIfNeeded;
- (CGSize)sizeForItem:(long long)arg1 elementCategory:(unsigned long long)arg2;
- (CGSize)sizeForContent:(id)arg1 elementCategory:(unsigned long long)arg2;
- (BOOL)scrollAcrossOrCloseToItemCenter;
- (void)addDarkCornerMask;
- (void)updateDarkCornerIfNeeded;
- (BOOL)shouldFeedback;
- (id)centralIndexPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)font;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)interSpacing;
- (void)setInterSpacing:(double)arg1;
- (double)labelHeight;
- (BOOL)isFeedbackEnabled;
- (void)setIsFeedbackEnabled:(BOOL)arg1;
- (BOOL)isDarkCornerEnabled;
- (void)setFeedback:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


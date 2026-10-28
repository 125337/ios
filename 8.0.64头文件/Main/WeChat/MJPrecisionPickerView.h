@interface MJPrecisionPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MJPrecisionPickerViewLayoutDelegate>
{
    UICollectionView * _collectionView; // +0x8
    MJPrecisionPickerViewLayout * _collectionViewLayout; // +0x10
    BOOL _triggeredSilently; // +0x18
    struct _scrollInfo; // +0x20
    BOOL _isDirty; // +0x30
    vector<UPPrecisionCellModel, std::allocator<UPPrecisionCellModel>> _cellModels; // +0x38
    long long _lastValueAtCenter; // +0x50
    long long _lastScrollAcrossValue; // +0x58
    map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> _valueCenterMap; // +0x60
    BOOL _isShowLabelIndicator; // +0x78
    id <MJPrecisionPickerViewDataSource> _dataSource; // +0x80
    id <MJPrecisionPickerViewDelegate> _delegate; // +0x88
    long long _minValue; // +0x90
    long long _maxValue; // +0x98
    unsigned long long _precision; // +0xa0
    unsigned long long _stride; // +0xa8
    long long _defaultValue; // +0xb0
    double _autoSnapThreshold; // +0xb8
    double _strideWidth; // +0xc0
    UIFont * _font; // +0xc8
    UIColor * _textColor; // +0xd0
    double _labelHeight; // +0xd8
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupDefaultValues;
- (void)commonInit;
- (void)selectValue:(long long)arg1 animated:(BOOL)arg2;
- (void)selectValue:(long long)arg1 silent:(BOOL)arg2 animated:(BOOL)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)handleSupplementaryLabelTapGesture:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)lengthForItemAtIndexPath:(id)arg1;
- (double)widthForLabelItemAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)scrollToValue:(long long)arg1 silently:(BOOL)arg2 animated:(BOOL)arg3;
- (long long)modelCount;
- (const struct *)modelAtIndex:(long long)arg1;
- (void)rebuildIfNeeded;
- (void)rebuild;
- (void)setMinValue:(long long)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)setPrecision:(unsigned long long)arg1;
- (void)setStride:(unsigned long long)arg1;
- (void)setDefaultValue:(long long)arg1;
- (void)setLabelHeight:(double)arg1;
- (double)widthForContent:(id)arg1 ofValue:(long long)arg2;
- (double)widthForLabel:(id)arg1;
- (void)updateMaskRect;
- (void)notifyScrollAcrossValue;
- (void)notifySelectValue;
- (BOOL)scrollAcrossOrCloseToValue;
- (long long)valueAtCenterPoint;
- (CGPoint)contentOffsetForValue:(long long)arg1;
- (id)indexPathForValue:(long long)arg1;
- (BOOL)isCollectionViewLoaded;
- (id)findNearestIndividualIndexPath:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)minValue;
- (long long)maxValue;
- (unsigned long long)precision;
- (unsigned long long)stride;
- (long long)defaultValue;
- (double)autoSnapThreshold;
- (void)setAutoSnapThreshold:(double)arg1;
- (double)strideWidth;
- (void)setStrideWidth:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)labelHeight;
- (BOOL)isShowLabelIndicator;
- (void)setIsShowLabelIndicator:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

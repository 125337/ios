@interface WCFinderCyclePagerViewLayoutParams : NSObject
{
    BOOL _isInfiniteLoop; // +0x8
    BOOL _itemVerticalCenter; // +0x9
    BOOL _itemHorizontalCenter; // +0xa
    double _itemSpacing; // +0x10
    UICollectionReusableView * _footerView; // +0x18
    UIView * _pageView; // +0x20
    CGSize _itemSize; // +0x28
    UIEdgeInsets _sectionInset; // +0x38
}
- (id)init;
- (UIEdgeInsets)onlyOneSectionInset;
- (UIEdgeInsets)firstSectionInset;
- (UIEdgeInsets)lastSectionInset;
- (UIEdgeInsets)middleSectionInset;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg1;
- (UIEdgeInsets)sectionInset;
- (void)setSectionInset:(UIEdgeInsets)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (BOOL)isInfiniteLoop;
- (void)setIsInfiniteLoop:(BOOL)arg1;
- (BOOL)itemVerticalCenter;
- (void)setItemVerticalCenter:(BOOL)arg1;
- (BOOL)itemHorizontalCenter;
- (void)setItemHorizontalCenter:(BOOL)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void).cxx_destruct;
@end

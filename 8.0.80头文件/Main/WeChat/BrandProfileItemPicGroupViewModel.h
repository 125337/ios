@interface BrandProfileItemPicGroupViewModel : BrandProfileItemBaseViewModel
{
    BOOL _shouldShowAllEntry; // +0x10
    BrandProfileItemPicViewModel * _leftItemViewModel; // +0x18
    BrandProfileItemPicViewModel * _rightItemViewModel; // +0x20
    unsigned long long _picCount; // +0x28
}
- (id)tableViewCellClassName;
- (id)displayItemViewModels;
- (UIEdgeInsets)contentInsets;
- (double)itemSpacing;
- (double)cardWidth;
- (double)maxItemCardHeight;
- (void)applyContainerWidthIfNeeded;
- (double)calCellHeight;
- (void)clearLayoutCache;
- (id)leftItemViewModel;
- (void)setLeftItemViewModel:(id)arg1;
- (id)rightItemViewModel;
- (void)setRightItemViewModel:(id)arg1;
- (unsigned long long)picCount;
- (void)setPicCount:(unsigned long long)arg1;
- (BOOL)shouldShowAllEntry;
- (void)setShouldShowAllEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end

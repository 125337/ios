@interface WCFinderProfileOverviewPageLayout : UICollectionViewFlowLayout
{
    vector<SectionFrame, std::allocator<SectionFrame>> sectionInfos; // +0x8
    long long _flag; // +0x20
}
- (id)init;
- (id)layoutDelegate;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)_calculateLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (UIEdgeInsets)_contentInsetsSeperator:(long long)arg1 pos:(long long)arg2;
- (UIEdgeInsets)_getEdgeInsetForSection:(long long)arg1 pos:(long long)arg2;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

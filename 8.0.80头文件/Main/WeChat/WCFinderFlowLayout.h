@interface WCFinderFlowLayout : UICollectionViewLayout
{
    map<long, SectionInfo, std::less<long>, std::allocator<std::pair<const long, SectionInfo>>> sectionInfos; // +0x8
    long long _sectionNumber; // +0x20
    long long _behavior; // +0x28
    long long _flag; // +0x30
    CGSize _contentSize; // +0x38
}
+ (Class)invalidationContextClass;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)flowDelegate;
- (void)_calculateLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (long long)sectionNumber;
- (void)setSectionNumber:(long long)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (long long)behavior;
- (void)setBehavior:(long long)arg1;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

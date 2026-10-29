@interface FTSTopHitsSectionController : FTSBaseSectionController
{
    NSArray * _topHitItems; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (unsigned long long)maxDisplayItemsCount;
- (id)sectionTitle;
- (unsigned long long)sectionType;
- (id)topHitItems;
- (void)setTopHitItems:(id)arg1;
- (void).cxx_destruct;
@end


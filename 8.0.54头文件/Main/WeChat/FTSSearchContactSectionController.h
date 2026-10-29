@interface FTSSearchContactSectionController : FTSBaseSectionController
{
    unsigned long long _findType; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfSearchItems;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)objectForIndexPath:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (unsigned long long)sectionType;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (long long)topNotSearchItemCount;
- (unsigned long long)findType;
- (void)setFindType:(unsigned long long)arg1;
@end


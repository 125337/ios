@interface FTSTalkerEntrySectionController : FTSBaseSectionController
{
    FTSTalkerEntryInfo * _info; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfSearchItems;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (id)objectForIndexPath:(id)arg1;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (long long)topNotSearchItemCount;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end


@interface _TtC6WeChat26FTSMixSugSectionController : FTSBaseSectionController
{
     sectionPos; // +0x8
     sectionModel; // +0x10
     sugs; // +0x18
}
+ (BOOL)uiEnabled;
+ (BOOL)prepositionEnabled;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (long long)topNotSearchItemCount;
- (id)initWithSectionModel:(id)arg1;
- (unsigned long long)sectionType;
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfSearchItems;
- (unsigned long long)maxDisplayItemsCount;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (id)objectForIndexPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

@interface _TtC6WeChat26FTSMixSugSectionController : FTSBaseSectionController
{
     sugStyle; // +0x8
     sectionPos; // +0x10
     sectionModel; // +0x18
     sugs; // +0x20
}
+ (BOOL)uiEnabled;
+ (BOOL)prepositionEnabled;
+ (void)openFeedBackWithCurSearchText:(id)arg1 navigationController:(id)arg2;
+ (id)relatedWords;
+ (void)setRelatedWords:(id)arg1;
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

@interface EmoticonFinderFeedPickerViewController : WCFinderFeedPickerViewController
- (void)addPickItemWithViewModel:(id)arg1 tabController:(id)arg2 feedId:(id)arg3;
- (void)removePickItemWithViewModel;
- (void)finderChooseFeedTabController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withTabModel:(id)arg3;
- (void)finderChooseFeedTabController:(id)arg1 didSelectItemForFeedId:(id)arg2 withTabModel:(id)arg3;
- (void)finderChooseFeedTabController:(id)arg1 deSelectItemForFeedId:(id)arg2 withTabModel:(id)arg3;
- (void)selectItemWarning:(id)arg1;
@end

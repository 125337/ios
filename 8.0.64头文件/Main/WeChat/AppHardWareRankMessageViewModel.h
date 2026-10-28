@interface AppHardWareRankMessageViewModel : BaseMessageViewModel
{
    HardWareRankMessageEntryButtonInfo * _entryButtonInfo; // +0x60
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)entryButtonInfo;
- (id)additionalAccessibilityDescription;
- (id)getChampionText:(double)arg1 font:(id)arg2;
- (BOOL)canShowTextStateEntry;
- (BOOL)canShowOlympic2024Entry;
- (void)onClickOlympic2024Button;
- (void).cxx_destruct;
@end

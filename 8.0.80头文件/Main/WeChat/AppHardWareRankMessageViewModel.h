@interface AppHardWareRankMessageViewModel : BaseMessageViewModel
{
    HardWareRankMessageEntryButtonInfo * _entryButtonInfo; // +0x60
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (double)newWorkoutCardWidth;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)measureNewContentViewSize:(CGSize)arg1;
- (id)entryButtonInfo;
- (id)additionalAccessibilityDescription;
- (id)getChampionText:(double)arg1 font:(id)arg2;
- (BOOL)p_hasChampionInfo;
- (id)p_scoreTextWithScoreDisplay:(id)arg1;
- (id)p_focusTextWithRankInfo;
- (BOOL)canShowTextStateEntry;
- (BOOL)canShowOlympic2024Entry;
- (void)onClickOlympic2024Button;
- (void).cxx_destruct;
@end

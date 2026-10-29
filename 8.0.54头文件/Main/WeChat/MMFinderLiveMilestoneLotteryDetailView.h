@interface MMFinderLiveMilestoneLotteryDetailView : MMFinderLiveMilestoneLotteryDetailBaseView <MMFinderLiveMilestoneLotteryViewModelExt>
{
    MMFinderLiveMilestoneLotteryDetailMenuView * _mainMenuView; // +0x8
    MMFinderLiveMilestoneLotteryDetailAttendView * _attendView; // +0x10
    MMFinderLiveMilestoneLotteryDetailQuestionView * _questionView; // +0x18
    MMFinderLiveMilestoneLotteryDetailWinnerResultView * _winnerResultView; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
}
- (id)initWithViewModel:(id)arg1 taskId:(id)arg2;
- (void)refreshOnViewAppear;
- (void)commonInit;
- (id)convertedMenuItems;
- (void)handleItemDidSelect:(id)arg1;
- (void)_gotoLotteryDetailWithLotteryInfo:(id)arg1;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (void)showInView:(id)arg1 aniamted:(BOOL)arg2;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)onCurrentMilestoneLotteryMetaInfoUpdated:(id)arg1;
- (void)reloadMenuView;
- (void)reportMenuItemExposeWithItems:(id)arg1 prevItems:(id)arg2;
- (void)openAttendViewWithLotteryId:(id)arg1 animated:(BOOL)arg2;
- (void)openQuestionViewWithLotteryId:(id)arg1;
- (id)mainMenuView;
- (void)setMainMenuView:(id)arg1;
- (id)attendView;
- (void)setAttendView:(id)arg1;
- (id)questionView;
- (void)setQuestionView:(id)arg1;
- (id)winnerResultView;
- (void)setWinnerResultView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end


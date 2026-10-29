@interface MMFinderLiveMilestoneLotteryDetailResultView : MMFinderLiveMilestoneLotteryDetailBaseView <MMFinderLiveMilestoneLotteryViewModelExt>
{
    BOOL _hasCheckedGiftAnimation; // +0x8
    FinderLiveMilestoneLotteryInfo * _lotteryInfo; // +0x10
    MMFinderLiveMilestoneLotteryDetailWinnerResultView * _winnerResultView; // +0x18
}
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;
- (void)dealloc;
- (void)commonInit;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)checkParamValid;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)arg1;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)arg1 prevInfo:(id)arg2;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)winnerResultView;
- (void)setWinnerResultView:(id)arg1;
- (BOOL)hasCheckedGiftAnimation;
- (void)setHasCheckedGiftAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end


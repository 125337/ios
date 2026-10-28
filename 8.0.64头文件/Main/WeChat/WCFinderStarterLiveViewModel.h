@interface WCFinderStarterLiveViewModel : NSObject <MMFinderLiveCreateLotteryViewModelDelegate, WCFinderLiveStartLotteryViewControllerDelegate>
{
    WCFinderLiveStarteVideoModeViewModel * _videoModeViewModel; // +0x8
    WCFinderLiveStarteAudioModeViewModel * _audioModeViewModel; // +0x10
    WCFinderLiveStarteGameModeViewModel * _gameModeViewModel; // +0x18
    WCFinderLiveStartePublicModel * _publicModel; // +0x20
}
- (void)showCreateLotteryView;
- (void)hideCreateLotteryView;
- (void)hideCreateLotteryViewWithCompletion:(id /* block */)arg1;
- (void)showStartLotteryVC;
- (void)fetchLotteryArray:(id /* block */)arg1;
- (id)getCurrentViewController;
- (void)showLotteryView;
- (void)createLotteryClick;
- (void)deleteLotteryClick:(id)arg1 session:(long long)arg2;
- (void)realDeleteLotteryClick:(id)arg1 session:(long long)arg2;
- (void)onLiveLotteryRecordClick;
- (void)onLotteryCellHoverClicked:(id)arg1 textItem:(id)arg2;
- (void)startLotteryViewControllerSaveLottery:(id)arg1;
- (BOOL)isVideoMode;
- (BOOL)isAudioMode;
- (BOOL)isGameMode;
- (id)init;
- (id)currentLiveModeViewModel;
- (id)videoModeViewModel;
- (id)audioModeViewModel;
- (id)gameModeViewModel;
- (id)publicModel;
- (void)setVideoModeViewModel:(id)arg1;
- (void)setAudioModeViewModel:(id)arg1;
- (void)setGameModeViewModel:(id)arg1;
- (void)setPublicModel:(id)arg1;
- (void).cxx_destruct;
@end

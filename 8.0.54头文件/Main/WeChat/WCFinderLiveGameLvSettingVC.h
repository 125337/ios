@interface WCFinderLiveGameLvSettingVC : WCFinderWCTableViewManagerVC
{
    GameRankSwitchInfo * _gameLiveSwitchInfo; // +0x68
}
- (void)viewDidLoad;
- (void)onBuildTables;
- (void)onGameLiveRankSwitched:(id)arg1 cellInfo:(id)arg2;
- (id)gameLiveSwitchInfo;
- (void)setGameLiveSwitchInfo:(id)arg1;
- (void).cxx_destruct;
@end


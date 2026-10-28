@interface MMBGMSelectedFinderFeedTabManager : NSObject <MMBGMTabManagerProtocol>
{
    MMBGMChooseFinderFeedListView * _feedListView; // +0x8
}
- (void)switchToThisMgr;
- (void)setAllCellUnSelected;
- (void)autoStopSelectedCellPlayingState;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (void).cxx_destruct;
@end

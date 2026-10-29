@interface BTFinderLiveFlowStyleItemCell : BTRecommendFinderFlowStyleItemCell <MMLiveCDNPlayerViewDelegate>
{
    id <BTFinderLiveFlowStyleItemCellDelegate> _liveDelegate; // +0x8
    BTFinderLiveItemViewModel * _viewModel; // +0x10
    MMLiveCDNPlayerView * _playerView; // +0x18
    WCFinderLiveNowView * _liveTagView; // +0x20
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (id)coverContainerSubviews;
- (double)coverImageRatio;
- (id)realCoverView;
- (id)realTagView;
- (void)prepareForReuse;
- (void)loadData;
- (void)updateLiveTagStateForLiveEnd;
- (id)playerView;
- (id)liveTagView;
- (void)updateWithItemViewModel:(id)arg1;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)setMute:(BOOL)arg1;
- (id)liveDelegate;
- (void)setLiveDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setLiveTagView:(id)arg1;
- (void).cxx_destruct;
@end


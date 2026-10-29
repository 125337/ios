@interface CBTDramaShotItemCellModel : NSObject
{
    id <CBTDramaShotItemCellModelDelegate> _delegate; // +0x8
    double _playProgressRatio; // +0x10
    CBTDramaShotItem * _shotItem; // +0x18
    WCPlayerView * _playerView; // +0x20
}
- (id)initWithShotItem:(id)arg1;
- (void)setPlayProgressRatio:(double)arg1;
- (void)configDownloadArgsInPlayArgs:(id)arg1;
- (void)videoDidPlayToEndTimeWithLoopTimes:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)playProgressRatio;
- (id)shotItem;
- (void)setShotItem:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

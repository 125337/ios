@interface CBTDramaItemViewModel : NSObject
{
    id <CBTDramaItemViewModelDelegate> _delegate; // +0x8
    long long _currentPlayIndex; // +0x10
    double _playProgressRatio; // +0x18
    CBTDramaItem * _dramaItem; // +0x20
}
- (id)initWithDramaItem:(id)arg1 delegate:(id)arg2;
- (void)setCurrentPlayIndex:(long long)arg1;
- (void)setPlayProgressRatio:(double)arg1;
- (id)generateSimpleInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentPlayIndex;
- (double)playProgressRatio;
- (id)dramaItem;
- (void)setDramaItem:(id)arg1;
- (void).cxx_destruct;
@end

@interface TXLiveContainerView : UIView
{
    BOOL _isBackgroundPlaybackActive; // +0x8
    UIView * _liveView; // +0x10
    UIImageView * _snapshotImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)updateSnapshot;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (BOOL)isBackgroundPlaybackActive;
- (void)setIsBackgroundPlaybackActive:(BOOL)arg1;
- (void).cxx_destruct;
@end

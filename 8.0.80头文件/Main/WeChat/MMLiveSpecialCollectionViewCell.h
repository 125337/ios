@interface MMLiveSpecialCollectionViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>
{
    BOOL _play; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSString * _videoUri; // +0x18
    WCFinderFeedImageCDNView * _coverView; // +0x20
    MMLiveCDNPlayerView * _playerView; // +0x28
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setDataItem:(id)arg1;
- (void)setPlay:(BOOL)arg1;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)onEnterForeground;
- (id)dataItem;
- (BOOL)play;
- (id)videoUri;
- (void)setVideoUri:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

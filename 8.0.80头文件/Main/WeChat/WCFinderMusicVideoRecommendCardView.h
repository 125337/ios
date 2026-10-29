@interface WCFinderMusicVideoRecommendCardView : UIControl
{
    int _coverImageRequestID; // +0x8
    WCFinderMusicVideoRecommendItem * _item; // +0x10
    UIImageView * _coverImageView; // +0x18
    AVQueuePlayer * _player; // +0x20
    AVPlayerLooper * _playerLooper; // +0x28
    AVPlayerLayer * _playerLayer; // +0x30
    UIView * _downloadStatusView; // +0x38
    UIImageView * _cloudImageView; // +0x40
    UILabel * _downloadStatusLabel; // +0x48
    WCProgressCircleView * _downloadIndicatorView; // +0x50
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;
- (void)updateCoverWithAsset:(id)arg1;
- (void)stopObservingPlayerLayer;
- (void)play;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)item;
- (void)setItem:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (int)coverImageRequestID;
- (void)setCoverImageRequestID:(int)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLooper;
- (void)setPlayerLooper:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)downloadStatusView;
- (void)setDownloadStatusView:(id)arg1;
- (id)cloudImageView;
- (void)setCloudImageView:(id)arg1;
- (id)downloadStatusLabel;
- (void)setDownloadStatusLabel:(id)arg1;
- (id)downloadIndicatorView;
- (void)setDownloadIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end

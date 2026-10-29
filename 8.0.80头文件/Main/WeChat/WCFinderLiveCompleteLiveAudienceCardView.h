@interface WCFinderLiveCompleteLiveAudienceCardView : UIView <WCFinderFeedImageCDNViewDelegate, MMLiveCDNPlayerViewDelegate, WCFinderFeedContentMediaActionProtocol>
{
    BOOL _isLimitMode; // +0x8
    id /* block */ _actionBlock; // +0x10
    id /* block */ _onLiveAudienceCardViewPlayBlock; // +0x18
    unsigned long long _type; // +0x20
    WCFinderDataItem * _liveDataItem; // +0x28
    WCFinderDataItem * _replayDataItem; // +0x30
    MMUIView * _contentView; // +0x38
    MMUIButton * _actionButton; // +0x40
    UILabel * _titleLabel; // +0x48
    MMLiveCDNPlayerView * _livePlayerView; // +0x50
    WCFinderSimplePlayerView * _replayPlayerView; // +0x58
    MMUIButton * _playButton; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)finderFeedImageLoadFinish;
- (void)updateRecomendPlaying:(BOOL)arg1;
- (void)updateAudienceCardViewWithType:(unsigned long long)arg1 liveDataItem:(id)arg2 replayDataItem:(id)arg3 isLimitMode:(BOOL)arg4;
- (void)playLive;
- (void)onPlayEnd;
- (void)playReplay;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewWillAppear;
- (void)layoutSubviews;
- (void)createUI;
- (void)actionButtonClick;
- (void)layoutUI;
- (id)contentView;
- (id)livePlayerView;
- (id)replayPlayerView;
- (id)titleLabel;
- (id)actionButton;
- (double)getHeightFromWidth:(double)arg1;
- (id)playButton;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)onLiveAudienceCardViewPlayBlock;
- (void)setOnLiveAudienceCardViewPlayBlock:(id /* block */)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)liveDataItem;
- (void)setLiveDataItem:(id)arg1;
- (id)replayDataItem;
- (void)setReplayDataItem:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setLivePlayerView:(id)arg1;
- (void)setReplayPlayerView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (BOOL)isLimitMode;
- (void)setIsLimitMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

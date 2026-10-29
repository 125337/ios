@interface LVMinimizeContainerView : UIView
{
    BOOL _isLoading; // +0x8
    id <LVMinimizeContainerViewDelegate> _delegate; // +0x10
    unsigned long long _style; // +0x18
    UIButton * _contentView; // +0x20
    LVMinimizeHintView * _hintView; // +0x28
    MMUIButton * _playPauseButton; // +0x30
    MMUIButton * _closeButton; // +0x38
    UIView * _playerView; // +0x40
    MMLoadingIndicatorView * _loadingView; // +0x48
    WCShowArea _playerShowArea; // +0x50
}
+ (BOOL)shouldAdjustShowArea:(id)arg1;
+ (unsigned long long)styleForMediaInfo:(id)arg1;
+ (CGSize)sizeForStyle:(unsigned long long)arg1;
+ (CGSize)sizeForMediaInfo:(id)arg1;
- (void)updateShowAreaForMediaInfo:(id)arg1;
- (void)resizeWithMediaInfo:(id)arg1;
- (unsigned long long)currentHintType;
- (void)updateHintType:(unsigned long long)arg1;
- (BOOL)isShowingNextHint;
- (id)initWithFrame:(CGRect)arg1;
- (id)_createButton:(double)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)playPauseClicked:(id)arg1;
- (void)closeClicked:(id)arg1;
- (void)contentClicked:(id)arg1;
- (void)attachPlayerView:(id)arg1;
- (id)detachPlayerView;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsLoading:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLoading;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (WCShowArea)playerShowArea;
- (void)setPlayerShowArea:(WCShowArea)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)hintView;
- (void)setHintView:(id)arg1;
- (id)playPauseButton;
- (void)setPlayPauseButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

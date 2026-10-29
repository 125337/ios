@interface WCFinderInPictureContainerView : UIView
{
    UIView * _gradientView; // +0x8
    UIButton * _closeButton; // +0x10
    UIView * _playerView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 playerView:(id)arg2 targetVC:(id)arg3;
- (void)setFrame:(CGRect)arg1;
- (void)pauseVideo;
- (void)updateTipsLabelWith:(id)arg1 hidden:(BOOL)arg2;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end


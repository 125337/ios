@interface GameVideoRecommendCard : UIView
{
    id <GameVideoRecommendCardDelegate> _delegate; // +0x8
    MMWebImageView * _coverImgView; // +0x10
    UILabel * _descLabel; // +0x18
    UILabel * _durationLabel; // +0x20
    UILabel * _timeLabel; // +0x28
    UIButton * _publishBtn; // +0x30
    UIView * _tagViewContainer; // +0x38
    WCPlayerView * _playerView; // +0x40
    GameHaowanMediaWrap * _mediaWrap; // +0x48
    MMAssetForGameHaowan * _asset; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUp;
- (void)layoutSubviews;
- (id)createPlayerView;
- (void)startPlay;
- (void)pausePlay;
- (id)getPlayerInfoWithUrl:(id)arg1;
- (void)configWithRecommendAsset:(id)arg1;
- (void)addTagViews:(id)arg1;
- (id)calculateCreateTitle:(id)arg1;
- (void)goPublishAction;
- (void)selectAction;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)publishBtn;
- (void)setPublishBtn:(id)arg1;
- (id)tagViewContainer;
- (void)setTagViewContainer:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void).cxx_destruct;
@end


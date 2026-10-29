@interface WCFinderPatMusicCollectionReusableView : WCFinderPatCollectionReusableView <EditVideoBGMPlayerDelegate, WCAudioModuleDelegate>
{
    MMUIButton * _patButton; // +0x8
    UILabel * _patMusicTitleLabel; // +0x10
    UIView * _authorInfoView; // +0x18
    UILabel * _musicAuthorLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    MMUIButton * _playButton; // +0x30
    UILabel * _patCountLabel; // +0x38
    EditVideoBGMPlayer * _bgmPlayer; // +0x40
    FinderTopicBgmInfo * _bgmInfo; // +0x48
    WCFinderAnimationLoadingView * _loadingView; // +0x50
}
+ (double)getPatMusicHeightWithBgmInfo:(id)arg1 titleWording:(id)arg2 screenWid:(double)arg3 enablePostFeed:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpSubViews;
- (void)prepareForReuse;
- (void)setAllSubViewsHidden:(BOOL)arg1;
- (id)loadingView;
- (id)bgmPlayer;
- (id)authorInfoView;
- (id)patMusicTitleLabel;
- (id)arrowImageView;
- (id)musicAuthorLabel;
- (id)playButton;
- (void)onClickPlayAction;
- (void)showLoadingViewAnima:(BOOL)arg1;
- (id)patButton;
- (id)patCountLabel;
- (void)onClickPatButtonAction;
- (void)onClickAuthorAction;
- (void)updatePatMusicWithBgmInfo:(id)arg1 patCount:(unsigned long long)arg2 readTotalCount:(unsigned long long)arg3 titleWording:(id)arg4 enablePostFeed:(BOOL)arg5;
- (double)contentLeftMargin;
- (void)playMusicWith:(id)arg1;
- (void)playMusicWith:(id)arg1 isPlay:(BOOL)arg2;
- (void)stopMusicPlay;
- (void)resumeMusicPlay;
- (BOOL)patPostButtonShow;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)setPatButton:(id)arg1;
- (void)setPatMusicTitleLabel:(id)arg1;
- (void)setAuthorInfoView:(id)arg1;
- (void)setMusicAuthorLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPatCountLabel:(id)arg1;
- (void)setBgmPlayer:(id)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end


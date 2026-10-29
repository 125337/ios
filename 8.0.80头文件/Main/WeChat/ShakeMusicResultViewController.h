@interface ShakeMusicResultViewController : MMUIViewController <MMMusicForwardHandlerDelegate, MMMusicForwardHandlerDataSource, MMMusicFavHandlerDelegate, MMMusicFavHandlerDataSource>
{
    BOOL _shouldNotStopMusic; // +0x70
    BOOL _shouldUseCustomPopAnimation; // +0x71
    id /* block */ _onPopBlock; // +0x78
    unsigned long long _openScene; // +0x80
    MMWebImageView * _musicCoverBgImageView; // +0x88
    MMUIButton * _closeButton; // +0x90
    MMUILabel * _recognitionResultLabel; // +0x98
    UIScrollView * _containerView; // +0xa0
    UIView * _cardContainerView; // +0xa8
    ShakeMusicResultMediaView * _mediaView; // +0xb0
    MMUILabel * _songNameLabel; // +0xb8
    MMUILabel * _singerNameLabel; // +0xc0
    MMWebImageView * _musicCoverImageView; // +0xc8
    ShakeMusicPlayButton * _playIconContainerButton; // +0xd0
    MMUIButton * _forwardButton; // +0xd8
    MMUIButton * _favButton; // +0xe0
    ShakeMusicInfo * _shakeMusicInfo; // +0xe8
    MMMusicInfo * _musicInfo; // +0xf0
    MMMusicForwardHandler * _forwardHandler; // +0xf8
    MMMusicFavHandler * _favHandler; // +0x100
}
- (id)initWithShakeMusicInfo:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutInternal;
- (void)layoutTopArea;
- (void)layoutScrollView;
- (void)layoutCardContainerView;
- (void)setupSubviews;
- (void)loadData;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)musicCoverBgImageView;
- (id)closeButton;
- (id)recognitionResultLabel;
- (id)containerView;
- (id)cardContainerView;
- (id)mediaView;
- (id)songNameLabel;
- (id)singerNameLabel;
- (id)musicCoverImageView;
- (id)playIconContainerButton;
- (id)forwardButton;
- (id)favButton;
- (id)forwardHandler;
- (id)favHandler;
- (void)closeButtonDidClick;
- (void)playIconViewDidClick;
- (void)forwardButtonDidClick;
- (void)favButtonDidClick;
- (id)generateEmptyMVModel;
- (id)musicInfo;
- (id)getMusicShareItem:(id)arg1;
- (void)mmMusicForwardHandlerOnStartLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnEndLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnShareActionSuccess:(id)arg1;
- (void)mmMusicForwardHandler:(id)arg1 onShareToFriends:(id)arg2 withSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandler:(id)arg1 getForwardViewControllerAndPresent:(id)arg2;
- (void)mmMusicForwardHandler:(id)arg1 onShareToWcWithForwardViewController:(id)arg2 andSource:(unsigned long long)arg3;
- (id)mmMusicForwardHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicFavHandlerOnStartLoading:(id)arg1;
- (void)mmMusicFavHandlerOnEndLoading:(id)arg1;
- (void)mmMusicFavHandlerOnAddFav:(id)arg1;
- (id)mmMusicFavHandlerGetMusicShareItem:(id)arg1;
- (id /* block */)onPopBlock;
- (void)setOnPopBlock:(id /* block */)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (void)setMusicCoverBgImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setRecognitionResultLabel:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCardContainerView:(id)arg1;
- (void)setMediaView:(id)arg1;
- (void)setSongNameLabel:(id)arg1;
- (void)setSingerNameLabel:(id)arg1;
- (void)setMusicCoverImageView:(id)arg1;
- (void)setPlayIconContainerButton:(id)arg1;
- (void)setForwardButton:(id)arg1;
- (void)setFavButton:(id)arg1;
- (id)shakeMusicInfo;
- (void)setShakeMusicInfo:(id)arg1;
- (void)setMusicInfo:(id)arg1;
- (void)setForwardHandler:(id)arg1;
- (void)setFavHandler:(id)arg1;
- (BOOL)shouldNotStopMusic;
- (void)setShouldNotStopMusic:(BOOL)arg1;
- (BOOL)shouldUseCustomPopAnimation;
- (void)setShouldUseCustomPopAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface MMMusicPageView : UIView <MMMusicPlayerExt, UITableViewDelegate, UITableViewDataSource, MMImageLoaderObserver, MMWebImageViewDelegate, MMCopyLabelDelegate>
{
    UIImageView * _musicCoverView; // +0x8
    MMWebImageView * _lowMusicCoverWebView; // +0x10
    ColorGradientView * _navBarGradientView; // +0x18
    MMMusicInfo * _musicInfo; // +0x20
    NSURL * _url; // +0x28
    int _currentLyricIndex; // +0x30
    MMTimer * _timer; // +0x38
    float _offset; // +0x40
    NSMutableArray * _lyricsList; // +0x48
    NSMutableArray * _timeList; // +0x50
    UIView * _bgShadeView; // +0x58
    ColorGradientView * _shadeGradientView; // +0x60
    UIView * _bottomBgView; // +0x68
    UIColor * _bgColorByCover; // +0x70
    UIColor * _lyricColorHl; // +0x78
    BOOL _isSingleLyricPage; // +0x80
    NSString * _displayName; // +0x88
    UIView * _musicTitleView; // +0x90
    UILabel * _shareLabel; // +0x98
    MMCopyLabel * _musicTitleLabel; // +0xa0
    MMUILabel * _singleLyricLabel; // +0xa8
    BOOL _isTimeToShowSingleLyric; // +0xb0
    UITableView * _lyricsView; // +0xb8
    UIView * _lyricsContainerView; // +0xc0
    ColorGradientView * _headColorGradientView; // +0xc8
    ColorGradientView * _bottomColorGradientView; // +0xd0
    UIView * _secondPageGuesterView; // +0xd8
    MMMusicLyricResolver * _lyricResolver; // +0xe0
    BOOL _isShakeMusicPage; // +0xe8
    id <MMMusicPageViewDelegate> m_delegate; // +0xf0
    int _musicIndex; // +0xf8
    UIImageView * _arrowUpBtn; // +0x100
    BOOL _hasAddBlurEffect; // +0x108
    UIView * _blurView; // +0x110
    UIImageView * _musicSignImageView; // +0x118
    NSString * _copyText; // +0x120
    double _musicTitleAboveCoverButtom; // +0x128
    double _bottomBgAboveCoverHeight; // +0x130
    BOOL _bShowJumpButton; // +0x138
    CGSize _lastLayoutBoundsSize; // +0x140
}
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(BOOL)arg3 ShowJumpButton:(BOOL)arg4;
- (double)pageWidth;
- (double)pageHeight;
- (BOOL)usesLargeContainerRatio;
- (void)layoutSubviews;
- (id)initWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(BOOL)arg3 andOffset:(float)arg4 ShowJumpButton:(BOOL)arg5;
- (void)configureWithMusicInfo:(id)arg1 andIndex:(int)arg2 andIsSingleLyricPage:(BOOL)arg3 isFirstConfigure:(BOOL)arg4;
- (void)willChangeToSplitMode;
- (void)initPageView;
- (void)setLocalMusicSetting;
- (void)initFirstPage;
- (id)shareLabelText;
- (void)initArrowUpBtn;
- (void)performFadeShowShareLabel;
- (void)becomeCenterPage;
- (void)commitArrowUpAnimation;
- (BOOL)isValidLyric;
- (void)fadeShowShareLabel;
- (void)initMusicTitleView;
- (void)initDisplayName;
- (void)initDisplayNameByUsrName:(id)arg1;
- (void)updateShadeGradientView;
- (void)updateColorGradientView;
- (void)updateNavBarGradientView;
- (void)initSecondPage;
- (void)setAlphaForSubViews;
- (void)startScroll;
- (void)scroll;
- (void)updateCurIndex;
- (void)updateCurIndexJustByTime;
- (void)stopTimer;
- (void)updateTimeLyricArrayWithLyrics:(id)arg1;
- (void)updateLyrics:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isValidDisplayName;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)updateAlbumCoverImg:(id)arg1;
- (void)updateAlbumCoverImgByLocalImage:(id)arg1;
- (id)getLyricColor;
- (id)getBackGroundColor;
- (void)updateTwoColorsByImage:(id)arg1;
- (void)setDefaultTwoColors;
- (void)setLocalFileTwoColors;
- (id)getMusicInfo;
- (void)addGestureRecognizers;
- (void)menuItemHidden:(id)arg1;
- (void)lyricsViewTapped;
- (void)coverImageViewTapped;
- (void)shadeGradientViewTapped;
- (void)shadeGradientViewSwipeDown;
- (void)musicTitleViewTapped;
- (void)onShowSecondPage;
- (void)showSecondPage;
- (void)onSwipeBack2FirstPage;
- (void)back2FirstPage;
- (id)getCoverImage;
- (void)scrollToMusicOffset:(float)arg1;
- (void)updateLowMusicCoverWebView;
- (void)addBlurEffectForMusicCover;
- (void)addBlurEffectForOverseaMusicCover;
- (void)onLoadImageOK:(id)arg1;
- (void)onNewSeekTime:(double)arg1;
- (void)layoutPageView;
- (void)resetMusicCoverFrame;
- (void)resetWidthAndX;
- (void)resetLyricContainerViewY;
- (void)resetBgShadeViewY;
- (void)resetMusicTitleViewY;
- (void)layoutForCurrentBounds;
- (double)getCoverViewSideLength;
- (double)getCoverViewOriginX;
- (void)tryToUpdateBlurEffect;
- (void)onLabelLongPress:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isShakeMusicPage;
- (void)setIsShakeMusicPage:(BOOL)arg1;
- (BOOL)isSingleLyricPage;
- (void)setIsSingleLyricPage:(BOOL)arg1;
- (id)arrowUpBtn;
- (void)setArrowUpBtn:(id)arg1;
- (void).cxx_destruct;
@end

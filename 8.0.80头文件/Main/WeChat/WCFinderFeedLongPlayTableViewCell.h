@interface WCFinderFeedLongPlayTableViewCell : UITableViewCell <WCFinderPlayBarDelegate, WCFinderMegaVideoPropertyExt, WCFinderFeedContentTextClickActionDelegate, WCAudioSessionExt>
{
    id <WCFinderFeedLongPlayTableViewCellDelegate> _delegate; // +0x8
    WCPlayerView * _player; // +0x10
    WCFinderPlayBar * _playBar; // +0x18
    UIView * _bottomView; // +0x20
    UIButton * _fullScreenBtn; // +0x28
    MMWebImageView * _headImageView; // +0x30
    UILabel * _userNameLabel; // +0x38
    UIView * _topView; // +0x40
    MMUIButton * _likeButton; // +0x48
    UIButton * _favButton; // +0x50
    UIButton * _shareButton; // +0x58
    WCFinderFeedContentTextView * _descTextView; // +0x60
    WCFinderFeedImageCDNView * _coverImageView; // +0x68
    UIImageView * _captureImageView; // +0x70
    UIView * _dangerousView; // +0x78
    UILabel * _dangerousLabel; // +0x80
    UIButton * _moreButton; // +0x88
    UIImageView * _lockImageView; // +0x90
    UIView * _rightTopView; // +0x98
    UIScrollView * _titleScrollView; // +0xa0
    UIStackView * _titleView; // +0xa8
    WCFinderAnimationLoadingView * _loadingView; // +0xb0
    MMUIButton * _playRateButton; // +0xb8
    UIView * _playRatePanel; // +0xc0
    WCFinderFeedContentVM * _contentVM; // +0xc8
    WCFinderMegaVideoViewModel * _viewModel; // +0xd0
    NSString * _url; // +0xd8
    NSObject * _dispose; // +0xe0
    WCFinderFeedMediaWrap * _mediaWrap; // +0xe8
    WCFinderMediaInfo * _mediaInfo; // +0xf0
    UIPanGestureRecognizer * _playerPostionPanGesture; // +0xf8
    UITapGestureRecognizer * _playerTapGesture; // +0x100
    long long _orientation; // +0x108
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)onPanProgress:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)onDismiss;
- (void)onLandscape;
- (void)onProtrait;
- (void)onAvatar;
- (void)onlike;
- (void)onMiniMize;
- (void)onInPicture;
- (void)onMore;
- (void)onFav;
- (void)onShare;
- (void)hideFunctionsToggle;
- (void)onReport;
- (void)titleExpandToggle;
- (void)onDoubleLike:(id)arg1;
- (void)onPlayRate:(id)arg1;
- (void)updateStatus;
- (void)updateFullScreenBtn;
- (void)updateLayoutWithItem:(id)arg1 viewModel:(id)arg2 orientation:(long long)arg3;
- (BOOL)createPlayerIfNeed;
- (void)setupProtraitUI;
- (id)likeButton;
- (void)setupBottom;
- (void)setupLandScapedBottom;
- (void)setupTop;
- (id)playBar;
- (id)descTextView;
- (id)dangerousView;
- (id)authorIcon;
- (id)playRatePanel;
- (void)resetFunctionState;
- (void)addGestures;
- (void)play;
- (void)stop;
- (void)stopAll;
- (void)stashPlayer;
- (void)reportPlayerInfo;
- (BOOL)canRecognizeTouch:(id)arg1;
- (void)playPositionMoveBegin;
- (void)playPositionMoveChange:(double)arg1;
- (void)playPositionMoveEnd;
- (BOOL)isBottomViewHidden;
- (void)inPicture;
- (void)closeInPicture;
- (BOOL)setPlayerMute:(BOOL)arg1;
- (void)setPlayRate:(double)arg1;
- (void)showPlayRatePanel;
- (id)playerReporter;
- (BOOL)isAuthorView;
- (id)megaVideo;
- (void)showCapture:(id)arg1;
- (void)showDoubleLikeAnimation:(CGPoint)arg1;
- (id)playRateTitleForRate:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoStart;
- (void)onVideoEnd;
- (void)onVideoPause;
- (void)onVideoStartDrag;
- (void)onVideoLoading;
- (void)onVideoStopLoading;
- (void)onComment;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)onFinderMegaVideoFavChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoLikeChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoPrivateChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoUpdate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setPlayBar:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)fullScreenBtn;
- (void)setFullScreenBtn:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (void)setLikeButton:(id)arg1;
- (id)favButton;
- (void)setFavButton:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)captureImageView;
- (void)setCaptureImageView:(id)arg1;
- (void)setDangerousView:(id)arg1;
- (id)dangerousLabel;
- (void)setDangerousLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)lockImageView;
- (void)setLockImageView:(id)arg1;
- (id)rightTopView;
- (void)setRightTopView:(id)arg1;
- (id)titleScrollView;
- (void)setTitleScrollView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)playRateButton;
- (void)setPlayRateButton:(id)arg1;
- (void)setPlayRatePanel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)dispose;
- (void)setDispose:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)playerPostionPanGesture;
- (void)setPlayerPostionPanGesture:(id)arg1;
- (id)playerTapGesture;
- (void)setPlayerTapGesture:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

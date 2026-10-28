@interface WCFinderFeedLongPlayTableViewCell : UITableViewCell <WCFinderPlayBarDelegate, WCFinderMegaVideoPropertyExt, WCFinderFeedContentTextClickActionDelegate, WCAudioSessionExt, UITextViewDelegate>
{
    id <WCFinderFeedLongPlayTableViewCellDelegate> _delegate; // +0x8
    WCPlayerView * _player; // +0x10
    WCFinderPlayBar * _playBar; // +0x18
    MMTextView * _postTextView; // +0x20
    UIView * _postContainerView; // +0x28
    UILabel * _postLengthLabel; // +0x30
    UIView * _bottomView; // +0x38
    UIButton * _fullScreenBtn; // +0x40
    MMWebImageView * _headImageView; // +0x48
    UILabel * _userNameLabel; // +0x50
    UIView * _topView; // +0x58
    MMUIButton * _likeButton; // +0x60
    UIButton * _favButton; // +0x68
    UIButton * _shareButton; // +0x70
    UIButton * _bulletButton; // +0x78
    WCFinderFeedContentTextView * _descTextView; // +0x80
    WCFinderFeedImageCDNView * _coverImageView; // +0x88
    UIImageView * _captureImageView; // +0x90
    UIView * _bulletActionView; // +0x98
    UIView * _bottomFunctionView; // +0xa0
    UIView * _dangerousView; // +0xa8
    UILabel * _dangerousLabel; // +0xb0
    UIButton * _moreButton; // +0xb8
    UIImageView * _lockImageView; // +0xc0
    UIView * _rightTopView; // +0xc8
    UIScrollView * _titleScrollView; // +0xd0
    UIStackView * _titleView; // +0xd8
    WCFinderBulletGroupView * _bulletView; // +0xe0
    WCFinderAnimationLoadingView * _loadingView; // +0xe8
    MMUIButton * _playRateButton; // +0xf0
    UIView * _playRatePanel; // +0xf8
    WCFinderFeedContentVM * _contentVM; // +0x100
    WCFinderMegaVideoViewModel * _viewModel; // +0x108
    NSString * _url; // +0x110
    NSObject * _dispose; // +0x118
    double _nextBulletRequestTime; // +0x120
    WCFinderFeedMediaWrap * _mediaWrap; // +0x128
    WCFinderMediaInfo * _mediaInfo; // +0x130
    UIPanGestureRecognizer * _playerPostionPanGesture; // +0x138
    UITapGestureRecognizer * _playerTapGesture; // +0x140
    long long _orientation; // +0x148
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)onPanProgress:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)onKeyboardFrameChange:(id)arg1;
- (void)onDismiss;
- (void)onLandscape;
- (void)onProtrait;
- (void)onEditingEnd:(id)arg1;
- (void)onAvatar;
- (void)onlike;
- (void)onMiniMize;
- (void)onInPicture;
- (void)onMore;
- (void)onFav;
- (void)onShare;
- (void)hideFunctionsToggle;
- (void)onBulletToggel;
- (void)onReport;
- (void)onDeleteBullet;
- (void)onReportBullet:(id)arg1;
- (void)titleExpandToggle;
- (void)onDoubleLike:(id)arg1;
- (void)onPlayRate:(id)arg1;
- (void)updateStatus;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)updateFullScreenBtn;
- (double)playerHeightFitInHeight:(double)arg1;
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
- (id)postLengthLabel;
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
- (BOOL)isEditing;
- (void)setPlayRate:(double)arg1;
- (void)showPlayRatePanel;
- (id)playerReporter;
- (BOOL)isAuthorView;
- (id)megaVideo;
- (void)showCapture:(id)arg1;
- (void)showDoubleLikeAnimation:(CGPoint)arg1;
- (id)playRateTitleForRate:(double)arg1;
- (void)resetBulletConfig;
- (void)updateBullet;
- (void)fetchNextPageBulletInPosition:(double)arg1;
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
- (void)onFinderMegaVideoBulletOpenChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoPrivateChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoUpdate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setPlayBar:(id)arg1;
- (id)postTextView;
- (void)setPostTextView:(id)arg1;
- (id)postContainerView;
- (void)setPostContainerView:(id)arg1;
- (void)setPostLengthLabel:(id)arg1;
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
- (id)bulletButton;
- (void)setBulletButton:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)captureImageView;
- (void)setCaptureImageView:(id)arg1;
- (id)bulletActionView;
- (void)setBulletActionView:(id)arg1;
- (id)bottomFunctionView;
- (void)setBottomFunctionView:(id)arg1;
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
- (id)bulletView;
- (void)setBulletView:(id)arg1;
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
- (double)nextBulletRequestTime;
- (void)setNextBulletRequestTime:(double)arg1;
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

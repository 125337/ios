@interface WCFinderPickerListTableViewCell : WCFinderTableViewCell <WCFinderProgressBarDelegate, WCFinderFeedContentMediaActionProtocol, ILinkEventExt, WCFinderFocusCellProtocol>
{
    BOOL _isPaused; // +0x8
    id <WCFinderPickerListTableViewCellDelegate> _delegate; // +0x10
    WCFinderFullNewMultiMediaView * _mediaView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    WCFinderHeadImageView * _headView; // +0x28
    WCFinderAuthInfoIconView * _authView; // +0x30
    RichTextView * _nameLabel; // +0x38
    UIImageView * _likeIcon; // +0x40
    UILabel * _likeNumLabel; // +0x48
    RichTextView * _contentLabel; // +0x50
    WCFinderNormalProgressBar * _progressBar; // +0x58
    CAGradientLayer * _gradientLayer; // +0x60
    UILabel * _curProgressTimeLabel; // +0x68
    UILabel * _totalProgressTimeLabel; // +0x70
    UIImageView * _pauseView; // +0x78
    double _duration; // +0x80
    double _headViewBottomOffset; // +0x88
}
+ (id)cellId;
+ (double)cellH;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)updateMediaWith:(id)arg1 isSubScene:(BOOL)arg2;
- (id)createGradientLayer;
- (void)layoutSubviews;
- (void)setHeadViewBottomOffset:(double)arg1;
- (BOOL)isSupportVideoProcess;
- (void)setTargetViewHidden:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)_triggerAntiAddictCheckLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)likeIcon;
- (void)setLikeIcon:(id)arg1;
- (id)likeNumLabel;
- (void)setLikeNumLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)curProgressTimeLabel;
- (void)setCurProgressTimeLabel:(id)arg1;
- (id)totalProgressTimeLabel;
- (void)setTotalProgressTimeLabel:(id)arg1;
- (id)pauseView;
- (void)setPauseView:(id)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)headViewBottomOffset;
- (void).cxx_destruct;
@end

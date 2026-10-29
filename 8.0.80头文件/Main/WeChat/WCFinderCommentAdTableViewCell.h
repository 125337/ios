@interface WCFinderCommentAdTableViewCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderJumpInfoPanelViewDelegate, WCGeneralMonitorCellProtocol, WCPlayerControlProtocol, WCPlayerEventExt>
{
    BOOL _isOnFirstScreen; // +0x8
    BOOL _isExposing; // +0x9
    WCPlayerView * playerView; // +0x10
    id <WCFinderCommentAdTableViewCellDelegate> _delegate; // +0x18
    WCFinderCommentSectionViewModel * _commentVM; // +0x20
    NSIndexPath * _indexPath; // +0x28
    UIColor * _customBgColor; // +0x30
    WCFinderHeadImageView * _avatarImageView; // +0x38
    UILabel * _nickNameLabel; // +0x40
    MMWebImageView * _identityView; // +0x48
    UIButton * _feedbackButton; // +0x50
    WCFinderFeedContentTextView * _textView; // +0x58
    WCFinderJumpInfoPanelView * _jumpInfoPanelView; // +0x60
    UIImageView * _adImageView; // +0x68
    WCFinderLiveNowView * _liveNowView; // +0x70
    UIView * _cardContainer; // +0x78
    MMUIButton * _cardActionButton; // +0x80
    unsigned long long _startExposeTimestamp; // +0x88
    unsigned long long _startDecodeTimestamp; // +0x90
    unsigned long long _playCount; // +0x98
    unsigned long long _videoExposeTime; // +0xa0
    unsigned long long _playTotoalTime; // +0xa8
    WCDownloadArgsWrap * _playerArgsWrap; // +0xb0
    NSMutableSet * _lastBufferEventArray; // +0xb8
    unsigned long long _preloadPercent; // +0xc0
    unsigned long long _startPlayTime; // +0xc8
}
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 halfScreenHeight:(double)arg3;
+ (double)textViewMaxWidthWith:(double)arg1 avatarLeftMargin:(double)arg2;
+ (double)heightForMediaWithRatio:(double)arg1 commentViewHeight:(double)arg2 maxHeightPercentage:(long long)arg3 width:(double)arg4 minArea:(unsigned long long)arg5;
+ (CGSize)sizeForCardMediaWithCardInfo:(id)arg1;
+ (id)commentInViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (void)resetCellData;
- (void)updateWithModel:(id)arg1 width:(double)arg2;
- (void)checkPlayerExposeState;
- (void)startPlayIfCan;
- (void)seekToTime:(double)arg1;
- (void)pausePlayIfCan;
- (BOOL)canReportWithReportScene:(long long)arg1;
- (id)commentAdReportDictWithReportScene:(long long)arg1;
- (id)commentAdReportDictWithReportScene:(long long)arg1 clickArea:(int)arg2;
- (id)loadingMonitorInfo;
- (void)updateAccountInfoWithJumpInfoStyle:(id)arg1;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (void)updateLiveLogoIfNeeded;
- (void)layoutUI;
- (void)updateImageViewWithCommentImageInfo:(id)arg1 imgInfo:(id)arg2;
- (void)updatePlayerViewWithCommentInfo:(id)arg1 videoInfo:(id)arg2;
- (double)heightForMediaWithRatio:(double)arg1 maxHeightPercentage:(long long)arg2 minArea:(unsigned long long)arg3;
- (void)clickNickname;
- (id)getComment;
- (void)clickContentLink;
- (void)clickADContentActionWithArea:(int)arg1;
- (void)feedbackButtonClicked;
- (void)longPress:(id)arg1;
- (void)showCommentMenuView;
- (id)getWaitDetailsWith:(id)arg1;
- (id)replaceCommaToSemicolon:(id)arg1;
- (BOOL)isVideoExist;
- (long long)hitPreloadPercent;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)avatarImageView;
- (id)nickNameLabel;
- (id)identityView;
- (id)feedbackButton;
- (void)updateFeedbackButtonLayout;
- (id)textView;
- (id)jumpInfoPanelView;
- (id)adImageView;
- (id)liveNowView;
- (id)cardContainer;
- (id)cardActionButton;
- (id)lastBufferEventArray;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (double)jumpInfoPanelViewRelateMediaWidth:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onPlayerStartPlay:(id)arg1;
- (id)getGeneralMonitorCellBizId;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)commentVM;
- (void)setCommentVM:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (BOOL)isOnFirstScreen;
- (void)setIsOnFirstScreen:(BOOL)arg1;
- (id)customBgColor;
- (void)setCustomBgColor:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setIdentityView:(id)arg1;
- (void)setFeedbackButton:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setJumpInfoPanelView:(id)arg1;
- (void)setAdImageView:(id)arg1;
- (void)setLiveNowView:(id)arg1;
- (void)setCardContainer:(id)arg1;
- (void)setCardActionButton:(id)arg1;
- (unsigned long long)startExposeTimestamp;
- (void)setStartExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)startDecodeTimestamp;
- (void)setStartDecodeTimestamp:(unsigned long long)arg1;
- (unsigned long long)playCount;
- (void)setPlayCount:(unsigned long long)arg1;
- (unsigned long long)videoExposeTime;
- (void)setVideoExposeTime:(unsigned long long)arg1;
- (unsigned long long)playTotoalTime;
- (void)setPlayTotoalTime:(unsigned long long)arg1;
- (BOOL)isExposing;
- (void)setIsExposing:(BOOL)arg1;
- (id)playerArgsWrap;
- (void)setPlayerArgsWrap:(id)arg1;
- (void)setLastBufferEventArray:(id)arg1;
- (unsigned long long)preloadPercent;
- (void)setPreloadPercent:(unsigned long long)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

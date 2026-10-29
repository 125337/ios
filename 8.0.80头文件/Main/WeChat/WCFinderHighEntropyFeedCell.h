@interface WCFinderHighEntropyFeedCell : UITableViewCell <WCFinderHighEntropyJumpInfoPanelViewDelegate, WCFinderFocusCellProtocol>
{
    id <WCFinderHighEntropyFeedCellDelegate> _cellDelegate; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    WCFinderHighEntropyAuthorView * _authorView; // +0x18
    WCFinderHighEntropyContentView * _descView; // +0x20
    WCFinderHighEntropyMediaView * _mediaView; // +0x28
    WCFinderHighEntropyFriendLikeView * _friendLikeView; // +0x30
    WCFinderHighEntropyHotCommentView * _hotCommentView; // +0x38
    WCFinderHighEntropyInteractionView * _interactionView; // +0x40
    WCFinderFeedContentVM * _contentVM; // +0x48
    WCFinderHighEntropyJumpInfoPanelView * _jumpInfoPanelView; // +0x50
    UIView * _separatorView; // +0x58
    double _cachedHeight; // +0x60
    double _contentMaxWidth; // +0x68
}
+ (double)jumpInfoPanelMaxWidthWithCellWidth:(double)arg1;
+ (double)jumpInfoPanelMaxWidthWithContentMaxWidth:(double)arg1;
+ (double)mediaTargetLongEdgeWithCellWidth:(double)arg1;
+ (double)mediaTargetLongEdgeWithContentMaxWidth:(double)arg1;
+ (double)friendLikeSlotHeightWithContentVM:(id)arg1;
+ (struct)priorityInfoSlotLayoutWithContentVM:(id)arg1 maxWidth:(double)arg2;
+ (double)authorOriginYForNoDescLayout;
+ (double)mediaOriginYForNoDescLayout;
+ (double)stackHeightBeforeInfoSlotWithContentHeight:(double)arg1 mediaHeight:(double)arg2;
+ (double)cellHeightWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)configureWithContentVM:(id)arg1 maxWidth:(double)arg2 commonDelegate:(id)arg3;
- (BOOL)refreshWithContentVM:(id)arg1 changedParts:(unsigned long long)arg2 maxWidth:(double)arg3;
- (void)applyLayoutMarginsToHostedView:(id)arg1;
- (double)currentJumpInfoPanelMaxWidth;
- (void)layoutHostedCells;
- (void)layoutHostedView:(id)arg1 width:(double)arg2 originY:(double *)arg3 height:(double)arg4;
- (void)playVideoIfSupportWithSilence:(BOOL)arg1;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)pauseVideo;
- (void)stopVideo;
- (void)stopVideoIfSupport;
- (void)showMuteButton:(BOOL)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (double)getMaxPlayVideoTime;
- (id)transitionSourceViewForImageIndex:(unsigned long long)arg1;
- (void)scrollCurrentImageToLeftAnimated:(BOOL)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (BOOL)currentMediaIsPlay;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)jumpInfoPanelView:(id)arg1 didClickJumpInfo:(id)arg2 style:(id)arg3;
- (void)jumpInfoPanelView:(id)arg1 didChangeContentVM:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAvatarBorderColor;
- (void)onAvatarTapped;
- (void)beginPicStatsExposure;
- (void)endPicStatsExposure;
- (void)enterFocusArea;
- (void)leaveFocusArea;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)friendLikeView;
- (void)setFriendLikeView:(id)arg1;
- (id)hotCommentView;
- (void)setHotCommentView:(id)arg1;
- (id)interactionView;
- (void)setInteractionView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)jumpInfoPanelView;
- (void)setJumpInfoPanelView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (double)cachedHeight;
- (void)setCachedHeight:(double)arg1;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
